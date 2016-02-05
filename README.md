## **Firebase REST API. Eiffel Client**
Based on Firebase REST API: https://www.firebase.com/docs/rest/api/

----------

### **Documentation for REST API Development**
The aim of this project is to develop as many features as possible from the Firebase REST API documentation. However, in the initial meeting, streaming has been discussed as an optional feature if time permits for it to be developed. This README.md will be divided into 5 sections:

 1. Outline of all Features - Outlines all features list in the documentation in 2015.
 2. Developed Features - Description of the feature and how to use it.
 3. Partially Developed Features - Description of the feature, reasons for its partial-development and how to use it.
 4. Undeveloped Features - Description of the feature and reasons for why its lack of development.
 5. Future Development - Ideas of what a future release could include.

----------
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
	 - LimitToFirst, LimitToLast, StartAt, EndAt, EqualTo (Developed)
 - Stream (Undeveloped)
 - Priorities (Partially-Developed)
 - Server Values (Undeveloped)
 - Security and Rules (Developed)

----------
#### **Developed Features**
The following features have been fully developed. All features have been implemented in the firebase_api class.

----------
**Get - API Usage**
**Link:**
https://www.firebase.com/docs/rest/api/#section-get

**Description:**
Data from our Firebase database can be read by issuing an HTTP GET request to an endpoint. A successful request will be indicated by a 200 OK HTTP status code.

**Method:**

    get (a_path: detachable READABLE_STRING_8): detachable RESPONSE

**Example:**

    get ("/keyA")


----------

**Put - API Usage**
**Link:**
https://www.firebase.com/docs/rest/api/#section-put

**Description:**
We can write data with a PUT request. A successful request will be indicated by a 200 OK HTTP status code.

