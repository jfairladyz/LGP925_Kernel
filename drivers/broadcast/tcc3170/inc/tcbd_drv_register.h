
#ifndef __TCBD_DRV_REGISTER_H__
#define __TCBD_DRV_REGISTER_H__

#define Bit31    0x80000000
#define Bit30    0x40000000
#define Bit29    0x20000000
#define Bit28    0x10000000
#define Bit27    0x08000000
#define Bit26    0x04000000
#define Bit25    0x02000000
#define Bit24    0x01000000
#define Bit23    0x00800000
#define Bit22    0x00400000
#define Bit21    0x00200000
#define Bit20    0x00100000
#define Bit19    0x00080000
#define Bit18    0x00040000
#define Bit17    0x00020000
#define Bit16    0x00010000
#define Bit15    0x00008000
#define Bit14    0x00004000
#define Bit13    0x00002000
#define Bit12    0x00001000
#define Bit11    0x00000800
#define Bit10    0x00000400
#define Bit9     0x00000200
#define Bit8     0x00000100
#define Bit7     0x00000080
#define Bit6     0x00000040
#define Bit5     0x00000020
#define Bit4     0x00000010
#define Bit3     0x00000008
#define Bit2     0x00000004
#define Bit1     0x00000002
#define Bit0     0x00000001
#define BitNONE  0x00000000

#define TCBD_SYS_EN       0x00
#define TCBD_SYS_RESET    0x01
#define TCBD_IRQ_MODE     0x02
#define TCBD_IRQ_EN       0x03
#define TCBD_IRQ_STAT_CLR 0x04
#define TCBD_IRQ_ERROR    0x05
#define TCBD_IRQ_LATCH    0x05
#define TCBD_PLL_6        0x06
#define TCBD_PLL_7        0x07
#define TCBD_PLL_8        0x08
#define TCBD_PLL_9        0x09
#define TCBD_CHIPADDR     0x0a
#define TCBD_PROGRAMID    0x0b
#define TCBD_CHIPID       0x0c
#define TCBD_INIT_REMAP   0x0d
#define TCBD_INIT_PC      0x0e

#define TCBD_GPIO_ALT 0x10
#define TCBD_GPIO_DR  0x12
#define TCBD_GPIO_LR  0x14
#define TCBD_GPIO_DRV 0x16
#define TCBD_GPIO_PE  0x18
#define TCBD_DIVIO    0x1a

#define TCBD_STREAM_CFG0 0x1b
#define TCBD_STREAM_CFG1 0x1c
#define TCBD_STREAM_CFG2 0x1d
#define TCBD_STREAM_CFG3 0x1e
#define TCBD_STREAM_CFG4 0x1f

#define TCBD_CMDDMA_CTRL      0x20
#define TCBD_CMDDMA_SADDR     0x21
#define TCBD_CMDDMA_SIZE      0x27
#define TCBD_CMDDMA_STARTCTRL 0x29
#define TCBD_CMDDMA_DATA_WIND 0x2a
#define TCBD_TGTBUFF_CIR_MODE 0x2b
#define TCBD_CMDDMA_CRC32     0x2c

#define TCBD_PERI_CTRL  0x30
#define TCBD_PERI_MODE0 0x31
#define TCBD_PERI_MODE1 0x32
#define TCBD_PERI_MODE2 0x33
#define TCBD_PERI_MODE3 0x34
#define TCBD_PERI_TEST0 0x37
#define TCBD_PERI_TEST1 0x38
#define TCBD_PERI_TEST2 0x39
#define TCBD_PERI_TEST3 0x3a
#define TCBD_PERI_TEST4 0x3b

#define TCBD_MAIL_CTRL         0x3c
#define TCBD_MAIL_FIFO_R       0x3d
#define TCBD_MAIL_FIFO_R_LATCH 0x3d
#define TCBD_MAIL_FIFO_W       0x3e
#define TCBD_MAIL_FIFO_W_LATCH 0x3e
#define TCBD_MAIL_FIFO_WIND    0x3f

