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
			create test.make("https://samplechat.firebaseio-demo.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")
			response := test.test_get("/scores")
        end

end
