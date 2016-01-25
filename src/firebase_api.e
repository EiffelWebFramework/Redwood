note
	description: "Firebase API"
	date: "$Date$"
	revision: "$Revision$"
	EIS: "name=Firebase REST API", "src=https://www.firebase.com/docs/rest/api/", "protocol=uri"
class
	FIREBASE_API

inherit

	SHARED_EJSON

create
	make,
	make_with_auth

feature {NONE} -- Initialization

	make (a_base_uri: READABLE_STRING_8)
			-- Create an object firebase with a base uri `a_base_uri'
		do
			base_uri := a_base_uri
			auth := ""
		ensure
			base_uri_set: base_uri = a_base_uri
			empty_auth: auth.is_empty
		end

	make_with_auth (a_base_uri: READABLE_STRING_8; a_auth: READABLE_STRING_8)
			-- Create an object firebase with a base uri `a_base_uri'.
		do
			base_uri := a_base_uri
			auth := a_auth
		ensure
			base_uri_set: base_uri = a_base_uri
			auth_set: auth = a_auth
		end


feature -- Access

	base_uri: READABLE_STRING_8
			-- Base uri.

	Firebase_api_json_extension: STRING_8 = ".json"
			-- URL firebase extension.

	auth: READABLE_STRING_8
			-- Firebase authentication token or app's secret.

	print_format: detachable READABLE_STRING_8
			-- Formats the data returned in the response from the server.
			-- Value is either "pretty", "silent" or Void.

	is_shallow: detachable BOOLEAN
			-- Limits the depth of the response.
			-- Shallow cannot be mixed with other parameters.

	format_response: detachable READABLE_STRING_8
			-- Server will encode priorities in response if format is set to export.

    order_by: detachable READABLE_STRING_8

    start_at: detachable READABLE_STRING_8

    end_at: detachable READABLE_STRING_8

    equal_to: detachable READABLE_STRING_8

    limit_to_first: detachable READABLE_STRING_8

    limit_to_last: detachable READABLE_STRING_8

    priority_get: detachable BOOLEAN

    priority: detachable READABLE_STRING_8

