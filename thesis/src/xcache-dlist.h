struct xcache {
	...
	struct xcache_entry *lru;	/* O(1) lru implementation-specific */
	struct xcache_entry *mru;	/* O(1) lru implementation-specific */
	...
};

struct xcache_entry {
	...
	struct xcache_entry *older;			/* Less recent entry in LRU queue */
	struct xcache_entry *younger;		/* More recent entry in LRU queue */
	...
};


