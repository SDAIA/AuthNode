#include "includes/jsonstr.h"

char * auth_node_json_pong() {
    //Generate JSON.
    json_object *pong = json_object_new_object();
    json_object *from = json_object_new_string("AuthNode");
    json_object *message = json_object_new_string("Pong!");
    json_object_object_add(pong, "from", from);
    json_object_object_add(pong, "message", message);
    //Generate string from JSON object.
    return json_object_to_json_string_ext(pong, JSON_C_TO_STRING_PRETTY);
}
