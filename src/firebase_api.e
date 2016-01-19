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
			-- base uri.

	auth: READABLE_STRING_8
			-- firebase authentication token or app's secret.

	Firebase_api_json_extension: STRING_8 = ".json"
			-- URL firebase extension.

feature -- REST API

	get (a_path: detachable READABLE_STRING_8; print_format: detachable READABLE_STRING_8): detachable RESPONSE
			-- Reading Data.
		local
			l_request: REQUEST
			path: detachable READABLE_STRING_8
			query: detachable READABLE_STRING_8
		do
			path := a_path
			query := Void
			if a_path /= Void then
				if print_format /= Void then
					if equal(print_format, "pretty") then
						print("%N is pretty %N")
						query := "print=pretty"
					end
					if equal(print_format, "silent") then
						print("%N is pretty %N")
						query := "print=silent"
					end
				end
			end

			if path /= Void then
				print("%N path: " + path + "%N")
			end

			if query /= Void then
				print("%N query: " + query + "%N")
			end

			create l_request.make ("GET", new_uri (path, query))
			Result := l_request.execute
		end


     put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE
     		-- Writing data.
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("PUT", new_uri (a_path, Void))
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
			create l_request.make ("POST", new_uri (a_path, Void))
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
			create l_request.make ("PATCH", new_uri (a_path, Void))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end


	delete (a_path: detachable READABLE_STRING_8): detachable RESPONSE
			-- Removing Data.
		local
			l_request: REQUEST
		do
			create l_request.make ("DELETE", new_uri (a_path, Void))
			Result := l_request.execute
		end


feature -- Query

	is_valid_json (a_value: READABLE_STRING_8): BOOLEAN
			-- Is a_value a valid json representation?
		do
			Result := attached json.value (a_value)
		end

feature {NONE} -- Implementation

	new_uri (a_path: detachable READABLE_STRING_8; a_query: detachable READABLE_STRING_8): STRING_32
			-- TODO need to consider multiple parameters/queries
			-- list of strings/queries, concatenate them together using '&'
		local
			l_path : STRING_32
			l_query: STRING_32
		do
			if attached a_path as ll_path then
				l_path := ll_path
			else
				l_path := ""
			end

			if attached a_query as ll_query then
				l_query := ll_query
			else
				l_query := ""
			end

			if not l_path.is_empty and then not (l_path.starts_with ("/") or l_path.starts_with ("\")) then
				l_path.prepend("/")
			end

			Result := base_uri + l_path + Firebase_api_json_extension
			if l_query /= "" then
				Result := Result + "?" + l_query
			end
			print("%N" + Result + "%N")

			if not auth.is_empty then
				Result.append ("?auth="+ auth )
			end
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