#define TCBD_I2CMST_CTRL       0x40
#define TCBD_I2CMST_FILTER     0x41
#define TCBD_I2CMST_PRER_H     0x42
#define TCBD_I2CMST_PRER_L     0x43
#define TCBD_I2CMST_DEV_ADDR   0x44
#define TCBD_I2CMST_TGT_ADDR   0x45
#define TCBD_I2CMST_TXRX       0x46
#define TCBD_I2CMST_AUTOCONFIG 0x47
#define TCBD_I2CMST_START      0x48
#define TCBD_I2CMST_STAT0      0x49
#define TCBD_I2CMST_STAT1      0x4A

#define TCBD_STREAMMIX_CFG0 0x4D

#define TCBD_OBUFF_CONFIG              0x4e
#define TCBD_OBUFF_INIT                0x4f
#define TCBD_OBUFF_A_SADDR             0x50
#define TCBD_OBUFF_A_EADDR             0x52
#define TCBD_OBUFF_A_FIFO_THR          0x54
#define TCBD_OBUFF_A_CIRBUFF_DATA_ADDR 0x54
#define TCBD_OBUFF_A_FIFO_STAT         0x56
#define TCBD_OBUFF_A_CIRBUFF_DATA_SIZE 0x56
#define TCBD_OBUFF_B_SADDR             0x58
#define TCBD_OBUFF_B_EADDR             0x5a
#define TCBD_OBUFF_B_FIFO_THR          0x5c
#define TCBD_OBUFF_B_CIRBUFF_DATA_ADDR 0x5c
#define TCBD_OBUFF_B_FIFO_STAT         0x5e
#define TCBD_OBUFF_B_CIRBUFF_DATA_SIZE 0x5e
#define TCBD_OBUFF_C_SADDR             0x60
#define TCBD_OBUFF_C_EADDR             0x62
#define TCBD_OBUFF_C_FIFO_THR          0x64
#define TCBD_OBUFF_C_CIRBUFF_DATA_ADDR 0x64
#define TCBD_OBUFF_C_FIFO_STAT         0x66
#define TCBD_OBUFF_C_CIRBUFF_DATA_SIZE 0x66
#define TCBD_OBUFF_D_SADDR             0x68
#define TCBD_OBUFF_D_EADDR             0x6a
#define TCBD_OBUFF_D_FIFO_THR          0x6c
#define TCBD_OBUFF_D_CIRBUFF_DATA_ADDR 0x6c
#define TCBD_OBUFF_D_FIFO_STAT         0x6e
#define TCBD_OBUFF_D_CIRBUFF_DATA_SIZE 0x6e

#define TCBD_RF_CFG0          0x70
#define TCBD_RF_CFG1          0x71
#define TCBD_RF_CFG2          0x72
#define TCBD_RF_CFG3          0x73
#define TCBD_RF_CFG4          0x74
#define TCBD_RF_CFG5          0x75
#define TCBD_RF_CFG6          0x76
#define TCBD_OP_DEBUG0        0x78
#define TCBD_OP_DEBUG1        0x79
#define TCBD_OP_DEBUG2        0x7a
#define TCBD_OP_LDO_CONFIG    0x7b
#define TCBD_OP_XTAL_BIAS     0x7c
#define TCBD_OP_XTAL_BIAS_KEY 0x7d
#define TCBD_OP_STATUS0       0x7e
#define TCBD_OP_STATUS1       0x7f


#define TCBD_SYS_COMP_DSP               Bit1
#define TCBD_SYS_COMP_EP                Bit0
#define TCBD_SYS_COMP_ALL               (Bit0|Bit1)

