struct cached {
	struct xcache *cache;			/* xcache struct */
	uint64_t total_size;			/* Total cache size (bytes) */
	uint64_t max_objects;			/* Max number of objects (plain) */
	uint64_t max_req_size;			/* Max request size to blocker (bytes) */
	uint32_t object_size;			/* Max object size (bytes) */
	uint32_t bucket_size;			/* Bucket size (bytes) */
	uint32_t buckets_per_object;	/* Max buckets per object (object_size / bucket_size) */
	xport bportno;					/* Blocker port */
	int write_policy;				/* Cache write policy */
	struct xworkq workq;			/* xworkq for deferred jobs */
	struct xwaitq pending_waitq;	/* xwaitq for when cache entry pool is empty */
	struct xwaitq bucket_waitq;		/* xwaitq for when bucket pool is empty */
	struct xwaitq req_waitq;		/* xwaitq for when we are out of requests */
	unsigned char *bucket_data;		/* allocated space for buckets (bucket pool) */
	struct xq bucket_indexes;		/* stack of bucket indexes (bucket pool) */
};
