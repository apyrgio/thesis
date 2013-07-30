struct ce {
	uint32_t status;		/* cache entry status */
	uint32_t *bucket_alloc_status_counters;
	uint32_t *bucket_data_status_counters;
	struct bucket *buckets;
	struct xlock lock;		/* cache entry lock */
	struct xworkq workq;		/* workq of the cache entry */
	struct xwaitq pending_waitq;
	struct peer_req pr;
};
