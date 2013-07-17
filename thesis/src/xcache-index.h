struct xcache {
	...
	xhash_t *entries;			/* Hash-table for valid entries */
	xhash_t *rm_entries;		/* Hash-table for evicted entries */
	...
};


