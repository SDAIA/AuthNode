#ifndef AUTH_NODE_H_

#include <kore/kore.h>
#include <kore/http.h>
#include <kore/httppretty.h>
#include "includes/jsonstr.h"

#define AUTH_NODE_H_

//Return codes
#define RET_OK 0
#define RET_NOT_IMPLEMENTED -1
#define RET_ERR -2


int auth_node_init(void);
int auth_node_ping(struct http_request *);

#endif
