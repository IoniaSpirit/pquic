#include <picoquic_internal.h>
#include "plugin.h"
#include "util.h"
#include "../helpers.h"
#include "bpf.h"

/**
 * See "received_segment"
 * cnx->protoop_inputv[0] = picoquic_packet_header *ph
 * cnx->protoop_inputv[1] = picoquic_path_t *path
 * cnx->protoop_inputv[2] = size_t length
 *
 * Output: None
 */
protoop_arg_t packet_received(picoquic_cnx_t *cnx)
{
    cop2_conn_metrics *metrics = get_cop2_metrics(cnx);
    cop2_path_metrics *path_metrics;
    picoquic_packet_header *ph = (picoquic_packet_header *) get_cnx(cnx, CNX_AK_INPUT, 0);
    picoquic_path_t *path = (picoquic_path_t *) get_cnx(cnx, CNX_AK_INPUT, 1);
    size_t length = (size_t) get_cnx(cnx, CNX_AK_INPUT, 2);

    int epoch = (int) get_ph(ph, PH_AK_EPOCH);
    if (epoch != 1 && epoch != 3) {
        path_metrics = &metrics->handshake_metrics;
    } else {
        path_metrics = find_metrics_for_path(cnx, metrics, path);
    }
    path_metrics->metrics.data_recv += length;
    path_metrics->metrics.pkt_recv++;
    if (path_metrics == &metrics->handshake_metrics) {
        complete_path(path_metrics, cnx, path);
    }
    return 0;
}