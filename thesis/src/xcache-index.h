struct xcache {
	struct xlock lock;			/* Main xcache lock */
	...
	xhash_t *entries;			/* Hash-table for valid entries */
	xhash_t *rm_entries;		/* Hash-table for evicted entries */
	struct xlock rm_lock;		/* Lock for rm_entries */
	...
	struct xcache_entry *lru;	/* O(1) lru implementation-specific */
	struct xcache_entry *mru;	/* O(1) lru implementation-specific */
	...
};


