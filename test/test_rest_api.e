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
			make ("https://fiery-fire-4173.firebaseio.com", Void)
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
		do
			-- GET item from the database.
			Result := api.get (a_path)

			-- Ensures the GET response is the same as the expected value.
			value := "%"" + expected_value + "%""
			if Result /= Void then
				print (Result.body)
				print ("%N")
				print (value)
				assert ("Checking GET response.", Result.body = value)
			end
		end

	test_put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
			-- Test PUT
		local
			value: READABLE_STRING_8
		do
			-- PUT item into the database.
			Result := api.put (a_path, a_value)

			-- Checks that the correct item is in the database.
			value := "%"" + a_value + "%""
			Result := api.get (a_path)
			if Result /= Void then
				assert ("GET = Put a_value", Result.body = a_value)
			end
		end

	test_post (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
			-- Test POST
		do
			print ("Testing POST%N")
			Result := api.post (a_path, a_value)
			print (Result)
			print ("%N")
		end

	test_patch (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
			-- TEST PATCH
		local
			value: READABLE_STRING_8
		do
			-- Patch item.
			Result := api.patch(a_path, a_value)
			value := "%"" + a_value "%""
			if Result /= Void then
				assert ("GET value = a_value", api.get (a_path, a_value) = value)
			end
			print ("Testing PATCH%N")
			Result := api.patch (a_path, a_value)
			print (Result)
			print ("%N")
		end

	test_delete (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- TEST DELETE
		do
			-- Ensures that the path exists.
			Result := api.get (a_path)
			if Result /= Void then
				print (Result.body)
				print ("%N")
				print (value)
				assert ("Checking GET response.", Result.body = value)
			end

			-- Ensures that the delete is successful, through status response.
			Result := api.delete (a_path)
			if Result /= Void then
				print (Result.body)
				print ("%N")
				print (value)
				assert ("Checking GET response.", Result.body = value)
			end

			-- Ensures that the delete is successful, through a failed GET.
			Result := api.delete (a_path)
			if Result /= Void then
				print (Result.body)
				print ("%N")
				print (value)
				assert ("Checking GET response.", Result.body = value)
			end

			Result := api.get (a_path)
			print ("%N")
		end
end
