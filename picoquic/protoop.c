#include "protoop.h"

protoop_id_t PROTOOP_PARAM_PARSE_FRAME = { .id = PROTOOPID_PARAM_PARSE_FRAME };
protoop_id_t PROTOOP_PARAM_PROCESS_FRAME = { .id = PROTOOPID_PARAM_PROCESS_FRAME };
protoop_id_t PROTOOP_PARAM_WRITE_FRAME = { .id = PROTOOPID_PARAM_WRITE_FRAME };
protoop_id_t PROTOOP_PARAM_NOTIFY_FRAME = { .id = PROTOOPID_PARAM_NOTIFY_FRAME };
protoop_id_t PROTOOP_NOPARAM_UPDATE_RTT = { .id = PROTOOPID_NOPARAM_UPDATE_RTT };
protoop_id_t PROTOOP_NOPARAM_SCHEDULE_FRAMES_ON_PATH = { .id = PROTOOPID_NOPARAM_SCHEDULE_FRAMES_ON_PATH };
protoop_id_t PROTOOP_NOPARAM_SCHEDULER_WRITE_NEW_FRAMES = { .id = PROTOOPID_NOPARAM_SCHEDULER_WRITE_NEW_FRAMES };
protoop_id_t PROTOOP_NOPARAM_PROCESS_ACK_RANGE = { .id = PROTOOPID_NOPARAM_PROCESS_ACK_RANGE };
protoop_id_t PROTOOP_NOPARAM_CHECK_SPURIOUS_RETRANSMISSION = { .id = PROTOOPID_NOPARAM_CHECK_SPURIOUS_RETRANSMISSION };
protoop_id_t PROTOOP_NOPARAM_PROCESS_POSSIBLE_ACK_OF_ACK_FRAME = { .id = PROTOOPID_NOPARAM_PROCESS_POSSIBLE_ACK_OF_ACK_FRAME };
protoop_id_t PROTOOP_NOPARAM_PROCESS_ACK_OF_ACK_RANGE = { .id = PROTOOPID_NOPARAM_PROCESS_ACK_OF_ACK_RANGE };
protoop_id_t PROTOOP_NOPARAM_PROCESS_ACK_OF_STREAM_FRAME = { .id = PROTOOPID_NOPARAM_PROCESS_ACK_OF_STREAM_FRAME };
protoop_id_t PROTOOP_NOPARAM_FIND_READY_STREAM = { .id = PROTOOPID_NOPARAM_FIND_READY_STREAM };
protoop_id_t PROTOOP_NOPARAM_SCHEDULE_NEXT_STREAM = { .id = PROTOOPID_NOPARAM_SCHEDULE_NEXT_STREAM };
protoop_id_t PROTOOP_NOPARAM_FIND_READY_PLUGIN_STREAM =  { .id = PROTOOPID_NOPARAM_FIND_READY_PLUGIN_STREAM };
protoop_id_t PROTOOP_NOPARAM_IS_ACK_NEEDED = { .id = PROTOOPID_NOPARAM_IS_ACK_NEEDED };
protoop_id_t PROTOOP_NOPARAM_IS_TLS_STREAM_READY = { .id = PROTOOPID_NOPARAM_IS_TLS_STREAM_READY };
protoop_id_t PROTOOP_NOPARAM_CHECK_STREAM_FRAME_ALREADY_ACKED = { .id = PROTOOPID_NOPARAM_CHECK_STREAM_FRAME_ALREADY_ACKED };
protoop_id_t PROTOOP_NOPARAM_INCOMING_ENCRYPTED = { .id = PROTOOPID_NOPARAM_INCOMING_ENCRYPTED };
protoop_id_t PROTOOP_NOPARAM_GET_INCOMING_PATH = { .id = PROTOOPID_NOPARAM_GET_INCOMING_PATH };
protoop_id_t PROTOOP_NOPARAM_CONGESTION_ALGORITHM_NOTIFY = { .id = PROTOOPID_NOPARAM_CONGESTION_ALGORITHM_NOTIFY };
protoop_id_t PROTOOP_NOPARAM_ESTIMATE_PATH_BANDWIDTH = { .id = PROTOOPID_NOPARAM_ESTIMATE_PATH_BANDWIDTH };
protoop_id_t PROTOOP_NOPARAM_CALLBACK_FUNCTION = { .id = PROTOOPID_NOPARAM_CALLBACK_FUNCTION };
protoop_id_t PROTOOP_NOPARAM_PRINTF = { .id = PROTOOPID_NOPARAM_PRINTF };
protoop_id_t PROTOOP_NOPARAM_SNPRINTF = { .id = PROTOOPID_NOPARAM_SNPRINTF };
protoop_id_t PROTOOP_NOPARAM_CONNECTION_ERROR = { .id = PROTOOPID_NOPARAM_CONNECTION_ERROR };
protoop_id_t PROTOOP_NOPARAM_GET_DESTINATION_CONNECTION_ID = { .id = PROTOOPID_NOPARAM_GET_DESTINATION_CONNECTION_ID };
protoop_id_t PROTOOP_NOPARAM_SET_NEXT_WAKE_TIME = { .id = PROTOOPID_NOPARAM_SET_NEXT_WAKE_TIME };
protoop_id_t PROTOOP_NOPARAM_HAS_CONGESTION_CONTROLLED_PLUGIN_FRAMEMS_TO_SEND = { .id = PROTOOPID_NOPARAM_HAS_CONGESTION_CONTROLLED_PLUGIN_FRAMEMS_TO_SEND };
protoop_id_t PROTOOP_NOPARAM_RETRANSMIT_NEEDED = { .id = PROTOOPID_NOPARAM_RETRANSMIT_NEEDED };
protoop_id_t PROTOOP_NOPARAM_RETRANSMIT_NEEDED_BY_PACKET = { .id = PROTOOPID_NOPARAM_RETRANSMIT_NEEDED_BY_PACKET };
protoop_id_t PROTOOP_NOPARAM_PREDICT_PACKET_HEADER_LENGTH = { .id = PROTOOPID_NOPARAM_PREDICT_PACKET_HEADER_LENGTH };
protoop_id_t PROTOOP_NOPARAM_GET_CHECKSUM_LENGTH = { .id = PROTOOPID_NOPARAM_GET_CHECKSUM_LENGTH };
protoop_id_t PROTOOP_NOPARAM_DEQUEUE_RETRANSMIT_PACKET = { .id = PROTOOPID_NOPARAM_DEQUEUE_RETRANSMIT_PACKET };
protoop_id_t PROTOOP_NOPARAM_DEQUEUE_RETRANSMITTED_PACKET = { .id = PROTOOPID_NOPARAM_DEQUEUE_RETRANSMITTED_PACKET };
protoop_id_t PROTOOP_NOPARAM_PREPARE_PACKET_OLD_CONTEXT = { .id = PROTOOPID_NOPARAM_PREPARE_PACKET_OLD_CONTEXT };
protoop_id_t PROTOOP_NOPARAM_PREPARE_MTU_PROBE = { .id = PROTOOPID_NOPARAM_PREPARE_MTU_PROBE };
protoop_id_t PROTOOP_NOPARAM_PREPARE_STREAM_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_STREAM_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_PLUGIN_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_PLUGIN_FRAME };
protoop_id_t PROTOOP_NOPARAM_STREAM_BYTES_MAX = { .id = PROTOOPID_NOPARAM_STREAM_BYTES_MAX };
protoop_id_t PROTOOP_NOPARAM_STREAM_ALWAYS_ENCODE_LENGTH = { .id = PROTOOPID_NOPARAM_STREAM_ALWAYS_ENCODE_LENGTH };
protoop_id_t PROTOOP_NOPARAM_PREPARE_CRYPTO_HS_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_CRYPTO_HS_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_ACK_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_ACK_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_ACK_ECN_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_ACK_ECN_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_MAX_DATA_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_MAX_DATA_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_REQUIRED_MAX_STREAM_DATA_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_REQUIRED_MAX_STREAM_DATA_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_FIRST_MISC_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_FIRST_MISC_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_MISC_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_MISC_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_PATH_CHALLENGE_FRAME = { .id = PROTOOPID_NOPARAM_PREPARE_PATH_CHALLENGE_FRAME };
protoop_id_t PROTOOP_NOPARAM_SKIP_FRAME = { .id = PROTOOPID_NOPARAM_SKIP_FRAME };
protoop_id_t PROTOOP_NOPARAM_PREPARE_PACKET_READY = { .id = PROTOOPID_NOPARAM_PREPARE_PACKET_READY };
protoop_id_t PROTOOP_NOPARAM_RECEIVED_PACKET = { .id = PROTOOPID_NOPARAM_RECEIVED_PACKET };
protoop_id_t PROTOOP_NOPARAM_BEFORE_SENDING_PACKET = { .id = PROTOOPID_NOPARAM_BEFORE_SENDING_PACKET };
protoop_id_t PROTOOP_NOPARAM_RECEIVED_SEGMENT = { .id = PROTOOPID_NOPARAM_RECEIVED_SEGMENT };
protoop_id_t PROTOOP_NOPARAM_SEGMENT_PREPARED = { .id = PROTOOPID_NOPARAM_SEGMENT_PREPARED };
protoop_id_t PROTOOP_NOPARAM_SEGMENT_ABORTED = { .id = PROTOOPID_NOPARAM_SEGMENT_ABORTED };
protoop_id_t PROTOOP_NOPARAM_HEADER_PARSED = { .id = PROTOOPID_NOPARAM_HEADER_PARSED };
protoop_id_t PROTOOP_NOPARAM_HEADER_PREPARED = { .id = PROTOOPID_NOPARAM_HEADER_PREPARED };
protoop_id_t PROTOOP_NOPARAM_FINALIZE_AND_PROTECT_PACKET = { .id = PROTOOPID_NOPARAM_FINALIZE_AND_PROTECT_PACKET };
protoop_id_t PROTOOP_NOPARAM_PACKET_WAS_LOST = { .id = PROTOOPID_NOPARAM_PACKET_WAS_LOST };
protoop_id_t PROTOOP_NOPARAM_CONNECTION_STATE_CHANGED = { .id = PROTOOPID_NOPARAM_CONNECTION_STATE_CHANGED };
protoop_id_t PROTOOP_NOPARAM_STREAM_OPENED = { .id = PROTOOPID_NOPARAM_STREAM_OPENED };
protoop_id_t PROTOOP_NOPARAM_PLUGIN_STREAM_OPENED = { .id = PROTOOPID_NOPARAM_PLUGIN_STREAM_OPENED };
protoop_id_t PROTOOP_NOPARAM_STREAM_FLAGS_CHANGED = { .id = PROTOOPID_NOPARAM_STREAM_FLAGS_CHANGED };
protoop_id_t PROTOOP_NOPARAM_STREAM_CLOSED = { .id = PROTOOPID_NOPARAM_STREAM_CLOSED };
protoop_id_t PROTOOP_NOPARAM_FAST_RETRANSMIT = { .id = PROTOOPID_NOPARAM_FAST_RETRANSMIT };
protoop_id_t PROTOOP_NOPARAM_RETRANSMISSION_TIMEOUT = { .id = PROTOOPID_NOPARAM_RETRANSMISSION_TIMEOUT };
protoop_id_t PROTOOP_NOPARAM_TAIL_LOSS_PROBE = { .id = PROTOOPID_NOPARAM_TAIL_LOSS_PROBE };
protoop_id_t PROTOOP_NOPARAM_SELECT_SENDING_PATH = { .id = PROTOOPID_NOPARAM_SELECT_SENDING_PATH };
protoop_id_t PROTOOP_NOPARAM_NOPARAM_UNKNOWN_TP_RECEIVED = { .id = PROTOOPID_NOPARAM_UNKNOWN_TP_RECEIVED };
protoop_id_t PROTOOP_NOPARAM_UPDATE_ACK_DELAY = { .id = PROTOOPID_NOPARAM_UPDATE_ACK_DELAY };
protoop_id_t PROTOOP_NOPARAM_LOG_EVENT = { .id = PROTOOPID_NOPARAM_LOG_EVENT };
protoop_id_t PROTOOP_NOPARAM_LOG_FRAME = { .id = PROTOOPID_NOPARAM_LOG_FRAME };
protoop_id_t PROTOOP_NOPARAM_PUSH_LOG_CONTEXT = { .id = PROTOOPID_NOPARAM_PUSH_LOG_CONTEXT };
protoop_id_t PROTOOP_NOPARAM_POP_LOG_CONTEXT = { .id = PROTOOPID_NOPARAM_POP_LOG_CONTEXT };