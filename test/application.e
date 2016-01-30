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
        do
			-- Create API
			-- create api.make("https://samplechat.firebaseio-demo.com")
            -- create api.make("https://fiery-fire-4173.firebaseio.com")
            create api.make_with_auth("https://fiery-fire-4173.firebaseio.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")

			-- Test GET
			-- api.set_print_format("pretty")
            -- api.set_print_format(Void)

            -- api.set_shallow(True)

            -- api.set_format_response("export")

            -- api.set_order_by_type("key")
            -- api.set_start_at_value("d")
            -- api.set_end_at_value("i")
            -- api.set_end_at_value(Void)
            -- api.set_equal_to_value("jim")

            -- api.set_order_by_type("value")
            -- api.set_start_at_value("2")

            -- api.set_limit_to_first_value(3)
            -- api.clear_filtering_values()
            -- api.clear_all_query_settings()

        	-- response := api.get("/scores")

			-- TEST PUT
			-- value := "{%".sv%": %"timestamp%"}"
            -- value := "{%".value%": 2, %".priority%": 6.0}"
			-- response := api.put("/scores/Duo", value)

			-- TEST POST
		    -- value := "{%"Zoe%": 2}"
			-- response := api.post("/scores", value)

			-- TEST PATCH
			-- value := "{%"Zoe%": 2}"
			-- response := api.patch("/scores", value)

			-- TEST DELETE
			-- response := api.delete("keyB")

			-- TEST DOWNLOAD
			-- response := api.download(Void, "file")

            -- TEST GET_PRIORITIES
            -- response := api.get_priority("/scores/Haribo")

            -- TEST RETRIEVE_RULES
            response := api.retrieve_rules()

            -- TEST UPDATE_RULES
            -- value := "{%"rules%": {%".read%": true}}"
            -- response := api.update_rules(value)

            -- TEST STREAM
            -- response := api.stream("/cool")

            if response /= Void then
                print (response.body)
            end
        end

end