#define TCBD_IRQ_MODE_PAD_ENABLE      Bit2
#define TCBD_IRQ_MODE_TRIGER          Bit1
#define TCBD_IRQ_MODE_LEVEL           BitNONE
#define TCBD_IRQ_MODE_RISING          Bit0
#define TCBD_IRQ_MODE_FALLING         BitNONE
#define TCBD_IRQ_EN_FIFODINIT         Bit7
#define TCBD_IRQ_EN_FIFOCINIT         Bit6
#define TCBD_IRQ_EN_FIFOBINIT         Bit5
#define TCBD_IRQ_EN_FIFOAINIT         Bit4
#define TCBD_IRQ_EN_DATAINT           Bit3
#define TCBD_IRQ_EN_I2C               Bit1
#define TCBD_IRQ_EN_MAILBOX           Bit0
#define TCBD_IRQ_STAT_FIFODINIT       Bit7
#define TCBD_IRQ_STAT_FIFOCINIT       Bit6
#define TCBD_IRQ_STAT_FIFOBINIT       Bit5
#define TCBD_IRQ_STAT_FIFOAINIT       Bit4
#define TCBD_IRQ_STAT_DATAINT         Bit3
#define TCBD_IRQ_STAT_I2C             Bit1
#define TCBD_IRQ_STAT_MAILBOX         Bit0
#define TCBD_IRQ_STATCLR_FIFODINIT    Bit7
#define TCBD_IRQ_STATCLR_FIFOCINIT    Bit6
#define TCBD_IRQ_STATCLR_FIFOBINIT    Bit5
#define TCBD_IRQ_STATCLR_FIFOAINIT    Bit4
#define TCBD_IRQ_STATCLR_DATAINT      Bit3
#define TCBD_IRQ_STATCLR_I2C          Bit1
#define TCBD_IRQ_STATCLR_MAILBOX      Bit0
#define TCBD_IRQ_STATCLR_ALL          (Bit0|Bit1|Bit3|Bit4|Bit5|Bit6|Bit7)
#define TCBD_IRQ_ERROR_FIFOD          Bit7
#define TCBD_IRQ_ERROR_FIFOC          Bit6
#define TCBD_IRQ_ERROR_FIFOB          Bit5
#define TCBD_IRQ_ERROR_FIFOA          Bit4
#define TCBD_IRQ_ERROR_DATA           Bit3
#define TCBD_IRQ_ERROR_I2C            Bit1
#define TCBD_IRQ_ERROR_MAILBOX        Bit0
                                         
#define TCBD_I2CREPEAT_EN             Bit2
#define TCBD_I2CREPEAT_MODE_CONTINUE  BitNONE
#define TCBD_I2CREPEAT_MODE_ONESHOT   Bit1
#define TCBD_I2CREPEAT_SCL_CMOS       BitNONE
#define TCBD_I2CREPEAT_SCL_OPENDRAIN  Bit0
#define TCBD_I2CREPEAT_START          Bit0
#define TCBD_I2CREPEAT_STARTCTRL      0x4F
                                         
#define TCBD_CMDDMA_DMAEN             Bit7
#define TCBD_CMDDMA_CIRCULARMODE      Bit5
#define TCBD_CMDDMA_CRC32EN           Bit4
#define TCBD_CMDDMA_ADDRFIX           Bit3
#define TCBD_CMDDMA_WRITEMODE         Bit2
#define TCBD_CMDDMA_READMODE          BitNONE
#define TCBD_CMDDMA_BYTEMSB           Bit1
#define TCBD_CMDDMA_BITMSB            Bit0
#define TCBD_CMDDMA_START_AUTOCLR     Bit7
#define TCBD_CMDDMA_CRC32INIT_AUTOCLR Bit1
#define TCBD_CMDDMA_INIT_AUTOCLR      Bit0

#define TCBD_TGTBUFF_DEFAULT          BitNONE
#define TCBD_TGTBUFF_CIR_MODE_C       (Bit0|Bit1)
#define TCBD_TGTBUFF_CIR_MODE_B       Bit1
#define TCBD_TGTBUFF_CIR_MODE_A       Bit0

