Firebase REST API. Eiffel Client

Based on Firebase REST API: https://www.firebase.com/docs/rest/api/

Documentation for REST API Development
The aim of this project is to develop as many features as possible from the Firebase REST API documentation. This README will be divided into 4 sections:
Outline of all Features - Outlines all features list in the documentation in 2015
Developed Features - Description of the feature and how to use it.
Partially-Developed Features - Description of the feature, reasons for its partial-development and how to use it.
Undeveloped Features - Description of the feature and reasons for why its lack of development.
Future Development - Ideas of what a future release could include.


Outline of all Features
API Usage
Get (Already Developed)
Put (Already Developed)
Post (Already Developed)
Patch (Already Developed)
Delete (Already Developed)
Method Override???
Query
Auth (Already Developed)
Shallow (Developed)
Print Format (Developed)
Callback (Undeveloped)
Format (Developed)
Download (Developed)
OrderBy (Developed)
StartAt/EndAt/EqualTo (Developed)
LimitToFirst/LimitTolast (Developed)
Stream (Developed)
Priorities (Partially-Developed)
Server Values (Undeveloped)
Security and Rules (Developed)

Developed Features
The following features have been fully developed. All features have been implemented in the firebase_api class.

Query: Auth
Supported by all request types.

Authenticates this request to allow access to data protected by Security and Firebase Rules. The argument can either be your Firebase app’s secret or an authentication token.

The user sets their authentication when creating a new firebase_api object with the following feature.

make_with_auth (a_base_uri: READABLE_STRING_8; a_auth: READABLE_STRING_8)

a_base_uri is the URI of the user’s database while a_auth is the authentication token. Here is an example.

make_with_auth("https://fiery-fire-4173.firebaseio.com", "33ZXLlDjqpdLzb6DiAi17KkAA6qvzkF40M3MKxWL")


Query: Shallow
Supported by GET.

This is an advanced feature, designed to help you work with large datasets without needing to download everything. Set this to true to limit the depth of the data returned at a location. If the data at the location is a JSON primitive (string, number or boolean), its value will simply be returned. If the data snapshot at the location is a JSON object, the values for each key will be truncated to true.

The shallow query can be used with the following feature.

set_shallow(option: BOOLEAN)

To set shallow, the user should utilise

set_shallow(TRUE).

To unset shallow, the user should

utilise set_shallow(FALSE).

By default, shallow is unset.


Note: shallow cannot be mixed with other query parameters according to the documentation. However, it was discovered when testing that shallow could be combined with auth and print format.



Query: Print Format



FirebaseApi.printFormat(“pretty”)



Query: Format

Query: Download

Query: Order by

Query: Start at, End at, Equal to

Query: Limit to First, Limit to Last

Stream

Security and Rules


Partially-Developed Features

Priorities




Incomplete Features
The following features have not been implemented.

Query: Callback

This feature is a JavaScript only feature which is why it was not implemented.

Server Values

By its nature, this feature does not require much work from the user to utilise. As referenced in documentation, the server value can be used




Future Development

High Level Abstraction
Ensure that query strings are used by the right REST methods


JSON Value Constructor
