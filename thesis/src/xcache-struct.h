struct xcache {
	struct xlock lock;			/* Main xcache lock */
	uint32_t size;				/* Upper limit of entries */
	uint32_t nr_nodes;
	struct xq free_nodes;		/* Free cache nodes */
	xhash_t *entries;			/* Hash-table for active entries */
	xhash_t *rm_entries;		/* Hash-table for evicted entries */
	struct xlock rm_lock;		/* Lock for evicted entries */
	struct xcache_entry *nodes;	/* Data segment */
	struct xcache_entry *lru;	/* O(1) lru implementation-specific */
	struct xcache_entry *mru;	/* O(1) lru implementation-specific */
	struct xcache_ops ops;		/* Hooks */
	uint32_t flags;				/* Flags */
	void *priv;					/* Pointer to peer struct */
};


