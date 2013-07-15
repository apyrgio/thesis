struct xcache_entry {
	struct xlock lock;
	volatile uint32_t ref;
	uint32_t state;
	char name[XSEG_MAX_TARGETLEN + 1];
	void *priv;
};