#define TCBD_PERI_EN                  Bit7
#define TCBD_PERI_SEL_SPI             Bit4
#define TCBD_PERI_SEL_TS              Bit5
#define TCBD_PERI_SEL_HPI             (Bit4|Bit5)
#define TCBD_PERI_SEL_OTHER           BitNONE
#define TCBD_PERI_INIT_AUTOCLR        Bit1
#define TCBD_PERI_HEADER_ON           Bit0
#define TCBD_PERI_SPI_TISSP           Bit7
#define TCBD_PERI_SPI_MOTOROLA_SSP    BitNONE
#define TCBD_PERI_SPI_SLAVE           Bit6
#define TCBD_PERI_SPI_MASTER          BitNONE
#define TCBD_PERI_SPI_FASTON          Bit5
#define TCBD_PERI_SPI_SIZE8BITB       it0
#define TCBD_PERI_SPI_SIZE16BIT       Bit1
#define TCBD_PERI_SPI_SIZE32BIT       BitNONE
#define TCBD_PERI_TS_MSM_SLAVE        Bit1
#define TCBD_PERI_TS_NORMAL_SLAVE     BitNONE
#define TCBD_PERI_TS_STS              BitNONE
#define TCBD_PERI_TS_PTS              Bit6
#define TCBD_PERI_TS_FASTON           Bit5
#define TCBD_PERI_TS_TSCLKMASKON      Bit4
#define TCBD_PERI_HPI_INTEL           Bit7
#define TCBD_PERI_HPI_MOTOROLA        BitNONE
#define TCBD_PERI_HPI_BYTEMSB         Bit6
#define TCBD_PERI_HPI_BITMSB          Bit5
#define TCBD_PERI_SPI_CLKINIT_LOW     BitNONE
#define TCBD_PERI_SPI_CLKINIT_HIGH    Bit7
#define TCBD_PERI_SPI_CLKPOL_POS      BitNONE
#define TCBD_PERI_SPI_CLKPOL_NEG      Bit6
#define TCBD_PERI_SPI_BYTEMSB1        Bit5
#define TCBD_PERI_SPI_BITMSB1         Bit4
#define TCBD_PERI_TS_CLKPHASE_POS     BitNONE
#define TCBD_PERI_TS_CLKPHASE_NEG     Bit7
#define TCBD_PERI_TS_SYNC_ACTIVEHIGH  BitNONE
#define TCBD_PERI_TS_SYNC_ACTIVELOW   Bit6
#define TCBD_PERI_TS_ENPOL_ACTIVEHIGH BitNONE
#define TCBD_PERI_TS_ENPOL_ACTIVELOW  Bit5
#define TCBD_PERI_TS_STREAM_WAIT_ON   Bit4
#define TCBD_PERI_TS_BYTEMSB          Bit7
#define TCBD_PERI_TS_BITMSB           Bit6
#define TCBD_PERI_TS_ERR_POL          Bit1
#define TCBD_PERI_TS_ERR_SIG_ON       Bit0
#define TCBD_PERI_TS_ERR_SIG_OFF      BitNONE
#define TCBD_PERI_TEST0_START         Bit7
#define TCBD_PERI_TEST0_CIRCULAR_EN   Bit2
#define TCBD_PERI_TEST0_TESTMODE      Bit1
#define TCBD_PERI_TEST0_FIXMODE       Bit0

#define TCBD_MAIL_INIT                Bit6
#define TCBD_MAIL_HOSTMAILPOST        Bit5
#define TCBD_MAIL_OPACCEPTEN          Bit4

#define TCBD_I2CMST_INIT                   Bit7
#define TCBD_I2CMST_EN                     Bit2
#define TCBD_I2CMST_NORMALMODE             BitNONE
#define TCBD_I2CMST_AUTOMODE               Bit1
#define TCBD_I2CMST_SCL_CMOS               BitNONE
#define TCBD_I2CMST_SCL_OPENDRAIN          Bit0
#define TCBD_I2CMST_DEV_ADDR_WRITE         BitNONE
#define TCBD_I2CMST_DEV_ADDR_READ          Bit0
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_ADD  Bit7
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_INIT Bit6
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_CNT4 Bit4
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_CNT3 Bit3
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_CNT2 Bit2
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_CNT1 Bit1
#define TCBD_I2CMST_AUTOCONFIG_CMDQUE_CNT0 Bit0
#define TCBD_I2CMST_AUTOSTART              Bit7
#define TCBD_I2CMST_NORMALSTART            Bit4
#define TCBD_I2CMST_NORMALSTOP             Bit3
#define TCBD_I2CMST_NORMALREAD             Bit2
#define TCBD_I2CMST_NORMALWRITE            Bit1
#define TCBD_I2CMST_NORMALACK              Bit0
#define TCBD_I2CMST_STAT0_NORMAL_ACKIN     Bit7
#define TCBD_I2CMST_STAT0_NORMAL_DONE      Bit6
#define TCBD_I2CMST_STAT0_ARBIT_LOST       Bit5
#define TCBD_I2CMST_STAT0_SDA              Bit1
#define TCBD_I2CMST_STAT0_SCL              Bit0
#define TCBD_I2CMST_STAT1_AUTOERR          Bit7
#define TCBD_I2CMST_STAT1_AUTODONE         Bit6
#define TCBD_I2CMST_STAT1_ARBIT_LOST       Bit5
#define TCBD_I2CMST_STAT1_RXRFIFOCNT4      Bit4
#define TCBD_I2CMST_STAT1_RXRFIFOCNT3      Bit3
#define TCBD_I2CMST_STAT1_RXRFIFOCNT2      Bit2
#define TCBD_I2CMST_STAT1_RXRFIFOCNT1      Bit1
#define TCBD_I2CMST_STAT1_RXRFIFOCNT0      Bit0

