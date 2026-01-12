#ifndef __DPTEST_NGTCP2_STATS_ADAPTER_H__
#define __DPTEST_NGTCP2_STATS_ADAPTER_H__

#include "dptest_ngtcp2_stats.h"

typedef struct fast_stats_ctx {
	uint64_t counters[dproxy_myquic_N_STATS];
} fast_stats_ctx_t;

#define FAST_STATS_ADD(ctx_ptr, id, v)                  \
  do {                                                  \
    if ((ctx_ptr) != NULL) {                            \
      ((fast_stats_ctx_t *)(ctx_ptr))->counters[(id)] += (uint64_t)(v); \
    }                                                   \
  } while (0)

#define FAST_STATS_INC(ctx_ptr, id) FAST_STATS_ADD((ctx_ptr), (id), 1)

#define FAST_STATS_MINUS(ctx_ptr, id, v)                  \
  do {                                                  \
    if ((ctx_ptr) != NULL) {                            \
      ((fast_stats_ctx_t *)(ctx_ptr))->counters[(id)] -= (uint64_t)(v); \
    }                                                   \
  } while (0)

#define FAST_STATS_SUB(ctx_ptr, id) FAST_STATS_MINUS((ctx_ptr), (id), 1)

#endif /* __DPTEST_NGTCP2_STATS_ADAPTER_H__*/
