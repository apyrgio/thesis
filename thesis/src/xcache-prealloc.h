struct xcache {
	...
	uint32_t size;
	uint32_t nr_nodes;
	struct xq free_nodes;
	...
	struct xcache_entry *nodes;
	...
};


