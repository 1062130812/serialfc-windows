#ifndef SERIALFC_H
#define SERIALFC_H

#define SERIALFC_IOCTL_MAGIC 0x8019

#define IOCTL_FASTCOM_ENABLE_RS485 CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x800, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_RS485 CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x801, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_RS485 CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x802, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_ECHO_CANCEL CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x803, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_ECHO_CANCEL CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x804, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_ECHO_CANCEL CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x805, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_TERMINATION CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x806, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_TERMINATION CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x807, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_TERMINATION CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x808, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_SET_SAMPLE_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x809, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_SAMPLE_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80A, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_SET_TX_TRIGGER CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80B, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_TX_TRIGGER CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80C, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_SET_RX_TRIGGER CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80D, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_RX_TRIGGER CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80E, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_SET_CLOCK_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x80F, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_ISOCHRONOUS CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x810, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_ISOCHRONOUS CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x811, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_ISOCHRONOUS CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x812, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_EXTERNAL_TRANSMIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x813, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_EXTERNAL_TRANSMIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x814, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_EXTERNAL_TRANSMIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x815, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_SET_FRAME_LENGTH CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x816, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_FRAME_LENGTH CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x817, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_GET_CARD_TYPE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x818, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_9BIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x819, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_9BIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x81A, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_9BIT CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x81B, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_FASTCOM_ENABLE_FIXED_BAUD_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x81C, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_DISABLE_FIXED_BAUD_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x81D, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_FASTCOM_GET_FIXED_BAUD_RATE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x81E, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define IOCTL_THALES_ENABLE_MASTER_MODE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x900, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_THALES_ENABLE_SLAVE_MODE CTL_CODE(SERIALFC_IOCTL_MAGIC, 0x901, METHOD_BUFFERED, FILE_ANY_ACCESS)

#endif