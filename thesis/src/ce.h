struct ce {
	uint32_t status;						/* ce status */
	uint32_t *bucket_alloc_status_counters;	/* counters for bucket allocation status */
	uint32_t *bucket_data_status_counters;	/* counters for bucket data status */
	struct bucket *buckets;					/* object buckets */
	struct xlock lock;						/* ce lock */
	struct xworkq workq;					/* xworkq for the entry */
	struct xwaitq pending_waitq;			/* xwaitq for pending requests on the entry */
	struct peer_req pr;						/* Pre-allocated peer request */
};
