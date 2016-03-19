#include "includes/authnode.h"

int auth_node_init() {
    kore_log(LOG_DEBUG, "[AuthNode] Init finished successfully.");
    return RET_NOT_IMPLEMENTED;
}

int auth_node_ping(struct http_request *req) {
    char * pong = auth_node_json_pong();
    http_response(req, HTTP_STATUS_OK, pong, (unsigned)strlen(pong));
    kore_log(LOG_NOTICE, "[%s] %s -> %d", kore_http_pretty_method(req->method), req->path, HTTP_STATUS_OK);
    return (KORE_RESULT_OK);
}
