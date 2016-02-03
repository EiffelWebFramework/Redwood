note
	description: "Application"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

    make
		local
			api: FIREBASE_API
			value: READABLE_STRING_8
			response: detachable RESPONSE
			test: TEST_REST_API
        do
			create test
			create api.make ("https://samplechat.firebaseio-demo.com")

			-- Testing GET
			-- Putting objects into the database and then testing.
			- Tests currently work with atomic values only.
			response := api.put ("", "{%"keyA%", %"valueA%"}")
			response := test.test_get ("/keyA", "valueA")

			-- Testing PUT
			response := test.test_put ("", "{%"keyB%", %"valueB%"}")

			-- Testing POST

			-- Testing PATCH
			response := api.put ("", "{%"keyC%", %"valueC%"}")
			response := test.test_patch ("/keyC", "valueCA")

			-- Testing DELETE
			-- Putting objects into the database and then testing.
			response := api.put ("", "{%"keyD%", %"valueD%"}")
			response := api.test_delete ("/keyD")

        end

end
