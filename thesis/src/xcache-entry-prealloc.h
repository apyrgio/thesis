struct xcache_entry {
	...
	volatile uint32_t ref;				/* Reference counter */
	uint32_t state;						/* Evicted or active state */
	char name[XSEG_MAX_TARGETLEN + 1];	/* Entry name */
	xbinheap_handler h;					/* Index in data segment */
	...
	void *priv;							/* Pointer to data contents */
};


