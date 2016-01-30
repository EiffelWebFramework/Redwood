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
	ARGUMENTS
	-- EQA_TEST_SET

create make

feature {NONE} -- Initialization

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

	test_get (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- Test GET
		do
			print ("Testing GET%N")
			Result := api.get (a_path)
			print (Result)
			-- assert (Result.status = 400)
			print ("%N")
		end

	test_put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
			-- Test PUT
		do
			print ("Testing PUT%N")
			Result := api.put (a_path, a_value)
			print (Result)
			print ("%N")
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
		do
			print ("Testing PATCH%N")
			Result := api.patch (a_path, a_value)
			print (Result)
			print ("%N")
		end

	test_delete (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- TEST DELETE
		do
			print ("Testing DELETE%N")
			Result := api.delete (a_path)
			print (Result)
			print ("%N")
		end
