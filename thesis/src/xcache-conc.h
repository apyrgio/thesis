struct xcache {
	struct xlock lock;			/* Main xcache lock */
	...
	struct xlock rm_lock;		/* Lock for rm_entries */
	...
};

struct xcache_entry {
	struct xlock lock;					/* Entry lock */
	volatile uint32_t parallel_puts;	/* Concurrency control */
	volatile uint32_t ref;				/* Reference counter */
	...
};

