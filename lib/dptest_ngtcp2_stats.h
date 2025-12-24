#ifndef __DPTEST_NGTCP2_STATS_H__
#define __DPTEST_NGTCP2_STATS_H__

typedef enum _dproxy_myquic_statistics_e
{
	dproxy_myquic_stats_lost_pkts_ide,
	dproxy_myquic_stats_lost_bytes_ide,
	dproxy_myquic_stats_rtx_pkts_ide,// no place counted this
	dproxy_myquic_stats_pto_fired_ide,
	dproxy_myquic_stats_tx_pkts_ide, // id 4
	dproxy_myquic_stats_tx_bytes_ide,
	dproxy_myquic_stats_rx_pkts_ide,
	dproxy_myquic_stats_rx_bytes_ide,
	dproxy_myquic_stats_ping_recv_ide,
	dproxy_myquic_stats_pkt_discarded_ide,// id 9
	dproxy_myquic_N_STATS
} dproxy_myquic_statistics_e;

#endif /* __DPTEST_NGTCP2_STATS_H__*/