**Method:**

    put (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE

**Example:**

    put ("/keyA", "{%"keyAA%": %"valueAA%"}")

----------
**Post - API Usage**
**Link:**
https://www.firebase.com/docs/rest/api/#section-post

**Description:**
To accomplish the equivalent of the JavaScript push() method, we can issue a POST request. A successful request will be indicated by a 200 OK HTTP status code.

**Method:**

    post (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE

**Example:**

    post ("/keyA", "{%"keyAA%": %"valueAA%"}")

----------
**Patch - API Usage**
**Link:**
https://www.firebase.com/docs/rest/api/#section-patch

**Description:**
We can update specific children at a location without overwriting existing data using a PATCH request. Named children in the data being written with PATCH will be overwritten, but omitted children will not be deleted. This is equivalent to the JavaScript update() function. A successful request will be indicated by a 200 OK HTTP status code.

**Method:**

    patch (a_path: detachable READABLE_STRING_8; a_value: READABLE_STRING_8): detachable RESPONSE

**Example:**

    patch ("/keyA", "{%"keyAA%": %"valueBB%"}")

----------
**Delete - API Usage**
**Link:**
https://www.firebase.com/docs/rest/api/#section-delete

**Description:**
We can delete data with a DELETE request. A successful DELETE request will be indicated by a 200 OK HTTP status code with a response containing JSON null.

**Method:**
https://www.firebase.com/docs/rest/api/#section-delete

**Example:**

    delete ("/keyA")

----------
**Query - Auth**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-auth

**Description:**
Supported by all request types. Authenticates this request to allow access to data protected by Security and Firebase Rules. The argument can either be your Firebase app's secret or an authentication token.

**Method:**

    make_with_auth (a_base_uri: READABLE_STRING_8; a_auth: READABLE_STRING_8)

**Example:**

    make_with_auth("https://fiery-fire-4173.firebaseio.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")

**Note:**
If the user does not require an authentication token to communicate with the database, the following feature should be used.

    make (a_base_uri: READABLE_STRING_8)

----------
**Query - Shallow**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-shallow

**Description:**
This is an advanced feature, designed to help you work with large datasets without needing to download everything. Set this to true to limit the depth of the data returned at a location. If the data at the location is a JSON primitive (string, number or boolean), its value will simply be returned. If the data snapshot at the location is a JSON object, the values for each key will be truncated to true.

**Method:**

    set_shallow (option: BOOLEAN)

**Example:**
By default, the shallow query is set to `False`. To set the shallow query value to `True`:

    set_shallow (True)

To set shallow back to `False`:

    set_shallow (False)

**Note:**
According to the documentation, the shallow query cannot be mixed with other query parameters. To reflect this property, a postcondition was developed for the `new_uri` method:

	is_shallow_valid: is_shallow = True implies (query_count = 1)

However when testing, it was discovered that shallow could be combined with at least 2 queries (auth and print format). As it is possible that other queries can be combined with the shallow query, the postcondition was removed.

In addition, a helper method was implemented to clear all query values simultaneously. If too many values are set, developers can use this method instead of unsetting each individual value.

    clear_all_query_values

----------
**Query - Print Format**                                                                                                                                                 
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-print

**Description:**
Formats the data returned in the response from the server.

**Method:**

    set_print_format (option: detachable READABLE_STRING_8)

**Example:**
By default, the print format query is not set. To set the print format query value to `pretty`:

    set_print_format ("pretty")

To set the value to `silent`:

    set_print_format ("silent")

To unset the value:

    set_print_format (Void)

----------
**Query - Format**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-format

**Description:**
If set to export, the server will encode priorities in the response.

**Method:**

    set_format_response (option: detachable READABLE_STRING_8)

**Example:**
To set the format query value to `export`:

    set_format_response("export")

To unset the value:

    set_format_response(Void)

----------
**Query - Download**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-download

**Description:**
Supported by GET only. If you would like to trigger a file download of your data from a web browser, add download=. This will cause our REST service to add the appropriate headers so that browsers know to save the data to a file.

**Method: **

    download (a_path: detachable READABLE_STRING_8; filename: detachable READABLE_STRING_8): detachable RESPONSE

**Example: **

    download ("/keyA", "file.txt")

**Note:**
This command needs to be tested on another user's computer. The curl command listed in the documentation is:

    curl 'https://samplechat.firebaseio-demo.com/.json?download=myfilename.txt'

When the command was executed on my terminal, no file was downloaded.

----------
**Query - Order by**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-orderby,
https://www.firebase.com/docs/rest/guide/retrieving-data.html#section-rest-ordered-data

**Description:**
Data can be ordered using one of three filtering parameters.

 1. Key - When using the `orderBy="$key"` parameter to sort your data, data will be returned in ascending order by key name.
 2. Value - When using the `orderBy="$value"` parameter to sort your data, children will be ordered by their value.
 3. Priority - When using the `orderBy="$priority"` parameter to sort your data, the ordering of children is determined by their priority and key as follows. Keep in mind that priority values can only be numbers or strings.

**Method:**

    set_order_by_type (value: detachable READABLE_STRING_8)

**Example:**
By default, the print format query value is not set. To set the order by query value to `key`:

    set_order_by_type ("key")

To set the value to `value`:

    set_order_by_type ("value")

To set the value to `priority`:

    set_order_by_type ("priority")

To unset the value:

    set_order_by_type (Void)

----------
**Query - Start at, End at, Equal to, Limit to First, Limit to Last**
**Link:**
https://www.firebase.com/docs/rest/api/#section-query-parameters, https://www.firebase.com/docs/rest/guide/retrieving-data.html#section-rest-filtering

**Description:**
We can construct queries to filter data based on various factors. To start, you specify how you want your data to be filtered using the orderBy parameter. Then, you combine orderBy with any of the other five parameters: limitToFirst, limitToLast, startAt, endAt, and equalTo.

**Method:**
By default, none of the five parameters are set. To set the limitToFirst query value:

    set_limit_to_first_value (value: INTEGER)

To set the limitToLast value:

    set_limit_to_last_value (value: INTEGER)

To set the startAt value:

    set_start_at_value (value: detachable READABLE_STRING_8)

To set the endAt value:

    set_end_at_value (value: detachable READABLE_STRING_8)

To set the equalTo value:

    set_equal_to_value (value: detachable READABLE_STRING_8)

**Note:**
If multiple values are set and need to be unset, a helper method is implemented to simultaneously clear all ranged, filtering values:

    clear_filtering_values

----------
**Security and Rules**
**Link:**
https://www.firebase.com/docs/rest/api/#section-security-rules,
https://www.firebase.com/docs/security/guide/securing-data.html

**Description:**
The REST API can also be used to retrieve and update the Security and Firebase Rules for your Firebase app. You'll need your Firebase app's secret, which you can find under the Secrets panel of your Firebase app's dashboard.

**Method:**
 To retrieve the rules that are set for the Firebase app:


    retrieve_rules: detachable RESPONSE

 To update the rules for the Firebase app:


    update_rules (a_value: READABLE_STRING_8): detachable RESPONSE

**Example:**
An example of updating rules is:

    update_rules("{%"rules%": {%".read%": true}}")

which allows the database to be readable by the public.

**Notes:**
If rules aren't set for `.read` or `.write` values, then they are automatically set to `false`.

----------
#### **Partially-Developed Features**

----------
**Priorities**
**Link:**
https://www.firebase.com/docs/rest/api/#section-priorities

**Description:**
Priority information for a location can be referenced with a "virtual child" named .priority. Priorities can be read with GET requests and written with PUT requests.

**Method:**

    get_priority (a_path: detachable READABLE_STRING_8): detachable RESPONSE

**Example:**

    get_priority ("/keyA")

**Notes:**
This feature is regarded as partially implemented, as a PUT-priority method was not implemented. The reason that this was the case was because the priority could be simply added to the JSON payload, such that:

    put (Void, "{%"name%": {%"first%": %"Tom%"}, %".priority%": 1.0}")

----------
#### **Incomplete Features**
The following features have not been implemented.

----------
**Query - Callback**
**Link:**
https://www.firebase.com/docs/rest/api/#section-param-callback

**Description:**
Supported by GET only. To make REST calls from a web browser across domains, you can use JSONP to wrap the response in a JavaScript callback function. Add callback= to have the REST API wrap the the returned data in the callback function you specify.

**Notes:**
This feature is a JavaScript only feature which is why it was not implemented.

----------
**Server Values**
**Link:** https://www.firebase.com/docs/rest/api/#section-server-values

**Description:**
Server values can be written at a location using a placeholder value which is an object with a single .sv key. The value for that key is the type of server value you wish to set.

**Notes:**
This feature is essentially values that can be used by the public. According to the documentation, there is currently one server value (timestamp). This value can be used, as shown in the following:

    put (Void, "{%".sv%": %"timestamp%"}")

----------
**Stream**
**Link:** https://www.firebase.com/docs/rest/api/#section-streaming

**Description:**
Firebase REST endpoints support the EventSource / Server-Sent Events protocol. In return, the server will send named events as the state of the data at the requested URL changes.

**Notes:**
In the original spec discussed with the project supervisor, stream was an optional feature to be developed if time permitted.

----------
#### **Future Development**
With my 120 hours of project time, I learnt about Eiffel and RESTful services, set up an appropriate development environment for Eiffel, implemented most of the Firebase API features as well as tested and wrote the required documentation. With more time, I would have considered implementing the following:


----------

**Stream (https://www.firebase.com/docs/rest/api/#section-streaming)**
This feature was briefly looked into and a basic implementation was attempted. According to the documentation, a few things need to be achieved.

 - Set the client's Accept header to "text/event-stream"
 - Respect HTTP Redirects, in particular HTTP status code 307
 - If the location requires permission to read, you must include the auth parameter

These steps were implemented however, after looking through Python and Ruby implementations of this feature, I realised that this was not enough. The implementation suggested that it would be necessary to incorporate threads into the feature. The first thread would be used to send items to the database while the second thread would notifications when the data was updated.

Python Implementation - https://github.com/firebase/EventSource-Examples/tree/master/python
Ruby Implementation - https://github.com/firebase/EventSource-Examples/tree/master/ruby

 ----------
**Minimise Query Errors**
Many of the query features cannot be used by all 5 REST methods. For example, the orderBy query can only be used with the GET method. If it is used with another REST method such as PUT, the following response will be returned:

`{"error" : "Querying related parameters not supported on this request type"}`

As sending a request to the server can take time, it would be optimal to drop requests that are going to fail before they are sent. This can be achieved through the utilisation of assertions and postconditions, resulting in a higher level of performance.

----------
**Testing**
The original plan was to test all 5 REST methods being used together. However, this has been a rather difficult task as I have been getting an unexpected result.

I executed the following commands in application.e.

    response := api.delete(Void)
	response := api.put (Void, "{%"keyA%": %"valueA%"}")
	response := test.test_get ("/keyA", "valueA")

This was the results from application.e. (https://drive.google.com/file/d/0B8gBdFqk27a8VFQ4RkhGcnlfdmc/view?usp=sharing)

Afterwards, I executed the equivalent comments in a shell script test.sh.

    curl -X DELETE "https://samplechat.firebaseio-demo.com/.json"
    curl -X PUT -d '{"keyA": "valueA"}' "https://samplechat.firebaseio-demo.com/.json"
    curl "https://samplechat.firebaseio-demo.com/keyA.json"

This was the result from the shell script.(https://drive.google.com/file/d/0B8gBdFqk27a8cHJIZzRrcTBVNjA/view?usp=sharing)

The result from the shell script was the result that I had expected from executing application.e. From evaluation, I believe that the application class did not provide the expected results due to asynchronous issues. This issue has led to assertion failures and has hindered me from completely validating the tests in the test_rest_api.e file. I have created tests for GET, PUT and DELETE. Once this is resolved, tests should be also created for POST and PATCH.

Tests can also be created to check if URIs with various query strings provide a correct result. However, many of the queries (print format, shallow, export, download) are easily examined by execution and visual inspection.

I have a file called unofficial_application.e which is the file that I used to unofficially test my queries during the development phase.
