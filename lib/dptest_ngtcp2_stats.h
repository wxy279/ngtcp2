#ifndef __DPTEST_NGTCP2_STATS_H__
#define __DPTEST_NGTCP2_STATS_H__

typedef enum _dproxy_myquic_statistics_e
{
	dproxy_myquic_stats_lost_pkts_ide,
	dproxy_myquic_stats_lost_bytes_ide,
	dproxy_myquic_stats_rtx_pkts_ide,// no place counted this
	dproxy_myquic_stats_pto_fired_ide,
	dproxy_myquic_stats_tx_pkts_ide, //                                              id 4
	dproxy_myquic_stats_tx_bytes_ide,
	dproxy_myquic_stats_rx_pkts_ide,
	dproxy_myquic_stats_rx_bytes_ide,
	dproxy_myquic_stats_ping_recv_ide,
	dproxy_myquic_stats_pkt_discarded_ide,//                                         id 9
	dproxy_myquic_stats_open_streams_ide,
	dproxy_myquic_stats_open_conns_ide,// this counter can not be counted in ngtcp2 because conn->stats_ctx is setup after the call
	dproxy_myquic_stats_rx_strm_dblk_ide,// 0x15 receive stream data blocked
	dproxy_myquic_stats_rx_conn_dblk_ide,// 0x14 receive data block
	dproxy_myquic_stats_rx_strms_blk_bdi_ide,// 0x16 receive streams blocked bidi;   id 14
	dproxy_myquic_stats_rx_strms_blk_uni_ide,// 0x17 receive streams blocked uni
	dproxy_myquic_stats_tx_conn_dblk_ide,// 0x14 send data block
	dproxy_myquic_stats_tx_strm_dblk_ide,// 0x15 send stream data blocked
	dproxy_myquic_stats_tx_strms_blk_bdi_ide,// 0x16 send streams blocked bidi
	dproxy_myquic_stats_tx_strms_blk_uni_ide,// 0x17 send streams blocked uni;       id 19
	dproxy_myquic_stats_rx_rst_strm_ide, // 0x04, receive reset_stream
	dproxy_myquic_stats_rx_stop_snding_ide,// 0x05, recive stop_sending
	dproxy_myquic_stats_tx_rst_strm_ide,// 0x04, send reset_stream
	dproxy_myquic_stats_tx_stop_snding_ide,// 0x05, send stop_sending
	/*tx/rx_strm_open/shut/close is used to trace bidi stream open, shut, close event */
	dproxy_myquic_stats_tx_strm_open_close_ide,//                                    id 24
	dproxy_myquic_stats_tx_strm_open_shut_ide,
	dproxy_myquic_stats_tx_strm_shut_close_ide,
	dproxy_myquic_stats_rx_strm_open_close_ide,
	dproxy_myquic_stats_rx_strm_open_shut_ide,
	dproxy_myquic_stats_rx_strm_shut_close_ide,//                                    id 29
	dproxy_myquic_stats_conn_act_closing_ide,
	dproxy_myquic_stats_conn_act_draining_ide,
	dproxy_myquic_stats_conn_closing_closed_ide,
	dproxy_myquic_stats_conn_draining_closed_ide,
	dproxy_myquic_stats_conn_others_closed_ide,//                                    id 34
	dproxy_myquic_stats_rx_app_close_ide,
	dproxy_myquic_stats_rx_quic_close_ide,
	dproxy_myquic_stats_rx_staless_rst_ide,
	dproxy_myquic_stats_lost_init_pkts_ide,
	dproxy_myquic_stats_lost_handshake_pkts_ide,//                                    id 39
	dproxy_myquic_stats_lost_1rtt_pkts_ide,

	dproxy_myquic_N_STATS
} dproxy_myquic_statistics_e;

#endif /* __DPTEST_NGTCP2_STATS_H__*/
