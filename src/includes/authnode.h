#ifndef AUTH_NODE_H_

#include <kore/kore.h>
#include <kore/http.h>
#include <kore/httppretty.h>
#include <libconfig.h>
#include "includes/jsonstr.h"
#include "includes/structs.h"

#define AUTH_NODE_H_

//Return codes
#define RET_OK 0
#define RET_NOT_IMPLEMENTED -1
#define RET_ERR -2

extern struct db_params database_params;

int auth_node_init(void);
int auth_node_ping(struct http_request *);
int auth_node_login(struct http_request *);
int auth_node_logout(struct http_request *);


#endif
