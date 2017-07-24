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
			response: detachable RESPONSE
			test: TEST_REST_API
        do
			create test
			create api.make ("https://samplechat.firebaseio-demo.com")

			-- Testing GET
			-- Clearing database, putting objects into the database and then testing.
			response := api.delete(Void)
			response := api.put (Void, "{%"keyA%": %"valueA%"}")
			response := test.test_get ("/keyA", "valueA")

			-- Testing PUT
			-- Clearing database and then testing.
			-- response := api.delete(Void)
			-- response := test.test_put (Void, "{%"keyA%": %"valueA%"}", "valueA", "/keyA")

			-- Testing DELETE
			-- Clearing database, putting objects into the database and then deleting.
			-- response := api.delete(Void)
			-- response := api.put (Void, "{%"keyA%": %"valueA%"}")
			-- response := test.test_delete ("/keyA")
        end

end
