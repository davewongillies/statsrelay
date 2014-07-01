#ifndef STATS_H
#define STATS_H

#include <glib.h>
#include "ketama.h"


#define BACKEND_RETRY_TIMEOUT 5

typedef struct stats_server_t stats_server_t;

stats_server_t *stats_server_create(char *filename);
void stats_server_reload(stats_server_t *server);
void stats_server_destroy(stats_server_t *server);

// ctx is a (void *) cast of the stats_server_t instance.
void *stats_connection(int sd, void *ctx);
int stats_recv(int sd, void *data, void *ctx);

#endif