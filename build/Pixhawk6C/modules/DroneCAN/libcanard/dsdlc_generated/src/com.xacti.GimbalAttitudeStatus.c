#define CANARD_DSDLC_INTERNAL
#include <com.xacti.GimbalAttitudeStatus.h>
#include <string.h>

#ifdef CANARD_DSDLC_TEST_BUILD
#include <test_helpers.h>
#endif

uint32_t com_xacti_GimbalAttitudeStatus_encode(struct com_xacti_GimbalAttitudeStatus* msg, uint8_t* buffer
#if CANARD_ENABLE_TAO_OPTION
    , bool tao
#endif
) {
    uint32_t bit_ofs = 0;
    memset(buffer, 0, COM_XACTI_GIMBALATTITUDESTATUS_MAX_SIZE);
    _com_xacti_GimbalAttitudeStatus_encode(buffer, &bit_ofs, msg, 
#if CANARD_ENABLE_TAO_OPTION
    tao
#else
    true
#endif
    );
    return ((bit_ofs+7)/8);
}

/*
  return true if the decode is invalid
 */
bool com_xacti_GimbalAttitudeStatus_decode(const CanardRxTransfer* transfer, struct com_xacti_GimbalAttitudeStatus* msg) {
#if CANARD_ENABLE_TAO_OPTION
    if (transfer->tao && (transfer->payload_len > COM_XACTI_GIMBALATTITUDESTATUS_MAX_SIZE)) {
        return true; /* invalid payload length */
    }
#endif
    uint32_t bit_ofs = 0;
    if (_com_xacti_GimbalAttitudeStatus_decode(transfer, &bit_ofs, msg,
#if CANARD_ENABLE_TAO_OPTION
    transfer->tao
#else
    true
#endif
    )) {
        return true; /* invalid payload */
    }

    const uint32_t byte_len = (bit_ofs+7U)/8U;
#if CANARD_ENABLE_TAO_OPTION
    // if this could be CANFD then the dlc could indicating more bytes than
    // we actually have
    if (!transfer->tao) {
        return byte_len > transfer->payload_len;
    }
#endif
    return byte_len != transfer->payload_len;
}

#ifdef CANARD_DSDLC_TEST_BUILD
struct com_xacti_GimbalAttitudeStatus sample_com_xacti_GimbalAttitudeStatus_msg(void) {
    struct com_xacti_GimbalAttitudeStatus msg;

    msg.gimbal_roll = (int16_t)random_bitlen_signed_val(16);
    msg.gimbal_pitch = (int16_t)random_bitlen_signed_val(16);
    msg.gimbal_yaw = (int16_t)random_bitlen_signed_val(16);
    msg.magneticencoder_roll = (int16_t)random_bitlen_signed_val(16);
    msg.magneticencoder_pitch = (int16_t)random_bitlen_signed_val(16);
    msg.magneticencoder_yaw = (int16_t)random_bitlen_signed_val(16);
    return msg;
}
#endif