#define TCBD_RF_MANAGE_ENABLE    Bit1
#define TCBD_RF_MANAGE_DISABLE   BitNONE
#define TCBD_RF_READ             BitNONE
#define TCBD_RF_WRITE            Bit0
#define TCBD_RF_ACTION           Bit0

#define TCBD_OBUFF_CONFIG_BUFF_D_EN       Bit7
#define TCBD_OBUFF_CONFIG_BUFF_C_EN       Bit6
#define TCBD_OBUFF_CONFIG_BUFF_B_EN       Bit5
#define TCBD_OBUFF_CONFIG_BUFF_A_EN       Bit4
#define TCBD_OBUFF_CONFIG_BUFF_D_CIRCULAR BitNONE
#define TCBD_OBUFF_CONFIG_BUFF_C_CIRCULAR BitNONE
#define TCBD_OBUFF_CONFIG_BUFF_B_CIRCULAR BitNONE
#define TCBD_OBUFF_CONFIG_BUFF_A_CIRCULAR BitNONE
#define TCBD_OBUFF_CONFIG_BUFF_D_FIFO     Bit3
#define TCBD_OBUFF_CONFIG_BUFF_C_FIFO     Bit2
#define TCBD_OBUFF_CONFIG_BUFF_B_FIFO     Bit1
#define TCBD_OBUFF_CONFIG_BUFF_A_FIFO     Bit0
#define TCBD_OBUFF_DBUFF_STATLATCH        Bit7
#define TCBD_OBUFF_CBUFF_STATLATCH        Bit6
#define TCBD_OBUFF_BBUFF_STATLATCH        Bit5
#define TCBD_OBUFF_ABUFF_STATLATCH        Bit4
#define TCBD_OBUFF_BUFF_D_INIT            Bit3
#define TCBD_OBUFF_BUFF_C_INIT            Bit2
#define TCBD_OBUFF_BUFF_B_INIT            Bit1
#define TCBD_OBUFF_BUFF_A_INIT            Bit0

/**
 * @defgroup StreamDataConfig
 * You can mask unused buffer by @ref TcbdInitStreamDataConfig
 */
/** @{*/
#define STREAM_DATA_ENABLE  Bit7
#define STREAM_HEADER_ON    Bit6
#define STREAM_MASK_BUFFERD Bit3
#define STREAM_MASK_BUFFERC Bit2
#define STREAM_MASK_BUFFERB Bit1
#define STREAM_MASK_BUFFERA Bit0

#define STREAM_BUFFER_ALL (\
    STREAM_DATA_ENABLE  |  \
    STREAM_HEADER_ON    |  \
    STREAM_MASK_BUFFERD |  \
    STREAM_MASK_BUFFERC |  \
    STREAM_MASK_BUFFERB |  \
    STREAM_MASK_BUFFERA)
/**@}*/

#define STREAM_CMD_FIFO_MSB     Bit0
#define STREAM_CMD_FIFO_ENABLE  Bit1
#define STREAM_CMD_FIFO_INIT    Bit4
#define STREAM_LATCH_TOTAL_SIZE Bit5

/**
 * @defgroup TypesOfStream
 * Types of stream. 
 * You can change the type of stream by @ref TcbdChangeStreamType
 */
/** @{*/
#define STREAM_TYPE_GARBAGE    Bit7
#define STREAM_TYPE_DAB_PLUS   Bit6
#define STREAM_TYPE_EPM        Bit5
#define STREAM_TYPE_DMB        Bit4
#define STREAM_TYPE_DAB        Bit3
#define STREAM_TYPE_FIC        Bit2
#define STREAM_TYPE_FIB_FILTER Bit1
#define STREAM_TYPE_STATUS     Bit0

