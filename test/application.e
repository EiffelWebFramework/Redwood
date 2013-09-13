note
	description : "test_redwood application root class"
	date        : "$Date$"
	revision    : "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			l_firebase: FIREBASE_API
		do
			create l_firebase.make ("https://SampleChat.firebaseIO-demo.com")
			-- Get
			if attached {RESPONSE} l_firebase.get ("/users/jack/name") as l_response then
				print ("%NGET")
				print ("%NStatus:"+l_response.status.out +"%N")
				if attached l_response.body as l_body then
					print ("%NBody:"+l_body+"%N")
				end
			end

			-- Put
			if attached {RESPONSE} l_firebase.put ("/users/jack/name","{ %"first%": %"Jack%", %"last%": %"Sparrow%" }") as l_response then
				print ("%NPUT")
				print ("%NStatus:"+l_response.status.out +"%N")
				if attached l_response.body as l_body then
					print ("%NBody:"+l_body+"%N")
				end
			end

			-- Post
			if attached {RESPONSE} l_firebase.post ("/users/jack/name","{%"user_id%" : %"jack%", %"text%" : %"Ahoy!%"}") as l_response then
				print ("%NPOST")
				print ("%NStatus:"+l_response.status.out +"%N")
				if attached l_response.body as l_body then
					print ("%NBody:"+l_body+"%N")
				end
			end


			-- Patch
			if attached {RESPONSE} l_firebase.patch ("/users/jack/name/","{%"last%":%"Jones%"}") as l_response then
				print ("%NPATCH")
				print ("%NStatus:"+l_response.status.out +"%N")
				if attached l_response.body as l_body then
					print ("%NBody:"+l_body+"%N")
				end
			end

			-- Delete
			if attached {RESPONSE} l_firebase.delete ("/users/jack/name/last") as l_response then
				print ("%NDELETE")
				print ("%NStatus:"+l_response.status.out +"%N")
				if attached l_response.body as l_body then
					print ("%NBody:"+l_body+"%N")
				end
			end


		end

end
