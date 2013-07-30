struct cached {
	struct xcache *cache;
	uint64_t total_size; /* Total cache size (bytes) */
	uint64_t max_objects; /* Max number of objects (plain) */
	uint64_t max_req_size; /* Max request size to blocker (bytes) */
	uint32_t object_size; /* Max object size (bytes) */
	uint32_t bucket_size; /* Bucket size (bytes) */
	uint32_t buckets_per_object; /* Max buckets per object (plain) */
	xport bportno;
	int write_policy;
	struct xworkq workq;
	struct xwaitq pending_waitq;
	struct xwaitq bucket_waitq;
	struct xwaitq req_waitq;
	unsigned char *bucket_data;
	struct xq bucket_indexes;
	struct cached_stats stats;
	//scheduler
};
