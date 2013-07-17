struct xcache {
	...
	uint32_t size;				/* Upper limit of entries */
	uint32_t nr_nodes;			/* Shadow entries */
	struct xq free_nodes;		/* Unclaimed (?) entries */
	...
	struct xcache_entry *nodes;	/* Data segment */
	...
};


