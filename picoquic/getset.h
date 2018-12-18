/**
 * \file getset.h
 * \brief Here are the fields accessible to plugins.
 */

#ifndef GETSET_H
#define GETSET_H

#include "picoquic.h"

typedef uint16_t access_key_t;

/**
 * @defgroup GETSET_FUNCTIONS Get/Set Functions
 * 
 * @{
 */

/**
 * Get a specific field belonging to the connection context \p cnx
 *
 * \param cnx The connection context
 * \param ak The key of the field to get
 * \param param A parameter for the key. Its meaning depends on the accessed field
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_cnx(picoquic_cnx_t *cnx, access_key_t ak, uint16_t param);

/**
 * Set a specific field belonging to the connection context \p cnx to the value \p val
 *
 * \param cnx The connection context
 * \param ak The key of the field to set
 * \param param A parameter for the key. Its meaning depends on the accessed field
 * \param val The value to set
 */
void set_cnx(picoquic_cnx_t *cnx, access_key_t ak, uint16_t param, protoop_arg_t val);

/**
 * Get a specific field belonging to the path \p path
 * 
 * \param path The path structure pointer
 * \param ak The key of the field to get
 * \param param A parameter for the key. Its meaning depends on the accessed field
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_path(picoquic_path_t *path, access_key_t ak, uint16_t param);

/**
 * Set a specific field belonging to the path context \p path to the value \p val
 *
 * \param path The path structure pointer
 * \param ak The key of the field to set
 * \param param A parameter for the key. Its meaning depends on the accessed field
 * \param val The value to set
 */
void set_path(picoquic_path_t *path, access_key_t ak, uint16_t param, protoop_arg_t val);

/**
 * Get a specific field beloging to the packet context \p pkt_ctx
 * 
 * \param pkt_ctx The packet context pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_pkt_ctx(picoquic_packet_context_t *pkt_ctx, access_key_t ak);

/**
 * Set a specific field belonging to the packet context \p pkt_ctx to the value \p val
 * 
 * \param pkt_ctx The packet context pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_pkt_ctx(picoquic_packet_context_t *pkt_ctx, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the packet \p pkt
 * 
 * \param pkt The packet pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_pkt(picoquic_packet_t *pkt, access_key_t ak);

/**
 * Set a specific field belonging to the packet \p pkt to the value \p val
 * 
 * \param pkt The packet pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_pkt(picoquic_packet_t *pkt, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the sack item \p sack_item
 * 
 * \param sack_item The sack_item pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_sack_item(picoquic_sack_item_t *sack_item, access_key_t ak);

/**
 * Set a specific field belonging to the sack item \p sack_item to the value \p val
 * 
 * \param sack_item The sack_item pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_sack_item(picoquic_sack_item_t *sack_item, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the connection id \p cnxid
 * 
 * \param cnxid The connection id pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_cnxid(picoquic_connection_id_t *cnxid, access_key_t ak);

/**
 * Set a specific field belonging to the connection id \p cnxid to the value \p val
 * 
 * \param cnxid The connection id pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_cnxid(picoquic_connection_id_t *cnxid, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the stream_head \p stream_head
 * 
 * \param stream_head The stream head pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_stream_head(picoquic_stream_head *stream_head, access_key_t ak);

/**
 * Set a specific field belonging to the stream_head \p stream_head to the value \p val
 * 
 * \param cnxid The stream head pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_stream_head(picoquic_stream_head *stream_head, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the crypto context \p crypto_context
 * 
 * \param crypto_context The crypto context pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_crypto_context(picoquic_crypto_context_t *crypto_context, access_key_t ak);

/**
 * Set a specific field belonging to the crypto context \p crypto_context to the value \p val
 * 
 * \param cnxid The crypto context pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_crypto_context(picoquic_crypto_context_t *crypto_context, access_key_t ak, protoop_arg_t val);

/**
 * Get a specific field belonging to the packet header \p ph
 * 
 * \param ph The packet header pointer
 * \param ak The key of the field to get
 * 
 * \return The value of the field with the corresponding key
 */
protoop_arg_t get_ph(picoquic_packet_header *ph, access_key_t ak);

/**
 * Set a specific field belonging to the packet header \p ph to the value \p val
 * 
 * \param cnxid The packet header pointer
 * \param ak The key of the field to get
 * \param val The value to set
 */