feature -- REST API

    get (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- Reading Data.
		local
			l_request: REQUEST
		do
			create l_request.make ("GET", new_uri (a_path))
			Result := l_request.execute
		end

    put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
     		-- Writing data.
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("PUT", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end

    post (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
     		-- Pushing Data.
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("POST", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end

    patch (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
     		-- Updating Data.
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("PATCH", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end

    delete (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- Removing Data.
		local
			l_request: REQUEST
		do
			create l_request.make ("DELETE", new_uri (a_path))
			Result := l_request.execute
		end


feature -- Query

    is_valid_json (a_value: READABLE_STRING_8): BOOLEAN
			-- Is a_value a valid json representation?
		do
			Result := attached json.value (a_value)
		end


feature {NONE} -- Implementation

    new_uri (a_path: detachable READABLE_STRING_8): STRING_32
		local
			l_path: STRING_32
			l_query: STRING_32
            query_punctuation: STRING   -- TODO: Find correct type to use.
			number_of_queries: INTEGER
		do
			if attached a_path as ll_path then
				l_path := ll_path
			else
				l_path := ""
			end

			if not l_path.is_empty and then not (l_path.starts_with ("/") or l_path.starts_with ("\")) then
				l_path.prepend("/")
			end

            number_of_queries := 0
            l_query := ""
			if attached print_format as ll_print then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "print=" + ll_print)
                number_of_queries := number_of_queries + 1
			end

			if attached format_response as ll_format then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "format=" + ll_format)
                number_of_queries := number_of_queries + 1
			end

            if attached order_by as ll_order_by then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "orderBy=" + ll_order_by)
                number_of_queries := number_of_queries + 1
            end

            if attached start_at as ll_start_at then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "startAt=" + ll_start_at)
                number_of_queries := number_of_queries + 1
            end

            if attached end_at as ll_end_at then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "endAt=" + ll_end_at)
                number_of_queries := number_of_queries + 1
            end

            if attached equal_to as ll_equal_to then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "equalTo=" + ll_equal_to)
                number_of_queries := number_of_queries + 1
            end

            if attached limit_to_first as ll_limit_to_first then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "limitToFirst=" + ll_limit_to_first)
                number_of_queries := number_of_queries + 1
            end

            if attached limit_to_last as ll_limit_to_last then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "limitToLast=" + ll_limit_to_last)
                number_of_queries := number_of_queries + 1
            end

			if attached is_shallow as ll_shallow then
                -- TODO: Find out why is_shallow is False by default.
                if ll_shallow = True then
                    -- TODO: Add assert that number_of_queries = 0
                    query_punctuation := get_query_punctuation(number_of_queries)
                    l_query.append(query_punctuation + "shallow=true")
                    number_of_queries := number_of_queries + 1
                end
            end

            if not auth.is_empty then
                query_punctuation := get_query_punctuation(number_of_queries)
                l_query.append(query_punctuation + "auth=" + auth )
                number_of_queries := number_of_queries + 1
			end

            if attached priority_get as ll_priority then
                if ll_priority = True then
                    l_path.append("/.priority")
                end
            end

            Result := base_uri + l_path + Firebase_api_json_extension + l_query
            print("%NResult: " + Result + "%N")
		end

    get_query_punctuation (number_of_queries: INTEGER): STRING
        -- TODO: Find correct type to use.
        do
            if number_of_queries = 0 then
                Result := "?"
            else
                Result := "&"
            end
        end

feature -- print format

	set_print_format (option: detachable READABLE_STRING_8)
		do
			if option /= Void then
				print_format := option
			else
				print_format := Void
			end
	    ensure
	       valid_option: attached option as l_format and then (l_format.same_string ("pretty") or l_format.same_string ("silent") or option = Void)
		end


-- feature -- shallow

	-- set_shallow (option: detachable BOOLEAN)
		-- do
            -- if option /= Void then
            --     is_shallow := option
            -- else
            --     is_shallow := Void
            -- end
        -- ensure
		-- ensure is_shallow is True if set
		-- ensure that the other query options are not set (printFormat, auth?)
	    -- end


feature -- format

	set_format_response (option: detachable READABLE_STRING_8)
		do
			if option /= Void then
				format_response := option
			end
        ensure
            valid_option: attached option as l_format and then l_format.same_string ("export")
		end


feature -- filtering functions

    set_order_by_type (value: detachable READABLE_STRING_8)
        do
            if value /= Void then
                order_by := "%"$" + value + "%""
            else
                order_by := Void
            end
        ensure
            valid_value: attached value as l_value and then (l_value.same_string ("key") or l_value.same_string ("value") or l_value.same_string ("priority"))
        end

    set_start_at_value (value: detachable READABLE_STRING_8)
        do
            if value /= Void then
                if value.is_integer = TRUE then
                    start_at := value
                else
                    start_at := "%"" + value + "%""
                end
            else
                start_at := Void
            end
        end

    set_end_at_value (value: detachable READABLE_STRING_8)
        do
            if value /= Void then
                if value.is_integer = TRUE then
                    end_at := value
                else
                    end_at := "%"" + value + "%""
                end
            else
                end_at := Void
            end
        end

    set_equal_to_value (value: detachable READABLE_STRING_8)
        do
            if value /= Void then
                if value.is_integer = TRUE then
                    equal_to := value
                else
                    equal_to := "%"" + value + "%""
                end
            else
                equal_to := Void
            end
        end

    -- set_limit_to_first_value (value: detachable INTEGER)
    --     do
    --         if value /= Void then
    --             limit_to_first := value.out
    --         else
    --             limit_to_first := Void
    --         end
    --     end

    -- set_limit_to_last_value (value: detachable INTEGER)
    --     do
    --         if value /= Void then
    --             limit_to_last := value.out
    --         else
    --             limit_to_last := Void
    --         end
    --     end


feature -- priority
    get_priority (value: BOOLEAN)
        do
            priority_get := value
        end


feature -- rules
    retrieve_rules () : detachable RESPONSE
        local
            l_request: REQUEST
        do
            create l_request.make ("GET", new_uri (".settings/rules"))
            Result := l_request.execute
        end

    update_rules (a_value: READABLE_STRING_8): detachable RESPONSE
        require
            is_json_value: is_valid_json (a_value)
        local
            l_request: REQUEST
        do
            create l_request.make ("PUT", new_uri (".settings/rules"))
            l_request.add_payload (a_value)
            Result := l_request.execute
        end

note
	copyright: "2011-2015 Javier Velilla, Jocelyn Fiat, Eiffel Software and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
	source: "[
			Eiffel Software
			5949 Hollister Ave., Goleta, CA 93117 USA
			Telephone 805-685-1006, Fax 805-685-6869
			Website http://www.eiffel.com
			Customer support http://support.eiffel.com
		]"
end
