note
	description: "Summary description for {FIREBASE_API}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"
	EIS: "name=Firebase REST API", "src=https://www.firebase.com/docs/rest-api.html", "protocol=uri"
class
	FIREBASE_API

inherit

	SHARED_EJSON

create
	make,
	make_with_auth

feature {NONE} -- Initialization

	make (a_base_uri: READABLE_STRING_32)
			-- Create an object firebase with a base uri `a_base_uri'
		do
			base_uri := a_base_uri
			auth := ""
		ensure
			base_uri_set: base_uri = a_base_uri
			empty_auth: auth.is_empty
		end

	make_with_auth (a_base_uri: READABLE_STRING_32; a_auth: READABLE_STRING_32)
			-- Create an object firebase with a base uri `a_base_uri'
		do
			base_uri := a_base_uri
			auth := a_auth
		ensure
			base_uri_set: base_uri = a_base_uri
			auth_set: auth = a_auth
		end

feature -- Access

	base_uri: READABLE_STRING_32

	auth: READABLE_STRING_32

	Firebase_api_json_extension: STRING_32 = ".json"

feature -- REST API

	get (a_path: detachable READABLE_STRING_32): detachable RESPONSE
			-- Reading Data
		local
			l_request: REQUEST
		do
			create l_request.make ("GET", new_uri (a_path))
			Result := l_request.execute
		end


     put (a_path: detachable READABLE_STRING_32; a_value: READABLE_STRING_32): detachable RESPONSE
     		-- Writing data
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("PUT", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end

 	 post (a_path: detachable READABLE_STRING_32; a_value: READABLE_STRING_32): detachable RESPONSE
     		-- Pushing Data
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("POST", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end

	 patch (a_path: detachable READABLE_STRING_32; a_value: READABLE_STRING_32): detachable RESPONSE
     		-- Updating Data
     	require
     		is_json_value: is_valid_json (a_value)
	    local
			l_request: REQUEST
		do
			create l_request.make ("PATCH", new_uri (a_path))
			l_request.add_payload (a_value)
			Result := l_request.execute
		end


	delete (a_path: detachable READABLE_STRING_32): detachable RESPONSE
			-- Removing Data
		local
			l_request: REQUEST
		do
			create l_request.make ("DELETE", new_uri (a_path))
			Result := l_request.execute
		end


feature -- Query

	is_valid_json (a_value: READABLE_STRING_32): BOOLEAN
			-- Is a_value a valid json representation?
		do
			Result := attached json.value (a_value)
		end

feature {NONE} -- Implementation

	new_uri (a_path: detachable READABLE_STRING_32): STRING_32
			-- new uri (base_uri + a_path)
		local
			l_path : STRING_32
			l_query_string: STRING_32
		do
			if attached a_path as ll_path then
				l_path := ll_path
			else
				l_path := ""
			end
			if not l_path.is_empty and then not (l_path.starts_with ("/") or l_path.starts_with ("\")) then
				l_path.prepend("/")
			end

			Result := base_uri + l_path + Firebase_api_json_extension
			if not auth.is_empty then
				Result.append ("?auth="+ auth )
			end
		end
note
	copyright: "2011-2013 Javier Velilla, Jocelyn Fiat, Eiffel Software and others"
	license: "Eiffel Forum License v2 (see http://www.eiffel.com/licensing/forum.txt)"
	source: "[
			Eiffel Software
			5949 Hollister Ave., Goleta, CA 93117 USA
			Telephone 805-685-1006, Fax 805-685-6869
			Website http://www.eiffel.com
			Customer support http://support.eiffel.com
		]"
end