void set_ph(picoquic_packet_header *ph, access_key_t ak, protoop_arg_t val);



/**
 * @}
 */

/**
 * @defgroup GETSET_PARAMETERS_PARAM Transport parameters values for \p param
 */
#define TRANSPORT_PARAMETER_INITIAL_MAX_STREAM_DATA_BIDI_LOCAL 0x00
#define TRANSPORT_PARAMETER_INITIAL_MAX_DATA 0x01
#define TRANSPORT_PARAMETER_INITIAL_MAX_STREAM_ID_BIDIR 0x02
#define TRANSPORT_PARAMETER_IDLE_TIMEOUT 0x03
#define TRANSPORT_PARAMETER_PREFERRED_ADDRESS 0x04
#define TRANSPORT_PARAMETER_MAX_PACKET_SIZE 0x05
#define TRANSPORT_PARAMETER_STATELESS_RESET_TOKEN 0x06
#define TRANSPORT_PARAMETER_ACK_DELAY_EXPONENT 0x07
#define TRANSPORT_PARAMETER_INITIAL_MAX_STREAM_ID_UNIDIR 0x08
#define TRANSPORT_PARAMETER_MIGRATION_DISABLED 0x09
#define TRANSPORT_PARAMETER_INITIAL_MAX_STREAM_DATA_BIDI_REMOTE 0x0a
#define TRANSPORT_PARAMETER_INITIAL_MAX_STREAM_DATA_UNIDIR 0x0b
/**
 * @}
 * 
 * @defgroup GETSET_CNX_AK Connection Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_cnx and \p set_cnx calls.
 * 
 * @{
 */

