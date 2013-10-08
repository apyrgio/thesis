xcache_handler xcache_lookup(struct xcache *cache, char *name);
xcache_handler xcache_insert(struct xcache *cache, xcache_handler h);
int xcache_remove(struct xcache *cache, xcache_handler h);

