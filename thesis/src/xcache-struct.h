struct xcache {
	struct xlock lock;
	uint32_t size;
	uint32_t nr_nodes;
	struct xq free_nodes;
	xhash_t *entries;
	xhash_t *rm_entries;
	struct xlock rm_lock;
	struct xcache_entry *nodes;
	struct xcache_ops ops;
	uint32_t flags;
	void *priv;
};


