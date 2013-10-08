struct xcache {
	...
	struct xq free_nodes;		/* Free cache nodes */
	xhash_t *entries;			/* Hash-table for active entries */
	xhash_t *rm_entries;		/* Hash-table for evicted entries */
	struct xlock rm_lock;		/* Lock for rm_entries */
	...
	struct xcache_entry *lru;	/* O(1) lru implementation-specific */
	struct xcache_entry *mru;	/* O(1) lru implementation-specific */
	...
};


