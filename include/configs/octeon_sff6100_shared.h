#ifndef __OCTEON_SFF6100_SHARED_H__
#define __OCTEON_SFF6100_SHARED_H__

#define SG572568FH8SZRN1_1600_spd      \
0x92,0x11,0x0b,0x06,0x03,0x19,0x00,0x01,0x0b,0x11,0x01,0x08,0x0a,0x00,0xfe,0x00, \
0x69,0x78,0x69,0x30,0x69,0x11,0x18,0x81,0x00,0x05,0x3c,0x3c,0x00,0xf0,0x83,0x05, \
0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x1f,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00, \
0x00,0x00,0x00,0x00,0x00,0x04,0x11,0x1f,0x00,0x00,0x00,0x00,0x00,0x00,0x99,0xc0, \
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x94,0x01,0x11,0x39,0x05,0x88,0x04,0x03, \
0xab,0xe6

#define USE_COMPILED_IN_SPD 0
#if USE_COMPILED_IN_SPD
#define OCTEON_SFF6100_DRAM_SOCKET_CONFIGURATION0 \
    {{0x00, 0x00}, {SFF6100_spd_values, NULL}},{{0x00, 0x0}, {NULL, NULL}}
#else
#define OCTEON_SFF6100_DRAM_SOCKET_CONFIGURATION0 \
    {{0x50, 0x0}, {NULL, NULL}}
#endif



#define OCTEON_SFF6100_BOARD_EEPROM_TWSI_ADDR        (0x54)

/*
** Local copy of these parameters to allow for customization for this
** board design.  The generic version resides in lib_octeon_shared.h.
** */

/* LMC0_MODEREG_PARAMS1 */
#define OCTEON_SFF6100_MODEREG_PARAMS1_1RANK_1SLOT      \
    { .cn61xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = 0,                    \
                  .dic_00       = 0,                    \
                  .rtt_nom_00   = rttnom_40ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = 0,                    \
                  .rtt_nom_01   = 0,                    \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = 0,                    \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = 0,                    \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = 0,                    \
        }                                               \
    }

#define OCTEON_SFF6100_MODEREG_PARAMS1_2RANK_1SLOT      \
    { .cn61xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = 0,                    \
                  .dic_00       = 1,                    \
                  .rtt_nom_00   = rttnom_40ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = 0,                    \
                  .dic_01       = 1,                    \
                  .rtt_nom_01   = 0,                    \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = 0,                    \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = 0,                    \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = 0,                    \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = 0,                    \
        }                                               \
    }

#define OCTEON_SFF6100_MODEREG_PARAMS1_4RANK_1SLOT      \
    { .cn61xx = { .pasr_00      = 0,                    \
                  .asr_00       = 0,                    \
                  .srt_00       = 0,                    \
                  .rtt_wr_00    = rttwr_120ohm,         \
                  .dic_00       = 0,                    \
                  .rtt_nom_00   = rttnom_40ohm,         \
                  .pasr_01      = 0,                    \
                  .asr_01       = 0,                    \
                  .srt_01       = 0,                    \
                  .rtt_wr_01    = rttwr_120ohm,         \
                  .dic_01       = 0,                    \
                  .rtt_nom_01   = rttnom_none,          \
                  .pasr_10      = 0,                    \
                  .asr_10       = 0,                    \
                  .srt_10       = 0,                    \
                  .rtt_wr_10    = rttwr_120ohm,         \
                  .dic_10       = 0,                    \
                  .rtt_nom_10   = rttnom_40ohm,         \
                  .pasr_11      = 0,                    \
                  .asr_11       = 0,                    \
                  .srt_11       = 0,                    \
                  .rtt_wr_11    = rttwr_120ohm,         \
                  .dic_11       = 0,                    \
                  .rtt_nom_11   = rttnom_none,          \
        }                                               \
    }


#define OCTEON_SFF6100_CN61XX_DRAM_ODT_1RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1             reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ==========================================  ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x00000001ULL, OCTEON_SFF6100_MODEREG_PARAMS1_1RANK_1SLOT, {.u64=0x0000},     3,     0x00000000ULL,  0  }

#define OCTEON_SFF6100_CN61XX_DRAM_ODT_2RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1             reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ==========================================  ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x00000101ULL, OCTEON_SFF6100_MODEREG_PARAMS1_2RANK_1SLOT, {.u64=0x0000},     3,     0x00000000ULL,    0  }

#define OCTEON_SFF6100_CN61XX_DRAM_ODT_4RANK_CONFIGURATION \
    /* DIMMS   reserved  WODT_MASK                LMCX_MODEREG_PARAMS1             reserved       RODT_CTL    RODT_MASK    reserved */ \
    /* =====   ======== ============== ==========================================  ============== ========= ============== ======== */ \
    /*   1 */ {   0,    0x01030203ULL, OCTEON_SFF6100_MODEREG_PARAMS1_4RANK_1SLOT, {.u64=0x0000},     3,     0x01010202ULL,    0  }


/* Construct a static initializer for the ddr_configuration_t variable that holds
** (almost) all of the information required for DDR initialization.
*/

/*
  The parameters below make up the custom_lmc_config data structure.
  This structure is used to customize the way that the LMC DRAM
  Controller is configured for a particular board design.

  Refer to the file lib_octeon_board_table_entry.h for a description
  of the custom board settings.  It is usually kept in the following
  location... arch/mips/include/asm/arch-octeon/

*/

#define OCTEON_SFF6100_DDR_CONFIGURATION                                \
    /* Interface 0 */                                                   \
    {                                                                   \
        .custom_lmc_config = {                                          \
            .min_rtt_nom_idx	= 2,                                    \
            .max_rtt_nom_idx	= 5,                                    \
            .min_rodt_ctl	= 1,                                    \
            .max_rodt_ctl	= 4,                                    \
            .dqx_ctl		= 4,                                    \
            .ck_ctl		= 4,                                    \
            .cmd_ctl		= 4,                                    \
            .min_cas_latency	= 7,                                    \
            .offset_en 		= 0,                                    \
            .offset_udimm	= 2,                                    \
            .offset_rdimm	= 1,                                    \
            .ddr_rtt_nom_auto	= 0,                                    \
            .ddr_rodt_ctl_auto	= 0,                                    \
            .rlevel_compute 	= 1,                                    \
            .ddr2t_udimm 	= 1,                                    \
            .ddr2t_rdimm 	= 1,                                    \
            .maximum_adjacent_rlevel_delay_increment = 2,		\
            .fprch2		= 1,                                    \
            .parity		= 0,                                    \
            .mode32b		= 0},                                   \
            .dimm_config_table = {                                      \
            OCTEON_SFF6100_DRAM_SOCKET_CONFIGURATION0,                  \
            DIMM_CONFIG_TERMINATOR},                                    \
                 .unbuffered = {                                        \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                      .registered = {                                   \
            .ddr_board_delay = 0,                                       \
            .lmc_delay_clk = 0,                                         \
            .lmc_delay_cmd = 0,                                         \
            .lmc_delay_dq = 0},                                         \
                           .odt_1rank_config = {                        \
            OCTEON_SFF6100_CN61XX_DRAM_ODT_1RANK_CONFIGURATION},        \
                                .odt_2rank_config = {                   \
            OCTEON_SFF6100_CN61XX_DRAM_ODT_2RANK_CONFIGURATION},        \
                                     .odt_4rank_config = {              \
            OCTEON_SFF6100_CN61XX_DRAM_ODT_4RANK_CONFIGURATION}         \
    }

#endif   /* __OCTEON_SFF6100_SHARED_H__ */