#define STREAM_TYPE_ALL      \
    (STREAM_TYPE_DAB_PLUS  |\
    STREAM_TYPE_EPM        |\
    STREAM_TYPE_DMB        |\
    STREAM_TYPE_DAB        |\
    STREAM_TYPE_FIC        |\
    STREAM_TYPE_FIB_FILTER |\
    STREAM_TYPE_STATUS)
/**@}*/

#define IRQ_ERR_MAILBOX Bit0
#define IRQ_ERR_I2C     Bit1
#define IRQ_ERR_DATA    Bit3
#define IRQ_ERR_BUFFERA Bit4
#define IRQ_ERR_BUFFERB Bit5
#define IRQ_ERR_BUFFERC Bit6
#define IRQ_ERR_BUFFERD Bit7

#define MB_CMD_READ	 0
#define MB_CMD_WRITE 1

#define MB_ERR_OK		0x00
#define MB_ERR_CMD		0x01
#define MB_ERR_PARA		0x02

#define MBCMD_SYS           (0x00<<11)
#define MBPARA_SYS_WARMBOOT (MBCMD_SYS | 0x00)
#define MBPARA_SYS_START    (MBCMD_SYS | 0x01)
#define MBPARA_SYS_SYNC     (MBCMD_SYS | 0x02)

#define MBPARA_SYS_DAB_STREAM_SET    (MBCMD_SYS | 0x0D)
#define MBPARA_SYS_DAB_STREAM_ON     (MBCMD_SYS | 0x0E)
#define MBPARA_SYS_DAB_RECONFIG_CLR  (MBCMD_SYS | 0x12)

#define MBPARA_SYS_DAB_MCI_UPDATE    (MBCMD_SYS | 0x0c)
#define MBPARA_SYS_DAB_DP_FLT        (MBCMD_SYS | 0x0f)
#define MBPARA_SYS_DAB_RESYNC_PARAM  (MBCMD_SYS | 0x10)
#define MBPARA_SYS_DAB_RESYNC_RESULT (MBCMD_SYS | 0x11)
#define MBPARA_SYS_DAB_RF_FREQ_NO    (MBCMD_SYS | 0x20)
#define MBPARA_SYS_DAB_RF_FREQ       (MBCMD_SYS | 0x21)
#define MBPARA_SYS_DAB_ASM_VER       (MBCMD_SYS | 0xff)

#define MBCMD_AGC_DAB      (0x01<<11)
#define MBCMD_AGC_DAB_CFG  (MBCMD_AGC_DAB | 0)
#define MBCMD_AGC_DAB_GAIN (MBCMD_AGC_DAB | 1)
#define MBCMD_AGC_DAB_JAM  (MBCMD_AGC_DAB | 2)
#define MBCMD_AGC_DAB_3    (MBCMD_AGC_DAB | 3)
#define MBCMD_AGC_DAB_4    (MBCMD_AGC_DAB | 4)
#define MBCMD_AGC_DAB_5    (MBCMD_AGC_DAB | 5)
#define MBCMD_AGC_DAB_6    (MBCMD_AGC_DAB | 6)
#define MBCMD_AGC_DAB_7    (MBCMD_AGC_DAB | 7)
#define MBCMD_AGC_DAB_8    (MBCMD_AGC_DAB | 8)
#define MBCMD_AGC_DAB_9    (MBCMD_AGC_DAB | 9)
#define MBCMD_AGC_DAB_A    (MBCMD_AGC_DAB | 10)
#define MBCMD_AGC_DAB_B    (MBCMD_AGC_DAB | 11)
#define MBCMD_AGC_DAB_C    (MBCMD_AGC_DAB | 12)
#define MBCMD_AGC_DAB_D    (MBCMD_AGC_DAB | 13)
#define MBCMD_AGC_DAB_E    (MBCMD_AGC_DAB | 14)
#define MBCMD_AGC_DAB_F    (MBCMD_AGC_DAB | 15)

#define MBCMD_FP_DAB       (0x02 << 11)
#define MBCMD_FP_DAB_CFG   (MBCMD_FP_DAB | 0)
#define MBCMD_FP_DAB_IIR   (MBCMD_FP_DAB | 1)

