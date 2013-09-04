struct xcache_ops {
	void *(*on_node_init)(void *cache_data, void *data_handler);
	int (*on_init)(void *cache_data, void *user_data);
	int (*on_evict)(void *cache_data, void *evicted_user_data);
	void (*on_reinsert)(void *cache_data, void *user_data);
	int (*on_finalize)(void *cache_data, void *evicted_user_data);
	void (*on_put)(void *cache_data, void *user_data);
	void (*on_free)(void *cache_data, void *user_data);
};


