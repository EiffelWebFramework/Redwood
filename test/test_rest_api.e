note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	TEST_REST_API

inherit
	EQA_TEST_SET

redefine
	on_prepare

end

feature {NONE} -- Initialization
	on_prepare
		do
			make ("https://samplechat.firebaseio-demo.com", Void)
		end

	make (a_base_uri: READABLE_STRING_8; a_auth: detachable READABLE_STRING_8)
		do
			base_uri := a_base_uri
			auth := a_auth
			if attached auth as ll_auth then
				create api.make_with_auth(base_uri, ll_auth)
			else
				create api.make(base_uri)
			end
		end

feature -- Access

	base_uri: READABLE_STRING_8
			-- Base uri.

	auth: detachable READABLE_STRING_8
			-- Firebase authentication token or app's secret.

	api: FIREBASE_API
			-- Firebase API

feature -- Test routines

	test_get (a_path: detachable READABLE_STRING_8; expected_value: READABLE_STRING_8): detachable RESPONSE
			-- Test GET
		local
			value: READABLE_STRING_8
			body: READABLE_STRING_8
		do
			-- GET item from the database.
			Result := api.get (a_path)

			-- Ensures the response value is the same as the expected value.
			value := "%"" + expected_value + "%""
			if Result /= Void then
				if attached Result.body as ll_body then
					body := ll_body
				else
					body := ""
				end
				assert ("Checking GET response.", body.same_string (value))
			end
		end

	test_put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8; expected_value: READABLE_STRING_8; path_to_check: detachable READABLE_STRING_8): detachable RESPONSE
			-- Test PUT
		local
			value: READABLE_STRING_8
			body: READABLE_STRING_8
		do
			-- PUT item into the database.
			Result := api.put (a_path, a_value)

			-- Checks that the correct item is in the database.
			value := "%"" + expected_value + "%""
			Result := api.get (path_to_check)
			if Result /= Void then
				if attached Result.body as ll_body then
					body := ll_body
				else
					body := ""
				end
				assert ("Checking PUT response.", body.same_string (value))
			end
		end

	test_delete (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- TEST DELETE
		local
			body: READABLE_STRING_8
		do
			-- Ensures that the path originally exists.
			Result := api.get (a_path)
			if Result /= Void then
				if attached Result.body as ll_body then
					body := ll_body
				else
					body := ""
				end
				assert ("Checking path exists.", not body.same_string ("null"))
			end

			-- Ensures that the delete is successful, through status response.
			Result := api.delete (a_path)
			if Result /= Void then
				assert ("Checking delete is successful.", Result.status = 200)
			end

			-- Ensures that the delete is successful, through a GET that returns null.
			Result := api.get (a_path)
			if Result /= Void then
				if attached Result.body as ll_body then
					body := ll_body
				else
					body := ""
				end
				assert ("Checking GET response.", body.same_string ("null"))
			end
		end
end
