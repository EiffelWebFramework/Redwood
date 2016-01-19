note
	description: "Represent and HTTP request."
	date: "$Date$"
	revision: "$Revision$"

class
	REQUEST

inherit

	HTTP_CONSTANTS

create
	make

feature {NONE} -- Initialization

	make (a_method: READABLE_STRING_8; a_uri: READABLE_STRING_8)
		require
			valid_http_method: is_http_method (a_method)
			valid_uri: is_valid_uri (a_uri)
		do
			verb := a_method
			uri := a_uri
			create headers.make (5)
		ensure
			ver_set: verb = a_method
			uri_set: uri = a_uri
		end

feature -- Status Report

	is_valid_uri (a_uri: READABLE_STRING_8): BOOLEAN
			-- Is the uri `a_uri' valid?
		local
			l_uri: URI
		do
			create l_uri.make_from_string (a_uri)
			Result := l_uri.is_valid
		end

	query_string: detachable READABLE_STRING_8
			-- Return the query string of this request if any.
		local
			l_uri: URI
		do
			create l_uri.make_from_string (uri)
			Result := l_uri.query
		end

	sanitized_url: STRING_8
			-- Returns the URL without the query string part.	
		local
			l_uri: URI
		do
			create l_uri.make_from_string (uri.as_string_8)
			l_uri.remove_query
			Result := l_uri.debug_output
		ensure
			sanitized: not as_uri (Result).has_query
		end

	is_http_method (a_method: READABLE_STRING_8): BOOLEAN
			-- Is `a_method' an HTTP method?
		do
			if a_method.same_string (method_connect) then
				Result := True
			elseif a_method.same_string (method_delete) then
				Result := True
			elseif a_method.same_string (method_get) then
				Result := True
			elseif a_method.same_string (method_head) then
				Result := True
			elseif a_method.same_string (method_options) then
				Result := True
			elseif a_method.same_string (method_patch) then
				Result := True
			elseif a_method.same_string (method_post) then
				Result := True
			elseif a_method.same_string (method_put) then
				Result := True
			elseif a_method.same_string (method_trace) then
				Result := True
			end
		end

feature -- Constants

	content_type_header_name: STRING_8 = "Content-Type";
			-- Content type header.

	default_content_type: STRING_8
			-- content type.
		once
			Result := application_json
		end

feature -- Access

	uri: STRING_8
			-- uri of this request.

	verb: STRING_8
			-- http methods for this request (GET, POST, etc)

	headers: STRING_TABLE [STRING]
			-- http headers for this request.

	payload: detachable STRING_8
			-- payload for this request.

	executor: detachable REQUEST_EXECUTOR
			-- execution for this request.

feature -- Change Element

	add_payload (a_payload: like payload)
			-- add payload `a_payload'
		do
			payload := a_payload
		ensure
			payload_set: attached payload as l_payload implies l_payload = a_payload
		end


	add_header (a_key: READABLE_STRING_8; a_value: READABLE_STRING_8)
			-- add header with key `a_key' and value `a_value'
		do
			headers.force (a_value, a_key)
		ensure
			header_added: headers.has_key (a_key)
		end

feature -- Execute

	execute: detachable RESPONSE
			-- execute the this request.
		do
			initialize_executor
			Result := process_request
		end

	initialize_executor
		do
			create executor.make (uri.as_string_32, verb)
		end

feature {NONE} -- Implementation

	process_request: detachable RESPONSE
			--
		do
			if attached executor as l_executor then
					-- add headers
				add_headers (l_executor)
				if verb.same_string (method_put) or else verb.same_string (method_post) or else verb.same_string (method_patch) then
					l_executor.set_body (body_contents.as_string_8)
				end
				if not l_executor.context_executor.headers.has (content_type_header_name) then
					l_executor.context_executor.add_header (content_type_header_name, default_content_type)
				end
				if attached l_executor.execute as l_response then
					create Result.make (l_response)
				end
			end
		end

feature {NONE} -- Implementation

	add_headers (a_executor: REQUEST_EXECUTOR)
			-- add headers to the request executor `a_executor'
		do
			from
				headers.start
			until
				headers.after
			loop
				a_executor.context_executor.add_header (headers.key_for_iteration.as_string_32, headers.item_for_iteration.as_string_32)
				headers.forth
			end
		end

	body_contents: READABLE_STRING_8
		do
			if attached payload as l_payload then
				Result := l_payload
			else
				Result := ""
			end
		end

	as_uri (a_string: READABLE_STRING_8) : URI
		require
			is_valid_uri : is_valid_uri (a_string)
		do
			create Result.make_from_string (a_string)
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
