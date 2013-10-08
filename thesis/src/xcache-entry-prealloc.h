struct xcache_entry {
	...
	volatile uint32_t ref;				/* Reference counter */
	uint32_t state;						/* Evicted or active state */
	char name[XSEG_MAX_TARGETLEN + 1];	/* Entry name */
	...
	void *priv;							/* Pointer to data contents */
};


