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

	query_count: INTEGER
			-- Number of queries in uri.

	print_format: detachable READABLE_STRING_8
			-- Formats the data returned in the response from the server.
			-- Value is either "pretty", "silent" or Void.

	is_shallow: BOOLEAN
			-- Limits the depth of the response.
			-- Shallow cannot be mixed with other parameters.

	format_response: detachable READABLE_STRING_8
			-- Server will encode priorities in response, if format is set to export.

	order_by: detachable READABLE_STRING_8

	start_at: detachable READABLE_STRING_8

	end_at: detachable READABLE_STRING_8

	equal_to: detachable READABLE_STRING_8

	limit_to_first: detachable READABLE_STRING_8

	limit_to_last: detachable READABLE_STRING_8

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
			-- Builds uri
		local
			l_path: STRING_32
			l_query: STRING_32
			query_punctuation: STRING   -- TODO: Find correct type to use.
		do
			if attached a_path as ll_path then
				l_path := ll_path
			else
				l_path := ""
			end

			if not l_path.is_empty and then not (l_path.starts_with ("/") or l_path.starts_with ("\")) then
				l_path.prepend ("/")
			end

			l_query := ""
			query_count := 0
			if attached print_format as ll_print then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "print=" + ll_print)
				query_count := query_count + 1
			end

			if attached format_response as ll_format then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "format=" + ll_format)
				query_count := query_count + 1
			end

			if attached order_by as ll_order_by then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "orderBy=" + ll_order_by)
				query_count := query_count + 1
			end

			if attached start_at as ll_start_at then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "startAt=" + ll_start_at)
				query_count := query_count + 1
			end

			if attached end_at as ll_end_at then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "endAt=" + ll_end_at)
				query_count := query_count + 1
			end

			if attached equal_to as ll_equal_to then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "equalTo=" + ll_equal_to)
				query_count := query_count + 1
			end

			if attached limit_to_first as ll_limit_to_first then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "limitToFirst=" + ll_limit_to_first)
				query_count := query_count + 1
			end

			if attached limit_to_last as ll_limit_to_last then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "limitToLast=" + ll_limit_to_last)
				query_count := query_count + 1
			end

			if is_shallow = True then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "shallow=true")
				query_count := query_count + 1
			end

			if not auth.is_empty then
				query_punctuation := get_query_punctuation (query_count)
				l_query.append (query_punctuation + "auth=" + auth)
				query_count := query_count + 1
			end

			Result := base_uri + l_path + Firebase_api_json_extension + l_query
			print ("%NResult: " + Result + "%N")
		ensure
			valid_query_count: query_count >= 0
			is_shallow_valid: is_shallow = True implies (query_count = 1) or (query_count = 2 and not auth.is_empty)
		end

	get_query_punctuation (number_of_queries: INTEGER): STRING
        	-- TODO: Find correct return type.
		do
			if number_of_queries = 0 then
				Result := "?"
			else
				Result := "&"
			end
		end


feature -- print format

	set_print_format (option: detachable READABLE_STRING_8)
			-- Set data format that is returned from the server.
		do
			if option /= Void then
				print_format := option
			else
				print_format := Void
			end
		ensure
			valid_option: attached option as l_format and then (l_format.same_string ("pretty") or l_format.same_string ("silent") or option = Void)
		end


feature -- shallow

	set_shallow (option: BOOLEAN)
			-- Returns response values as true. Used to work with large datasets.
		do
            is_shallow := option
	    end


feature -- format

	set_format_response (option: detachable READABLE_STRING_8)
			-- Encodes priorities in response.
		do
			if option /= Void then
				format_response := option
			end
        ensure
            valid_option: attached option as l_format and then l_format.same_string ("export")
		end


feature -- filtering functions

    set_order_by_type (value: detachable READABLE_STRING_8)
			-- The order_by value sets how data can be filtered and ordered.
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
			-- Sets start point for queries.
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
			-- Sets end point for queries.
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
			-- Sets equality value for queries.
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

    set_limit_to_first_value (value: INTEGER)
			-- Sets first limit range for queries.
        do
            limit_to_first := value.out
        end

	set_limit_to_last_value (value: INTEGER)
			-- Sets last limit range for queries.
        do
            limit_to_last := value.out
        end

	clear_filtering_values
		do
			order_by := Void
			start_at := Void
			end_at := Void
			equal_to := Void
			limit_to_first := Void
			limit_to_last := Void
		end


feature -- priority
    get_priority (a_path: detachable READABLE_STRING_8) : detachable RESPONSE
		-- Reads data priority.
        local
            l_request: REQUEST
        do
            if attached a_path as ll_path then
                create l_request.make ("GET", new_uri (a_path + "/.priority"))
            else
                create l_request.make ("GET", new_uri ("/.priority"))
            end
            Result := l_request.execute
        end


feature -- rules
    retrieve_rules : detachable RESPONSE
			-- Reads rules.
        local
            l_request: REQUEST
        do
            create l_request.make ("GET", new_uri (".settings/rules"))
            Result := l_request.execute
        end

    update_rules (a_value: READABLE_STRING_8): detachable RESPONSE
			-- Updates rules.
        require
            is_json_value: is_valid_json (a_value)
        local
            l_request: REQUEST
        do
            create l_request.make ("PUT", new_uri (".settings/rules"))
            l_request.add_payload (a_value)
            Result := l_request.execute
        end

feature -- stream TODO: Not functioning yet.
	stream (a_path: detachable READABLE_STRING_8): detachable RESPONSE
		local
			l_request: REQUEST
		do
			create l_request.make ("GET", new_uri (a_path))
			l_request.add_header (l_request.accept_type_header_name, l_request.default_accept_type)
			Result := l_request.execute
		end


feature -- clear all query settings
    clear_all_query_settings
        do
            print_format := Void
            is_shallow := False
            format_response := Void
            order_by := Void
            start_at := Void
            end_at := Void
            equal_to := Void
            limit_to_first := Void
            limit_to_last := Void
            priority := Void
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
