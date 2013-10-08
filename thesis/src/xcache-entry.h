struct xcache_entry {
	struct xlock lock;					/* Entry lock */
	volatile uint32_t parallel_puts;	/* Concurrency control */
	volatile uint32_t ref;				/* Reference counter */
	uint32_t state;						/* Evicted or active state */
	char name[XSEG_MAX_TARGETLEN + 1];	/* Entry name */
	xbinheap_handler h;					/* Index in data segment */
	struct xcache_entry *older;			/* Less recent entry in LRU queue */
	struct xcache_entry *younger;		/* More recent entry in LRU queue */
	void *priv;							/* Pointer to data contents */
};


