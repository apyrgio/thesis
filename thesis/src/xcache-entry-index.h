struct xcache_entry {
	...
	volatile uint32_t ref;				/* Reference counter */
	uint32_t state;						/* Evicted or active state */
	char name[XSEG_MAX_TARGETLEN + 1];	/* Entry name */
	...
	struct xcache_entry *older;			/* Less(?) recent entry in LRU queue */
	struct xcache_entry *younger;		/* More(?) recent entry in LRU queue */
	void *priv;							/* Pointer to data contents */
};