/** The input of the protocol operation number \p param */
#define CNX_AK_INPUT 0x00
/** The output of the protocol operation number \p param */
#define CNX_AK_OUTPUT 0x01
/** The proposed QUIC version, as a uint32_t */
#define CNX_AK_PROPOSED_VERSION 0x02
/** Whether 0-RTT is accepted */
#define CNX_AK_IS_0RTT_ACCEPTED 0x03
/** Whether remote parameters were received */
#define CNX_AK_REMOTE_PARMETERS_RECEIVED 0x04
/** Current value of the spin bit */
#define CNX_AK_CURRENT_SPIN 0x05
/** Is this connection the client side? */
#define CNX_AK_CLIENT_MODE 0x06
/** Previous spin bit */
#define CNX_AK_PREV_SPIN 0x07
/** Valid Edge Counter, makes spin bit RTT measurements more reliable */
#define CNX_AK_SPIN_VEC 0x08
/** Internal signalling from incoming to outgoing: we just spinned it */
#define CNX_AK_SPIN_EDGE 0x09
/** Timestamp of the incoming packet that triggered the spinning, in uint64_t */
#define CNX_AK_SPIN_LAST_TRIGGER 0x0a
/** The local parameter with the value provided by \p param */
#define CNX_AK_LOCAL_PARAMETER 0x0b
/** The remote parameter with the value provided by \p param */
#define CNX_AK_REMOTE_PARAMETER 0x0c
/** On clients, maximum 0RTT size accepted by server */
#define CNX_AK_MAX_EARLY_DATA_SIZE 0x0d
/** The connection state, as defined by \p picoquic_state_enum */
#define CNX_AK_STATE 0x0e
/** The pointer to the initial connection ID */
#define CNX_AK_INITIAL_CID 0x0f
/** The start time of the connection, as uint64_t */
#define CNX_AK_START_TIME 0x10
/** The application error code, as uint16_t */
#define CNX_AK_APPLICATION_ERROR 0x11
/** The local error code, as uint16_t */
#define CNX_AK_LOCAL_ERROR 0x12
/** The remote application error code, as uint16_t */
#define CNX_AK_REMOTE_APPLICATION_ERROR 0x13
/** The remote error code, as uint16_t */
#define CNX_AK_REMOTE_ERROR 0x14
/** The offending frame type causing the error, as uint64_t */
#define CNX_AK_OFFENDING_FRAME_TYPE 0x15
/** Next time sending data is expected, as uint64_t */
#define CNX_AK_NEXT_WAKE_TIME 0x16
/** Last local time at which the connection progressed, as uint64_t */
#define CNX_AK_LATEST_PROGRESS_TIME 0x17
/** Number of path challenges sent, as uint32_t */
#define CNX_AK_NB_PATH_CHALLENGE_SENT 0x18
/** Number of path responses received, as uint32_t */
#define CNX_AK_NB_PATH_RESPONSE_RECEIVED 0x19
/** Number of zero rtt packets sent, as uint32_t */
#define CNX_AK_NB_ZERO_RTT_SENT 0x1a
/** Number of zero rtt packets acked, as uint32_t */
#define CNX_AK_NB_ZERO_RTT_ACKED 0x1b
/** Number of total packet retransmissions, as uint64_t */
#define CNX_AK_NB_RETRANSMISSION_TOTAL 0x1c
/** Number of spurious packet retransmissions, as uint64_t */
#define CNX_AK_NB_SPURIOUS 0x1d
/** Total number of local ECN ECT0 packets, as uint64_t */
#define CNX_AK_ECN_ECT0_TOTAL_LOCAL 0x1e
/** Total number of local ECN ECT1 packets, as uint64_t */
#define CNX_AK_ECN_ECT1_TOTAL_LOCAL 0x1f
/** Total number of local ECN CE packets, as uint64_t */
#define CNX_AK_ECN_CE_TOTAL_LOCAL 0x20
/** Total number of remote ECN ECT0 packets, as uint64_t */
#define CNX_AK_ECN_ECT0_TOTAL_REMOTE 0x21
/** Total number of remote ECN ECT1 packets, as uint64_t */
#define CNX_AK_ECN_ECT1_TOTAL_REMOTE 0x22
/** Total number of remote ECN CE packets, as uint64_t */
#define CNX_AK_ECN_CE_TOTAL_REMOTE 0x23
/** Total data sent, as uint64_t */
#define CNX_AK_DATA_SENT 0x24
/** Total data received, as uint64_t */
#define CNX_AK_DATA_RECEIVED 0x25
/** Maxdata local, as uint64_t */
#define CNX_AK_MAXDATA_LOCAL 0x26
/** Maxdata remote, as uint64_t */
#define CNX_AK_MAXDATA_REMOTE 0x27
/** Max stream ID bidirectional local, as uint64_t */
#define CNX_AK_MAX_STREAM_ID_BIDIR_LOCAL 0x28
/** Max stream ID unidirectional local, as uint64_t */
#define CNX_AK_MAX_STREAM_ID_UNIDIR_LOCAL 0x29
/** Max stream ID bidirectional remote, as uint64_t */
#define CNX_AK_MAX_STREAM_ID_BIDIR_REMOTE 0x2a
/** Max stream ID unidirectional remote, as uint64_t */
#define CNX_AK_MAX_STREAM_ID_UNIDIR_REMOTE 0x2b
/** Keep alive interval used (0 disable it) */
#define CNX_AK_KEEP_ALIVE_INTERVAL 0x2c
/** The number of paths currently available */
#define CNX_AK_NB_PATHS 0x2d
/** The pointer to the path with its index provided by \p param */
#define CNX_AK_PATH 0x2e
/** The pointer to the congestion control algorithm */
#define CNX_AK_CONGESTION_CONTROL_ALGORITHM 0x2f
/** The pointer to the TLS stream with the epoch \p param */
#define CNX_AK_TLS_STREAM 0x30
/** The pointer to the encryption/decryption objects for the epoch \p param */
#define CNX_AK_CRYPTO_CONTEXT 0x31
/** The retry token length */
#define CNX_AK_RETRY_TOKEN_LENGTH 0x32

/**
 * @}
 * 
 * @defgroup GETSET_PATH_AK Path Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_path and \p set_path calls.
 * 
 * @{
 */

