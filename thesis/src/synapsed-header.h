struct synapsed_header {
	struct original_request orig_req;	/* Address of original requests */
	uint32_t op;
	uint32_t state;
	uint32_t flags;
	uint32_t targetlen;
	uint64_t datalen;
	uint64_t offset;
	uint64_t serviced;
};