#define MBCMD_CTO_DAB        (0x04<<11)
#define MBCMD_CTO_DAB_PARAM  (MBCMD_CTO_DAB | 0x00)
#define MBCMD_CTO_DAB_RESULT (MBCMD_CTO_DAB | 0x01)

#define MBCMD_CFO_DAB        (0x06<<11)
#define MBCMD_CFO_DAB_PARAM  (MBCMD_CFO_DAB | 0x00)
#define MBCMD_CFO_DAB_RESULT (MBCMD_CFO_DAB | 0x01)

#define MBCMD_FFO_DAB        (0x07<<11)
#define MBCMD_FTO_DAB        (0x0A<<11)
                             
#define MBCMD_SFE_DAB        (0x0B<<11)
#define MBCMD_SFE_DAB_PARAM  (MBCMD_SFE_DAB | 0x00)
#define MBCMD_SFE_DAB_RESULT (MBCMD_SFE_DAB | 0x01)

#define MBCMD_CIR_DAB        (0x0C<<11)
#define MBCMD_CIR_DAB_PARAM  (MBCMD_CIR_DAB | 0x00)
#define MBCMD_CIR_DAB_RESULT (MBCMD_CIR_DAB | 0x01)

#define MBCMD_DP_DAB         (0x10<<11)
#define MBCMD_DP_DAB_RESULT  (MBCMD_DP_DAB | 0x00)
#define MBCMD_DP_DAB_CFG1    (MBCMD_DP_DAB | 0x01)
#define MBCMD_DP_DAB_CFG2    (MBCMD_DP_DAB | 0x02)

#define MBCMD_DEBUG_DAB      (0x1F<<11)

#define MBPARA_SYS_VERSION   (MBCMD_SYS | 0xFF)

// Freqset
#define MBPARA_SYS_NUM_FREQ   (MBCMD_SYS | 0x20)
#define MBPARA_SYS_FREQ_0_6   (MBCMD_SYS | 0x21)
#define MBPARA_SYS_FREQ_7_13  (MBCMD_SYS | 0x22)
#define MBPARA_SYS_FREQ_14_20 (MBCMD_SYS | 0x23)
#define MBPARA_SYS_FREQ_21_27 (MBCMD_SYS | 0x24)

#define MBCMD_SEL_CH_INFO         (0x13<<11)
#define MBPARA_SEL_CH_INFO_PRAM   (MBCMD_SEL_CH_INFO | 0x00)
#define MBPARA_SEL_CH_INFO_RESULT (MBCMD_SEL_CH_INFO | 0x01)

#define MBCMD_VARI_OSC        (0x15<<11)
#define MBCMD_VARI_OSC_SPUR   (MBCMD_VARI_OSC | 0x00)
#define MBCMD_VARI_OSC_RCSTEP (MBCMD_VARI_OSC | 0x01)
#define MBCMD_VARI_OSC_RFPLL  (MBCMD_VARI_OSC | 0x02)

#ifndef BITSET
#define BITSET(X, MASK)          ( (X)|=(unsigned int)(MASK) )
#endif
#ifndef BITSCLR
#define BITSCLR(X, SMASK, CMASK) ( (X)=((((unsigned int)(X)) | ((unsigned int)(SMASK))) & ~((unsigned int)(CMASK))) )
#endif
#ifndef BITCSET
#define BITCSET(X, CMASK, SMASK) ( (X)=((((unsigned int)(X)) & ~((unsigned int)(CMASK))) | ((unsigned int)(SMASK))) )
#endif
#ifndef BITCLR
#define BITCLR(X, MASK)          ( (X)&=~((unsigned int)(MASK)) )
#endif                           
#ifndef BITXOR                   
#define BITXOR(X, MASK)          ( (X)^=(unsigned int)(MASK) )
#endif                           
#ifndef ISZERO                   
#define ISZERO(X, MASK)          (  !(((unsigned int)(X)) & ((unsigned int)(MASK))) )
#endif                           
                                 
#ifndef ISSET                    
#define ISSET(X, MASK)           ( (unsigned long)(X) & ((unsigned long)(MASK)) )
#endif

#endif //__TCBD_DRV_REGISTER_H__