/** The pointer to the struct sockaddr of the peer */
#define PATH_AK_PEER_ADDR 0x00
/** The length of the peer addr structure */
#define PATH_AK_PEER_ADDR_LEN 0x01
/** The pointer to the local struct sockaddr */
#define PATH_AK_LOCAL_ADDR 0x02
/** The length of the local addr structure */
#define PATH_AK_LOCAL_ADDR_LEN 0x03
/** The local interface index */
#define PATH_AK_IF_INDEX_LOCAL 0x04
/** The challenge value */
#define PATH_AK_CHALLENGE 0x05
/** The last challenge time */
#define PATH_AK_CHALLENGE_TIME 0x06
/** The challenge response value pointer */
#define PATH_AK_CHALLENGE_RESPONSE 0x07
/** The number of time the challenge was repeated */
#define PATH_AK_CHALLENGE_REPEAT_COUNT 0x08
/** Flag for a MTU probe sent */
#define PATH_AK_MTU_PROBE_SENT 0x09
/** Flag indicating that the challenge was verified */
#define PATH_AK_CHALLENGE_VERIFIED 0x0a
/** Flag indicating that there is a challenge response to send */
#define PATH_AK_CHALLENGE_RESPONSE_TO_SEND 0x0b
/** Flag indicating that a ping was received */
#define PATH_AK_PING_RECEIVED 0x0c
/** The max ack delay, as uint64_t */
#define PATH_AK_MAX_ACK_DELAY 0x0d
/** The smoothed RTT, as uint64_t */
#define PATH_AK_SMOOTHED_RTT 0x0e
/** The RTT variance, as uint64_t */
#define PATH_AK_RTT_VARIANT 0x0f
/** The retransmit timer, as uint64_t */
#define PATH_AK_RETRANSMIT_TIMER 0x10
/** The min RTT, as uint64_t */
#define PATH_AK_RTT_MIN 0x11
/** The max spurious RTT, as uint64_t */
#define PATH_AK_MAX_SPURIOUS_RTT 0x12
/** The max reordering delay */
#define PATH_AK_MAX_REORDER_DELAY 0x13
/** The max reordering gap */
#define PATH_AK_MAX_REORDER_GAP 0x14
/** The send MTU */
#define PATH_AK_SEND_MTU 0x15
/** The maximum MTU that was tried */
#define PATH_AK_SEND_MTU_MAX_TRIED 0x16
/** The congestion window */
#define PATH_AK_CWIN 0x17
/** The number of bytes in flight */
#define PATH_AK_BYTES_IN_TRANSIT 0x18
/** The pointer to the congestion control algorithm state */
#define PATH_AK_CONGESTION_ALGORITHM_STATE 0x19
/** The pacing packet time in nano second, as uint64_t */
#define PATH_AK_PACKET_TIME_NANO_SEC 0x1a
/** The pacing reminder in nano second, as uint64_t */
#define PATH_AK_PACING_REMINDER_NANO_SEC 0x1b
/** The pacing margin in micro second, as uint64_t */
#define PATH_AK_PACING_MARGIN_MICROS 0x1c
/** The next pacing time, as uint64_t */
#define PATH_AK_NEXT_PACING_TIME 0x1d
/** The pointer to the local connection ID */
#define PATH_AK_LOCAL_CID 0x1e
/** The pointer to the remote connection ID */
#define PATH_AK_REMOTE_CID 0x1f
/** The pointer to the reset secret */
#define PATH_AK_RESET_SECRET 0x20
/** The pointer to the packet context with the picoquic_packet_context_enum \p param */
#define PATH_AK_PKT_CTX 0x21

/**
 * @}
 * 
 * @defgroup GETSET_PKT_CTX_AK Packet context Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_pkt_ctx and \p set_pkt_ctx calls.
 * 
 * @{
 */

/** The send sequence */
#define PKT_CTX_AK_SEND_SEQUENCE 0x00
/** Pointer to the first sack item */
#define PKT_CTX_AK_FIRST_SACK_ITEM 0x01
/** The largest timestamp received */
#define PKT_CTX_AK_TIME_STAMP_LARGEST_RECEIVED 0x02
/** The highest ack number sent */
#define PKT_CTX_AK_HIGHEST_ACK_SENT 0x03
/** The highest ack sent time */
#define PKT_CTX_AK_HIGHEST_ACK_TIME 0x04
/** The local ack delay */
#define PKT_CTX_AK_ACK_DELAY_LOCAL 0x05
/** The number of retransmitted packets */
#define PKT_CTX_AK_NB_RETRANSMIT 0x06
/** The latest retransmitted time */
#define PKT_CTX_AK_LATEST_RETRANSMIT_TIME 0x07
/** The highest packet number acknowledged */
#define PKT_CTX_AK_HIGHEST_ACKNOWLEDGED 0x08
/** The time at which the hisghest acknowledged was sent */
#define PKT_CTX_AK_LATEST_TIME_ACKNOWLEDGED 0x09
/** The pointer to the newest retransmit packet */
#define PKT_CTX_AK_RETRANSMIT_NEWEST 0x0a
/** The pointer to the oldest retransmit packet */
#define PKT_CTX_AK_RETRANSMIT_OLDEST 0x0b
/** The pointer to the newest retransmitted packet */
#define PKT_CTX_AK_RETRANSMITTED_NEWEST 0x0c
/** The pointer to the oldest retransmitted packet */
#define PKT_CTX_AK_RETRANSMITTED_OLDEST 0x0d
/** Indicate if a ack is needed */
#define PKT_CTX_AK_ACK_NEEDED 0x0e

