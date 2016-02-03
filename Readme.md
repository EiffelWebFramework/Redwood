## **Firebase REST API. Eiffel Client**
Based on Firebase REST API: https://www.firebase.com/docs/rest/api/
### **Documentation for REST API Development**
The aim of this project is to develop as many features as possible from the Firebase REST API documentation. This README will be divided into 4 sections:
 - Outline of all Features - Outlines all features list in the documentation in 2015
 - Developed Features - Description of the feature and how to use it.
 - Partially-Developed Features - Description of the feature, reasons for its partial-development and how to use it.
 - Undeveloped Features - Description of the feature and reasons for why its lack of development.
 - Future Development - Ideas of what a future release could include.

#### **Outline of all Features**
 - API Usage
	 - Get (Already Developed)
	 - Put (Already Developed)
	 - Post (Already Developed)
	 - Patch (Already Developed)
	 - Delete (Already Developed)
 - Query
	 - Auth (Already Developed)
	 - Shallow (Developed)
	 - Print Format (Developed)
	 - Callback (Undeveloped)
	 - Format (Developed)
	 - Download (Developed)
	 - OrderBy (Developed)
	 - StartAt/EndAt/EqualTo (Developed)
	 - LimitToFirst/LimitTolast (Developed)
 - Stream (Developed)
 - Priorities (Partially-Developed)
 - Server Values (Undeveloped)
 - Security and Rules (Developed)

#### **Developed Features**
The following features have been fully developed. All features have been implemented in the firebase_api class.

**Query - Auth**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-auth
**Description:**
Supported by all request types. Authenticates this request to allow access to data protected by Security and Firebase Rules. The argument can either be your Firebase app's secret or an authentication token.
**Usage:**
make_with_auth (a_base_uri: READABLE_STRING_8; a_auth: READABLE_STRING_8)
a_base_uri is the URI of the user’s database while a_auth is the authentication token. Here is an example.

    make_with_auth("https://fiery-fire-4173.firebaseio.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")
**Notes:**

**Query - Shallow**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-shallow
**Description:**
This is an advanced feature, designed to help you work with large datasets without needing to download everything. Set this to true to limit the depth of the data returned at a location. If the data at the location is a JSON primitive (string, number or boolean), its value will simply be returned. If the data snapshot at the location is a JSON object, the values for each key will be truncated to true.
**Usage:**
The shallow query can be used with the following feature: set_shallow(option: BOOLEAN)

By default, shallow is unset.

Notes: shallow cannot be mixed with other query parameters according to the documentation. However, it was discovered when testing that shallow could be combined with auth and print format.

**Query - Print Format**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-print
**Description:**
Formats the data returned in the response from the server.
**Usage:**
**Notes:**

**Query - Format**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-format
**Description:**
If set to export, the server will encode priorities in the response.
**Usage:**
**Notes:**

**Query - Download**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-download
**Description:**
Supported by GET only. If you would like to trigger a file download of your data from a web browser, add download=. This will cause our REST service to add the appropriate headers so that browsers know to save the data to a file.
Usage:
Notes:

**Query - Order by**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-orderby,
https://www.firebase.com/docs/rest/guide/retrieving-data.html#section-rest-ordered-data
**Description:**
Usage:
Notes:

**Query - Start at, End at, Equal to**
**Link:** https://www.firebase.com/docs/rest/api/#section-query-parameters, https://www.firebase.com/docs/rest/guide/retrieving-data.html#section-rest-queries
Description:
Usage:
Notes:

**Query - Limit to First, Limit to Last**
**Link:** https://www.firebase.com/docs/rest/api/#section-query-parameters, https://www.firebase.com/docs/rest/guide/retrieving-data.html#section-rest-queries
Description:
Usage:
Notes:

**Stream**
**Link:** https://www.firebase.com/docs/rest/api/#section-streaming
**Description:**
Firebase REST endpoints support the EventSource / Server-Sent Events protocol. In return, the server will send named events as the state of the data at the requested URL changes.
Usage:
Notes:

**Security and Rules**
**Link:** https://www.firebase.com/docs/rest/api/#section-security-rules
**Description:**
The REST API can also be used to retrieve and update the Security and Firebase Rules for your Firebase app. You'll need your Firebase app's secret, which you can find under the Secrets panel of your Firebase app's dashboard.
Usage:
Notes:

#### **Partially-Developed Features**


**Priorities**
**Link:** https://www.firebase.com/docs/rest/api/#section-priorities
**Description:**
Priority information for a location can be referenced with a "virtual child" named .priority. Priorities can be read with GET requests and written with PUT requests.
Usage:
Notes:

#### **Incomplete Features**
The following features have not been implemented.

**Query - Callback**
**Link:** https://www.firebase.com/docs/rest/api/#section-param-callback
**Description:**
Supported by GET only. To make REST calls from a web browser across domains, you can use JSONP to wrap the response in a JavaScript callback function. Add callback= to have the REST API wrap the the returned data in the callback function you specify.
**Notes:**
This feature is a JavaScript only feature which is why it was not implemented.

**Server Values**
**Link:** https://www.firebase.com/docs/rest/api/#section-server-values
**Description:**
Server values can be written at a location using a placeholder value which is an object with a single .sv key. The value for that key is the type of server value you wish to set.
**Notes:**
By its nature, this feature does not require much work from the user to utilise. As referenced in the documentation, there is currently one server value (timestamp) and this value can be easily used by prepending a dot to the value (.timestamp).




#### **Future Development**
**Higher Level Abstraction**
Some of the query strings have limitations for how they can be used. For example, shallow can be only used with auth and download can only be used with the GET method but not the other REST methods. As all links must go through the server, if the query link is incorrect, this can be a time-consuming process for a user with poor internet connection. A way to minimize this issue is to use a higher level of abstraction, where the features have more returns.


**JSON Value Constructor**
"{%"keyA%":
    "%keyAB"%: {%"keyBA%": %"keyCA%",
    "%keyAC"%: {%"keyBB%": %"keyCB%"}
}"
