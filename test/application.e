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

			getResponse: detachable RESPONSE
			-- putResponse: detachable RESPONSE
			-- postResponse: detachable RESPONSE
			-- patchResponse: detachable RESPONSE
			-- deleteResponse: detachable RESPONSE
        do
			-- Create API
    		-- create api.make_with_auth("https://fiery-fire-4173.firebaseio.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")
			-- create api.make("https://samplechat.firebaseio-demo.com")
            create api.make("https://fiery-fire-4173.firebaseio.com")

			-- Test GET
			api.set_print_format("pretty")
            -- api.set_print_format(Void)

            -- api.set_shallow(True)
            -- print("set shallow to true %N")
            -- api.set_shallow(Void)
            -- print("set shallow to void %N")

            -- api.set_format_response("export")

            api.set_order_by_type("key")
            api.set_start_at_value("d")
            api.set_end_at_value("i")
            api.set_end_at_value(Void)

            -- api.set_order_by_type("value")
            -- api.set_start_at_value("50")

		    getResponse := api.get("/scores")
			if getResponse /= Void then
				print(getResponse.body)
			end

			-- TEST PUT
			-- value := "{%".indexOn%": %".value%"}"
			-- putResponse := api.put("/scores", value)
			-- if putResponse /= Void then
            --     print(putResponse.body)
			-- end

			-- TEST POST
			-- value := "{%"keyC%": %"valueC%"}"
			-- postResponse := api.post("keyC", value)
			-- if postResponse /= Void then
			--    print(postResponse.body)
			-- end


			-- TEST PATCH
			-- value := "{%"keyD%": %"valueD%"}"
			-- patchResponse := api.patch("keyD", value)
			-- if patchResponse /= Void then
			--    print(patchResponse.body)
			-- end

			-- TEST DELETE
			-- deleteResponse := api.delete("keyB")
			-- if deleteResponse /= Void then
			--    print(deleteResponse.body)
			-- end

        end

end