/**
 * @}
 * 
 * @defgroup GETSET_PKT_AK Packet Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_pkt and \p set_pkt calls.
 * 
 * @{
 */

/** The pointer to the previous packet */
#define PKT_AK_PREVIOUS_PACKET 0x00
/** The pointer to the next packet */
#define PKT_AK_NEXT_PACKET 0x01
/** The pointer of the path on which this packet is sent */
#define PKT_AK_SEND_PATH 0x02
/** The sequence number */
#define PKT_AK_SEQUENCE_NUMBER 0x03
/** The send time */
#define PKT_AK_SEND_TIME 0x04
/** The length of the packet,as uint32_t */
#define PKT_AK_LENGTH 0x05
/** The length difference between encrypted and unencrypted */
#define PKT_AK_CHECKSUM_OVERHEAD 0x06
/** The offset of the packet */
#define PKT_AK_OFFSET 0x07
/** The packet type, as picoquic_packet_type_enum */
#define PKT_AK_TYPE 0x08
/** The packet context, as picoquic_packet_context_enum */
#define PKT_AK_CONTEXT 0x09
/** Flag stating that the packet is evaluated */
#define PKT_AK_IS_EVALUATED 0x0a
/** Flag stating that the packet is a pure ACK */
#define PKT_AK_IS_PURE_ACK 0x0b
/** Flag stating that the packet contains crypto material */
#define PKT_AK_CONTAINS_CRYPTO 0x0c
/** Flag stating that the packet is under congestion control */
#define PKT_AK_IS_CONGESTION_CONTROLLED 0x0d
/** Pointer to the content of the packet */
#define PKT_AK_BYTES 0x0e

/**
 * @}
 * 
 * @defgroup GETSET_SACK_ITEM_AK SACK item Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_sack_item and \p set_sack_item calls.
 * 
 * @{
 */

/** The next sack item */
#define SACK_ITEM_AK_NEXT_SACK 0x00
/** The start of the SACK range */
#define SACK_ITEM_AK_START_RANGE 0x01
/** The end of the SACK range */
#define SACK_ITEM_AK_END_RANGE 0x02

/**
 * @}
 * 
 * @defgroup GETSET_CNXID_AK Connection ID Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_cnxid and \p set_cnxid calls.
 * 
 * @{
 */

/** The pointer to the connection ID */
#define CNXID_AK_ID 0x00
/** The length of the connection ID */
#define CNXID_AK_LEN 0x01

/**
 * @}
 * 
 * @defgroup GETSET_STREAM_HEAD_AK Stream head Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_stream_head and \p set_stream_head calls.
 * 
 * @{
 */

/** The pointer to the sending queue */
#define STREAM_HEAD_AK_SEND_QUEUE 0x00
/** The offset of consumed data */
#define STREAM_HEAD_AK_CONSUMED_OFFSET 0x01

/**
 * @}
 * 
 * @defgroup GETSET_CRYPTO_CONTEXT_AK Crypto context Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_crypto_context and \p set_crypto_context calls.
 * 
 * @{
 */

/** The pointer to the aead encryption scheme */
#define CRYPTO_CONTEXT_AK_AEAD_ENCRYPTION 0x00

/**
 * @}
 * 
 * @defgroup GETSET_PH_AK Packet header Access Keys
 * 
 * \brief Those access keys are dedicated to the \p get_ph and \p set_ph calls.
 * 
 * @{
 */

/** The pointer to the destination connection ID */
#define PH_AK_DESTINATION_CNXID 0x00
/** The pointer to the destination connection ID */
#define PH_AK_OFFSET 0x01
/** The pointer to the payload length field */
#define PH_AK_PAYLOAD_LENGTH 0x02

/**
 * @}
 */

#endif /* GETSET_H */