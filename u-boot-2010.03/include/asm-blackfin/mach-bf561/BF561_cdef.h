/* DO NOT EDIT THIS FILE
 * Automatically generated by generate-cdef-headers.xsl
 * DO NOT EDIT THIS FILE
 */

#ifndef __BFIN_CDEF_ADSP_BF561_proc__
#define __BFIN_CDEF_ADSP_BF561_proc__

#include "../mach-common/ADSP-EDN-core_cdef.h"

#include "../mach-common/ADSP-EDN-DUAL-CORE-extended_cdef.h"

#define pSRAM_BASE_ADDR                ((uint32_t volatile *)SRAM_BASE_ADDR)
#define bfin_read_SRAM_BASE_ADDR()     bfin_read32(SRAM_BASE_ADDR)
#define bfin_write_SRAM_BASE_ADDR(val) bfin_write32(SRAM_BASE_ADDR, val)
#define pDMEM_CONTROL                  ((uint32_t volatile *)DMEM_CONTROL)
#define bfin_read_DMEM_CONTROL()       bfin_read32(DMEM_CONTROL)
#define bfin_write_DMEM_CONTROL(val)   bfin_write32(DMEM_CONTROL, val)
#define pDCPLB_STATUS                  ((uint32_t volatile *)DCPLB_STATUS)
#define bfin_read_DCPLB_STATUS()       bfin_read32(DCPLB_STATUS)
#define bfin_write_DCPLB_STATUS(val)   bfin_write32(DCPLB_STATUS, val)
#define pDCPLB_FAULT_ADDR              ((void * volatile *)DCPLB_FAULT_ADDR)
#define bfin_read_DCPLB_FAULT_ADDR()   bfin_readPTR(DCPLB_FAULT_ADDR)
#define bfin_write_DCPLB_FAULT_ADDR(val) bfin_writePTR(DCPLB_FAULT_ADDR, val)
#define pDCPLB_ADDR0                   ((uint32_t volatile *)DCPLB_ADDR0)
#define bfin_read_DCPLB_ADDR0()        bfin_read32(DCPLB_ADDR0)
#define bfin_write_DCPLB_ADDR0(val)    bfin_write32(DCPLB_ADDR0, val)
#define pDCPLB_ADDR1                   ((uint32_t volatile *)DCPLB_ADDR1)
#define bfin_read_DCPLB_ADDR1()        bfin_read32(DCPLB_ADDR1)
#define bfin_write_DCPLB_ADDR1(val)    bfin_write32(DCPLB_ADDR1, val)
#define pDCPLB_ADDR2                   ((uint32_t volatile *)DCPLB_ADDR2)
#define bfin_read_DCPLB_ADDR2()        bfin_read32(DCPLB_ADDR2)
#define bfin_write_DCPLB_ADDR2(val)    bfin_write32(DCPLB_ADDR2, val)
#define pDCPLB_ADDR3                   ((uint32_t volatile *)DCPLB_ADDR3)
#define bfin_read_DCPLB_ADDR3()        bfin_read32(DCPLB_ADDR3)
#define bfin_write_DCPLB_ADDR3(val)    bfin_write32(DCPLB_ADDR3, val)
#define pDCPLB_ADDR4                   ((uint32_t volatile *)DCPLB_ADDR4)
#define bfin_read_DCPLB_ADDR4()        bfin_read32(DCPLB_ADDR4)
#define bfin_write_DCPLB_ADDR4(val)    bfin_write32(DCPLB_ADDR4, val)
#define pDCPLB_ADDR5                   ((uint32_t volatile *)DCPLB_ADDR5)
#define bfin_read_DCPLB_ADDR5()        bfin_read32(DCPLB_ADDR5)
#define bfin_write_DCPLB_ADDR5(val)    bfin_write32(DCPLB_ADDR5, val)
#define pDCPLB_ADDR6                   ((uint32_t volatile *)DCPLB_ADDR6)
#define bfin_read_DCPLB_ADDR6()        bfin_read32(DCPLB_ADDR6)
#define bfin_write_DCPLB_ADDR6(val)    bfin_write32(DCPLB_ADDR6, val)
#define pDCPLB_ADDR7                   ((uint32_t volatile *)DCPLB_ADDR7)
#define bfin_read_DCPLB_ADDR7()        bfin_read32(DCPLB_ADDR7)
#define bfin_write_DCPLB_ADDR7(val)    bfin_write32(DCPLB_ADDR7, val)
#define pDCPLB_ADDR8                   ((uint32_t volatile *)DCPLB_ADDR8)
#define bfin_read_DCPLB_ADDR8()        bfin_read32(DCPLB_ADDR8)
#define bfin_write_DCPLB_ADDR8(val)    bfin_write32(DCPLB_ADDR8, val)
#define pDCPLB_ADDR9                   ((uint32_t volatile *)DCPLB_ADDR9)
#define bfin_read_DCPLB_ADDR9()        bfin_read32(DCPLB_ADDR9)
#define bfin_write_DCPLB_ADDR9(val)    bfin_write32(DCPLB_ADDR9, val)
#define pDCPLB_ADDR10                  ((uint32_t volatile *)DCPLB_ADDR10)
#define bfin_read_DCPLB_ADDR10()       bfin_read32(DCPLB_ADDR10)
#define bfin_write_DCPLB_ADDR10(val)   bfin_write32(DCPLB_ADDR10, val)
#define pDCPLB_ADDR11                  ((uint32_t volatile *)DCPLB_ADDR11)
#define bfin_read_DCPLB_ADDR11()       bfin_read32(DCPLB_ADDR11)
#define bfin_write_DCPLB_ADDR11(val)   bfin_write32(DCPLB_ADDR11, val)
#define pDCPLB_ADDR12                  ((uint32_t volatile *)DCPLB_ADDR12)
#define bfin_read_DCPLB_ADDR12()       bfin_read32(DCPLB_ADDR12)
#define bfin_write_DCPLB_ADDR12(val)   bfin_write32(DCPLB_ADDR12, val)
#define pDCPLB_ADDR13                  ((uint32_t volatile *)DCPLB_ADDR13)
#define bfin_read_DCPLB_ADDR13()       bfin_read32(DCPLB_ADDR13)
#define bfin_write_DCPLB_ADDR13(val)   bfin_write32(DCPLB_ADDR13, val)
#define pDCPLB_ADDR14                  ((uint32_t volatile *)DCPLB_ADDR14)
#define bfin_read_DCPLB_ADDR14()       bfin_read32(DCPLB_ADDR14)
#define bfin_write_DCPLB_ADDR14(val)   bfin_write32(DCPLB_ADDR14, val)
#define pDCPLB_ADDR15                  ((uint32_t volatile *)DCPLB_ADDR15)
#define bfin_read_DCPLB_ADDR15()       bfin_read32(DCPLB_ADDR15)
#define bfin_write_DCPLB_ADDR15(val)   bfin_write32(DCPLB_ADDR15, val)
#define pDCPLB_DATA0                   ((uint32_t volatile *)DCPLB_DATA0)
#define bfin_read_DCPLB_DATA0()        bfin_read32(DCPLB_DATA0)
#define bfin_write_DCPLB_DATA0(val)    bfin_write32(DCPLB_DATA0, val)
#define pDCPLB_DATA1                   ((uint32_t volatile *)DCPLB_DATA1)
#define bfin_read_DCPLB_DATA1()        bfin_read32(DCPLB_DATA1)
#define bfin_write_DCPLB_DATA1(val)    bfin_write32(DCPLB_DATA1, val)
#define pDCPLB_DATA2                   ((uint32_t volatile *)DCPLB_DATA2)
#define bfin_read_DCPLB_DATA2()        bfin_read32(DCPLB_DATA2)
#define bfin_write_DCPLB_DATA2(val)    bfin_write32(DCPLB_DATA2, val)
#define pDCPLB_DATA3                   ((uint32_t volatile *)DCPLB_DATA3)
#define bfin_read_DCPLB_DATA3()        bfin_read32(DCPLB_DATA3)
#define bfin_write_DCPLB_DATA3(val)    bfin_write32(DCPLB_DATA3, val)
#define pDCPLB_DATA4                   ((uint32_t volatile *)DCPLB_DATA4)
#define bfin_read_DCPLB_DATA4()        bfin_read32(DCPLB_DATA4)
#define bfin_write_DCPLB_DATA4(val)    bfin_write32(DCPLB_DATA4, val)
#define pDCPLB_DATA5                   ((uint32_t volatile *)DCPLB_DATA5)
#define bfin_read_DCPLB_DATA5()        bfin_read32(DCPLB_DATA5)
#define bfin_write_DCPLB_DATA5(val)    bfin_write32(DCPLB_DATA5, val)
#define pDCPLB_DATA6                   ((uint32_t volatile *)DCPLB_DATA6)
#define bfin_read_DCPLB_DATA6()        bfin_read32(DCPLB_DATA6)
#define bfin_write_DCPLB_DATA6(val)    bfin_write32(DCPLB_DATA6, val)
#define pDCPLB_DATA7                   ((uint32_t volatile *)DCPLB_DATA7)
#define bfin_read_DCPLB_DATA7()        bfin_read32(DCPLB_DATA7)
#define bfin_write_DCPLB_DATA7(val)    bfin_write32(DCPLB_DATA7, val)
#define pDCPLB_DATA8                   ((uint32_t volatile *)DCPLB_DATA8)
#define bfin_read_DCPLB_DATA8()        bfin_read32(DCPLB_DATA8)
#define bfin_write_DCPLB_DATA8(val)    bfin_write32(DCPLB_DATA8, val)
#define pDCPLB_DATA9                   ((uint32_t volatile *)DCPLB_DATA9)
#define bfin_read_DCPLB_DATA9()        bfin_read32(DCPLB_DATA9)
#define bfin_write_DCPLB_DATA9(val)    bfin_write32(DCPLB_DATA9, val)
#define pDCPLB_DATA10                  ((uint32_t volatile *)DCPLB_DATA10)
#define bfin_read_DCPLB_DATA10()       bfin_read32(DCPLB_DATA10)
#define bfin_write_DCPLB_DATA10(val)   bfin_write32(DCPLB_DATA10, val)
#define pDCPLB_DATA11                  ((uint32_t volatile *)DCPLB_DATA11)
#define bfin_read_DCPLB_DATA11()       bfin_read32(DCPLB_DATA11)
#define bfin_write_DCPLB_DATA11(val)   bfin_write32(DCPLB_DATA11, val)
#define pDCPLB_DATA12                  ((uint32_t volatile *)DCPLB_DATA12)
#define bfin_read_DCPLB_DATA12()       bfin_read32(DCPLB_DATA12)
#define bfin_write_DCPLB_DATA12(val)   bfin_write32(DCPLB_DATA12, val)
#define pDCPLB_DATA13                  ((uint32_t volatile *)DCPLB_DATA13)
#define bfin_read_DCPLB_DATA13()       bfin_read32(DCPLB_DATA13)
#define bfin_write_DCPLB_DATA13(val)   bfin_write32(DCPLB_DATA13, val)
#define pDCPLB_DATA14                  ((uint32_t volatile *)DCPLB_DATA14)
#define bfin_read_DCPLB_DATA14()       bfin_read32(DCPLB_DATA14)
#define bfin_write_DCPLB_DATA14(val)   bfin_write32(DCPLB_DATA14, val)
#define pDCPLB_DATA15                  ((uint32_t volatile *)DCPLB_DATA15)
#define bfin_read_DCPLB_DATA15()       bfin_read32(DCPLB_DATA15)
#define bfin_write_DCPLB_DATA15(val)   bfin_write32(DCPLB_DATA15, val)
#define pDTEST_COMMAND                 ((uint32_t volatile *)DTEST_COMMAND)
#define bfin_read_DTEST_COMMAND()      bfin_read32(DTEST_COMMAND)
#define bfin_write_DTEST_COMMAND(val)  bfin_write32(DTEST_COMMAND, val)
#define pDTEST_DATA0                   ((uint32_t volatile *)DTEST_DATA0)
#define bfin_read_DTEST_DATA0()        bfin_read32(DTEST_DATA0)
#define bfin_write_DTEST_DATA0(val)    bfin_write32(DTEST_DATA0, val)
#define pDTEST_DATA1                   ((uint32_t volatile *)DTEST_DATA1)
#define bfin_read_DTEST_DATA1()        bfin_read32(DTEST_DATA1)
#define bfin_write_DTEST_DATA1(val)    bfin_write32(DTEST_DATA1, val)
#define pIMEM_CONTROL                  ((uint32_t volatile *)IMEM_CONTROL)
#define bfin_read_IMEM_CONTROL()       bfin_read32(IMEM_CONTROL)
#define bfin_write_IMEM_CONTROL(val)   bfin_write32(IMEM_CONTROL, val)
#define pICPLB_STATUS                  ((uint32_t volatile *)ICPLB_STATUS)
#define bfin_read_ICPLB_STATUS()       bfin_read32(ICPLB_STATUS)
#define bfin_write_ICPLB_STATUS(val)   bfin_write32(ICPLB_STATUS, val)
#define pICPLB_FAULT_ADDR              ((uint32_t volatile *)ICPLB_FAULT_ADDR)
#define bfin_read_ICPLB_FAULT_ADDR()   bfin_read32(ICPLB_FAULT_ADDR)
#define bfin_write_ICPLB_FAULT_ADDR(val) bfin_write32(ICPLB_FAULT_ADDR, val)
#define pICPLB_ADDR0                   ((uint32_t volatile *)ICPLB_ADDR0)
#define bfin_read_ICPLB_ADDR0()        bfin_read32(ICPLB_ADDR0)
#define bfin_write_ICPLB_ADDR0(val)    bfin_write32(ICPLB_ADDR0, val)
#define pICPLB_ADDR1                   ((uint32_t volatile *)ICPLB_ADDR1)
#define bfin_read_ICPLB_ADDR1()        bfin_read32(ICPLB_ADDR1)
#define bfin_write_ICPLB_ADDR1(val)    bfin_write32(ICPLB_ADDR1, val)
#define pICPLB_ADDR2                   ((uint32_t volatile *)ICPLB_ADDR2)
#define bfin_read_ICPLB_ADDR2()        bfin_read32(ICPLB_ADDR2)
#define bfin_write_ICPLB_ADDR2(val)    bfin_write32(ICPLB_ADDR2, val)
#define pICPLB_ADDR3                   ((uint32_t volatile *)ICPLB_ADDR3)
#define bfin_read_ICPLB_ADDR3()        bfin_read32(ICPLB_ADDR3)
#define bfin_write_ICPLB_ADDR3(val)    bfin_write32(ICPLB_ADDR3, val)
#define pICPLB_ADDR4                   ((uint32_t volatile *)ICPLB_ADDR4)
#define bfin_read_ICPLB_ADDR4()        bfin_read32(ICPLB_ADDR4)
#define bfin_write_ICPLB_ADDR4(val)    bfin_write32(ICPLB_ADDR4, val)
#define pICPLB_ADDR5                   ((uint32_t volatile *)ICPLB_ADDR5)
#define bfin_read_ICPLB_ADDR5()        bfin_read32(ICPLB_ADDR5)
#define bfin_write_ICPLB_ADDR5(val)    bfin_write32(ICPLB_ADDR5, val)
#define pICPLB_ADDR6                   ((uint32_t volatile *)ICPLB_ADDR6)
#define bfin_read_ICPLB_ADDR6()        bfin_read32(ICPLB_ADDR6)
#define bfin_write_ICPLB_ADDR6(val)    bfin_write32(ICPLB_ADDR6, val)
#define pICPLB_ADDR7                   ((uint32_t volatile *)ICPLB_ADDR7)
#define bfin_read_ICPLB_ADDR7()        bfin_read32(ICPLB_ADDR7)
#define bfin_write_ICPLB_ADDR7(val)    bfin_write32(ICPLB_ADDR7, val)
#define pICPLB_ADDR8                   ((uint32_t volatile *)ICPLB_ADDR8)
#define bfin_read_ICPLB_ADDR8()        bfin_read32(ICPLB_ADDR8)
#define bfin_write_ICPLB_ADDR8(val)    bfin_write32(ICPLB_ADDR8, val)
#define pICPLB_ADDR9                   ((uint32_t volatile *)ICPLB_ADDR9)
#define bfin_read_ICPLB_ADDR9()        bfin_read32(ICPLB_ADDR9)
#define bfin_write_ICPLB_ADDR9(val)    bfin_write32(ICPLB_ADDR9, val)
#define pICPLB_ADDR10                  ((uint32_t volatile *)ICPLB_ADDR10)
#define bfin_read_ICPLB_ADDR10()       bfin_read32(ICPLB_ADDR10)
#define bfin_write_ICPLB_ADDR10(val)   bfin_write32(ICPLB_ADDR10, val)
#define pICPLB_ADDR11                  ((uint32_t volatile *)ICPLB_ADDR11)
#define bfin_read_ICPLB_ADDR11()       bfin_read32(ICPLB_ADDR11)
#define bfin_write_ICPLB_ADDR11(val)   bfin_write32(ICPLB_ADDR11, val)
#define pICPLB_ADDR12                  ((uint32_t volatile *)ICPLB_ADDR12)
#define bfin_read_ICPLB_ADDR12()       bfin_read32(ICPLB_ADDR12)
#define bfin_write_ICPLB_ADDR12(val)   bfin_write32(ICPLB_ADDR12, val)
#define pICPLB_ADDR13                  ((uint32_t volatile *)ICPLB_ADDR13)
#define bfin_read_ICPLB_ADDR13()       bfin_read32(ICPLB_ADDR13)
#define bfin_write_ICPLB_ADDR13(val)   bfin_write32(ICPLB_ADDR13, val)
#define pICPLB_ADDR14                  ((uint32_t volatile *)ICPLB_ADDR14)
#define bfin_read_ICPLB_ADDR14()       bfin_read32(ICPLB_ADDR14)
#define bfin_write_ICPLB_ADDR14(val)   bfin_write32(ICPLB_ADDR14, val)
#define pICPLB_ADDR15                  ((uint32_t volatile *)ICPLB_ADDR15)
#define bfin_read_ICPLB_ADDR15()       bfin_read32(ICPLB_ADDR15)
#define bfin_write_ICPLB_ADDR15(val)   bfin_write32(ICPLB_ADDR15, val)
#define pICPLB_DATA0                   ((uint32_t volatile *)ICPLB_DATA0)
#define bfin_read_ICPLB_DATA0()        bfin_read32(ICPLB_DATA0)
#define bfin_write_ICPLB_DATA0(val)    bfin_write32(ICPLB_DATA0, val)
#define pICPLB_DATA1                   ((uint32_t volatile *)ICPLB_DATA1)
#define bfin_read_ICPLB_DATA1()        bfin_read32(ICPLB_DATA1)
#define bfin_write_ICPLB_DATA1(val)    bfin_write32(ICPLB_DATA1, val)
#define pICPLB_DATA2                   ((uint32_t volatile *)ICPLB_DATA2)
#define bfin_read_ICPLB_DATA2()        bfin_read32(ICPLB_DATA2)
#define bfin_write_ICPLB_DATA2(val)    bfin_write32(ICPLB_DATA2, val)
#define pICPLB_DATA3                   ((uint32_t volatile *)ICPLB_DATA3)
#define bfin_read_ICPLB_DATA3()        bfin_read32(ICPLB_DATA3)
#define bfin_write_ICPLB_DATA3(val)    bfin_write32(ICPLB_DATA3, val)
#define pICPLB_DATA4                   ((uint32_t volatile *)ICPLB_DATA4)
#define bfin_read_ICPLB_DATA4()        bfin_read32(ICPLB_DATA4)
#define bfin_write_ICPLB_DATA4(val)    bfin_write32(ICPLB_DATA4, val)
#define pICPLB_DATA5                   ((uint32_t volatile *)ICPLB_DATA5)
#define bfin_read_ICPLB_DATA5()        bfin_read32(ICPLB_DATA5)
#define bfin_write_ICPLB_DATA5(val)    bfin_write32(ICPLB_DATA5, val)
#define pICPLB_DATA6                   ((uint32_t volatile *)ICPLB_DATA6)
#define bfin_read_ICPLB_DATA6()        bfin_read32(ICPLB_DATA6)
#define bfin_write_ICPLB_DATA6(val)    bfin_write32(ICPLB_DATA6, val)
#define pICPLB_DATA7                   ((uint32_t volatile *)ICPLB_DATA7)
#define bfin_read_ICPLB_DATA7()        bfin_read32(ICPLB_DATA7)
#define bfin_write_ICPLB_DATA7(val)    bfin_write32(ICPLB_DATA7, val)
#define pICPLB_DATA8                   ((uint32_t volatile *)ICPLB_DATA8)
#define bfin_read_ICPLB_DATA8()        bfin_read32(ICPLB_DATA8)
#define bfin_write_ICPLB_DATA8(val)    bfin_write32(ICPLB_DATA8, val)
#define pICPLB_DATA9                   ((uint32_t volatile *)ICPLB_DATA9)
#define bfin_read_ICPLB_DATA9()        bfin_read32(ICPLB_DATA9)
#define bfin_write_ICPLB_DATA9(val)    bfin_write32(ICPLB_DATA9, val)
#define pICPLB_DATA10                  ((uint32_t volatile *)ICPLB_DATA10)
#define bfin_read_ICPLB_DATA10()       bfin_read32(ICPLB_DATA10)
#define bfin_write_ICPLB_DATA10(val)   bfin_write32(ICPLB_DATA10, val)
#define pICPLB_DATA11                  ((uint32_t volatile *)ICPLB_DATA11)
#define bfin_read_ICPLB_DATA11()       bfin_read32(ICPLB_DATA11)
#define bfin_write_ICPLB_DATA11(val)   bfin_write32(ICPLB_DATA11, val)
#define pICPLB_DATA12                  ((uint32_t volatile *)ICPLB_DATA12)
#define bfin_read_ICPLB_DATA12()       bfin_read32(ICPLB_DATA12)
#define bfin_write_ICPLB_DATA12(val)   bfin_write32(ICPLB_DATA12, val)
#define pICPLB_DATA13                  ((uint32_t volatile *)ICPLB_DATA13)
#define bfin_read_ICPLB_DATA13()       bfin_read32(ICPLB_DATA13)
#define bfin_write_ICPLB_DATA13(val)   bfin_write32(ICPLB_DATA13, val)
#define pICPLB_DATA14                  ((uint32_t volatile *)ICPLB_DATA14)
#define bfin_read_ICPLB_DATA14()       bfin_read32(ICPLB_DATA14)
#define bfin_write_ICPLB_DATA14(val)   bfin_write32(ICPLB_DATA14, val)
#define pICPLB_DATA15                  ((uint32_t volatile *)ICPLB_DATA15)
#define bfin_read_ICPLB_DATA15()       bfin_read32(ICPLB_DATA15)
#define bfin_write_ICPLB_DATA15(val)   bfin_write32(ICPLB_DATA15, val)
#define pITEST_COMMAND                 ((uint32_t volatile *)ITEST_COMMAND)
#define bfin_read_ITEST_COMMAND()      bfin_read32(ITEST_COMMAND)
#define bfin_write_ITEST_COMMAND(val)  bfin_write32(ITEST_COMMAND, val)
#define pITEST_DATA0                   ((uint32_t volatile *)ITEST_DATA0)
#define bfin_read_ITEST_DATA0()        bfin_read32(ITEST_DATA0)
#define bfin_write_ITEST_DATA0(val)    bfin_write32(ITEST_DATA0, val)
#define pITEST_DATA1                   ((uint32_t volatile *)ITEST_DATA1)
#define bfin_read_ITEST_DATA1()        bfin_read32(ITEST_DATA1)
#define bfin_write_ITEST_DATA1(val)    bfin_write32(ITEST_DATA1, val)
#define pSICA_SWRST                    ((uint16_t volatile *)SICA_SWRST)
#define bfin_read_SICA_SWRST()         bfin_read16(SICA_SWRST)
#define bfin_write_SICA_SWRST(val)     bfin_write16(SICA_SWRST, val)
#define pSICA_SYSCR                    ((uint16_t volatile *)SICA_SYSCR)
#define bfin_read_SICA_SYSCR()         bfin_read16(SICA_SYSCR)
#define bfin_write_SICA_SYSCR(val)     bfin_write16(SICA_SYSCR, val)
#define pSICA_RVECT                    ((uint16_t volatile *)SICA_RVECT)
#define bfin_read_SICA_RVECT()         bfin_read16(SICA_RVECT)
#define bfin_write_SICA_RVECT(val)     bfin_write16(SICA_RVECT, val)
#define pSICA_IMASK0                   ((uint32_t volatile *)SICA_IMASK0)
#define bfin_read_SICA_IMASK0()        bfin_read32(SICA_IMASK0)
#define bfin_write_SICA_IMASK0(val)    bfin_write32(SICA_IMASK0, val)
#define pSICA_IMASK1                   ((uint32_t volatile *)SICA_IMASK1)
#define bfin_read_SICA_IMASK1()        bfin_read32(SICA_IMASK1)
#define bfin_write_SICA_IMASK1(val)    bfin_write32(SICA_IMASK1, val)
#define pSICA_ISR0                     ((uint32_t volatile *)SICA_ISR0)
#define bfin_read_SICA_ISR0()          bfin_read32(SICA_ISR0)
#define bfin_write_SICA_ISR0(val)      bfin_write32(SICA_ISR0, val)
#define pSICA_ISR1                     ((uint32_t volatile *)SICA_ISR1)
#define bfin_read_SICA_ISR1()          bfin_read32(SICA_ISR1)
#define bfin_write_SICA_ISR1(val)      bfin_write32(SICA_ISR1, val)
#define pSICA_IWR0                     ((uint32_t volatile *)SICA_IWR0)
#define bfin_read_SICA_IWR0()          bfin_read32(SICA_IWR0)
#define bfin_write_SICA_IWR0(val)      bfin_write32(SICA_IWR0, val)
#define pSICA_IWR1                     ((uint32_t volatile *)SICA_IWR1)
#define bfin_read_SICA_IWR1()          bfin_read32(SICA_IWR1)
#define bfin_write_SICA_IWR1(val)      bfin_write32(SICA_IWR1, val)
#define pSICA_IAR0                     ((uint32_t volatile *)SICA_IAR0)
#define bfin_read_SICA_IAR0()          bfin_read32(SICA_IAR0)
#define bfin_write_SICA_IAR0(val)      bfin_write32(SICA_IAR0, val)
#define pSICA_IAR1                     ((uint32_t volatile *)SICA_IAR1)
#define bfin_read_SICA_IAR1()          bfin_read32(SICA_IAR1)
#define bfin_write_SICA_IAR1(val)      bfin_write32(SICA_IAR1, val)
#define pSICA_IAR2                     ((uint32_t volatile *)SICA_IAR2)
#define bfin_read_SICA_IAR2()          bfin_read32(SICA_IAR2)
#define bfin_write_SICA_IAR2(val)      bfin_write32(SICA_IAR2, val)
#define pSICA_IAR3                     ((uint32_t volatile *)SICA_IAR3)
#define bfin_read_SICA_IAR3()          bfin_read32(SICA_IAR3)
#define bfin_write_SICA_IAR3(val)      bfin_write32(SICA_IAR3, val)
#define pSICA_IAR4                     ((uint32_t volatile *)SICA_IAR4)
#define bfin_read_SICA_IAR4()          bfin_read32(SICA_IAR4)
#define bfin_write_SICA_IAR4(val)      bfin_write32(SICA_IAR4, val)
#define pSICA_IAR5                     ((uint32_t volatile *)SICA_IAR5)
#define bfin_read_SICA_IAR5()          bfin_read32(SICA_IAR5)
#define bfin_write_SICA_IAR5(val)      bfin_write32(SICA_IAR5, val)
#define pSICA_IAR6                     ((uint32_t volatile *)SICA_IAR6)
#define bfin_read_SICA_IAR6()          bfin_read32(SICA_IAR6)
#define bfin_write_SICA_IAR6(val)      bfin_write32(SICA_IAR6, val)
#define pSICA_IAR7                     ((uint32_t volatile *)SICA_IAR7)
#define bfin_read_SICA_IAR7()          bfin_read32(SICA_IAR7)
#define bfin_write_SICA_IAR7(val)      bfin_write32(SICA_IAR7, val)
#define pSICB_SWRST                    ((uint16_t volatile *)SICB_SWRST)
#define bfin_read_SICB_SWRST()         bfin_read16(SICB_SWRST)
#define bfin_write_SICB_SWRST(val)     bfin_write16(SICB_SWRST, val)
#define pSICB_SYSCR                    ((uint16_t volatile *)SICB_SYSCR)
#define bfin_read_SICB_SYSCR()         bfin_read16(SICB_SYSCR)
#define bfin_write_SICB_SYSCR(val)     bfin_write16(SICB_SYSCR, val)
#define pSICB_RVECT                    ((uint16_t volatile *)SICB_RVECT)
#define bfin_read_SICB_RVECT()         bfin_read16(SICB_RVECT)
#define bfin_write_SICB_RVECT(val)     bfin_write16(SICB_RVECT, val)
#define pSICB_IMASK0                   ((uint32_t volatile *)SICB_IMASK0)
#define bfin_read_SICB_IMASK0()        bfin_read32(SICB_IMASK0)
#define bfin_write_SICB_IMASK0(val)    bfin_write32(SICB_IMASK0, val)
#define pSICB_IMASK1                   ((uint32_t volatile *)SICB_IMASK1)
#define bfin_read_SICB_IMASK1()        bfin_read32(SICB_IMASK1)
#define bfin_write_SICB_IMASK1(val)    bfin_write32(SICB_IMASK1, val)
#define pSICB_ISR0                     ((uint32_t volatile *)SICB_ISR0)
#define bfin_read_SICB_ISR0()          bfin_read32(SICB_ISR0)
#define bfin_write_SICB_ISR0(val)      bfin_write32(SICB_ISR0, val)
#define pSICB_ISR1                     ((uint32_t volatile *)SICB_ISR1)
#define bfin_read_SICB_ISR1()          bfin_read32(SICB_ISR1)
#define bfin_write_SICB_ISR1(val)      bfin_write32(SICB_ISR1, val)
#define pSICB_IWR0                     ((uint32_t volatile *)SICB_IWR0)
#define bfin_read_SICB_IWR0()          bfin_read32(SICB_IWR0)
#define bfin_write_SICB_IWR0(val)      bfin_write32(SICB_IWR0, val)
#define pSICB_IWR1                     ((uint32_t volatile *)SICB_IWR1)
#define bfin_read_SICB_IWR1()          bfin_read32(SICB_IWR1)
#define bfin_write_SICB_IWR1(val)      bfin_write32(SICB_IWR1, val)
#define pSICB_IAR0                     ((uint32_t volatile *)SICB_IAR0)
#define bfin_read_SICB_IAR0()          bfin_read32(SICB_IAR0)
#define bfin_write_SICB_IAR0(val)      bfin_write32(SICB_IAR0, val)
#define pSICB_IAR1                     ((uint32_t volatile *)SICB_IAR1)
#define bfin_read_SICB_IAR1()          bfin_read32(SICB_IAR1)
#define bfin_write_SICB_IAR1(val)      bfin_write32(SICB_IAR1, val)
#define pSICB_IAR2                     ((uint32_t volatile *)SICB_IAR2)
#define bfin_read_SICB_IAR2()          bfin_read32(SICB_IAR2)
#define bfin_write_SICB_IAR2(val)      bfin_write32(SICB_IAR2, val)
#define pSICB_IAR3                     ((uint32_t volatile *)SICB_IAR3)
#define bfin_read_SICB_IAR3()          bfin_read32(SICB_IAR3)
#define bfin_write_SICB_IAR3(val)      bfin_write32(SICB_IAR3, val)
#define pSICB_IAR4                     ((uint32_t volatile *)SICB_IAR4)
#define bfin_read_SICB_IAR4()          bfin_read32(SICB_IAR4)
#define bfin_write_SICB_IAR4(val)      bfin_write32(SICB_IAR4, val)
#define pSICB_IAR5                     ((uint32_t volatile *)SICB_IAR5)
#define bfin_read_SICB_IAR5()          bfin_read32(SICB_IAR5)
#define bfin_write_SICB_IAR5(val)      bfin_write32(SICB_IAR5, val)
#define pSICB_IAR6                     ((uint32_t volatile *)SICB_IAR6)
#define bfin_read_SICB_IAR6()          bfin_read32(SICB_IAR6)
#define bfin_write_SICB_IAR6(val)      bfin_write32(SICB_IAR6, val)
#define pSICB_IAR7                     ((uint32_t volatile *)SICB_IAR7)
#define bfin_read_SICB_IAR7()          bfin_read32(SICB_IAR7)
#define bfin_write_SICB_IAR7(val)      bfin_write32(SICB_IAR7, val)
#define pPPI0_CONTROL                  ((uint16_t volatile *)PPI0_CONTROL)
#define bfin_read_PPI0_CONTROL()       bfin_read16(PPI0_CONTROL)
#define bfin_write_PPI0_CONTROL(val)   bfin_write16(PPI0_CONTROL, val)
#define pPPI0_STATUS                   ((uint16_t volatile *)PPI0_STATUS)
#define bfin_read_PPI0_STATUS()        bfin_read16(PPI0_STATUS)
#define bfin_write_PPI0_STATUS(val)    bfin_write16(PPI0_STATUS, val)
#define pPPI0_DELAY                    ((uint16_t volatile *)PPI0_DELAY)
#define bfin_read_PPI0_DELAY()         bfin_read16(PPI0_DELAY)
#define bfin_write_PPI0_DELAY(val)     bfin_write16(PPI0_DELAY, val)
#define pPPI0_COUNT                    ((uint16_t volatile *)PPI0_COUNT)
#define bfin_read_PPI0_COUNT()         bfin_read16(PPI0_COUNT)
#define bfin_write_PPI0_COUNT(val)     bfin_write16(PPI0_COUNT, val)
#define pPPI0_FRAME                    ((uint16_t volatile *)PPI0_FRAME)
#define bfin_read_PPI0_FRAME()         bfin_read16(PPI0_FRAME)
#define bfin_write_PPI0_FRAME(val)     bfin_write16(PPI0_FRAME, val)
#define pPPI1_CONTROL                  ((uint16_t volatile *)PPI1_CONTROL)
#define bfin_read_PPI1_CONTROL()       bfin_read16(PPI1_CONTROL)
#define bfin_write_PPI1_CONTROL(val)   bfin_write16(PPI1_CONTROL, val)
#define pPPI1_STATUS                   ((uint16_t volatile *)PPI1_STATUS)
#define bfin_read_PPI1_STATUS()        bfin_read16(PPI1_STATUS)
#define bfin_write_PPI1_STATUS(val)    bfin_write16(PPI1_STATUS, val)
#define pPPI1_DELAY                    ((uint16_t volatile *)PPI1_DELAY)
#define bfin_read_PPI1_DELAY()         bfin_read16(PPI1_DELAY)
#define bfin_write_PPI1_DELAY(val)     bfin_write16(PPI1_DELAY, val)
#define pPPI1_COUNT                    ((uint16_t volatile *)PPI1_COUNT)
#define bfin_read_PPI1_COUNT()         bfin_read16(PPI1_COUNT)
#define bfin_write_PPI1_COUNT(val)     bfin_write16(PPI1_COUNT, val)
#define pPPI1_FRAME                    ((uint16_t volatile *)PPI1_FRAME)
#define bfin_read_PPI1_FRAME()         bfin_read16(PPI1_FRAME)
#define bfin_write_PPI1_FRAME(val)     bfin_write16(PPI1_FRAME, val)
#define pTBUFCTL                       ((uint32_t volatile *)TBUFCTL)
#define bfin_read_TBUFCTL()            bfin_read32(TBUFCTL)
#define bfin_write_TBUFCTL(val)        bfin_write32(TBUFCTL, val)
#define pTBUFSTAT                      ((uint32_t volatile *)TBUFSTAT)
#define bfin_read_TBUFSTAT()           bfin_read32(TBUFSTAT)
#define bfin_write_TBUFSTAT(val)       bfin_write32(TBUFSTAT, val)
#define pTBUF                          ((uint32_t volatile *)TBUF)
#define bfin_read_TBUF()               bfin_read32(TBUF)
#define bfin_write_TBUF(val)           bfin_write32(TBUF, val)
#define pPFCTL                         ((uint32_t volatile *)PFCTL)
#define bfin_read_PFCTL()              bfin_read32(PFCTL)
#define bfin_write_PFCTL(val)          bfin_write32(PFCTL, val)
#define pPFCNTR0                       ((uint32_t volatile *)PFCNTR0)
#define bfin_read_PFCNTR0()            bfin_read32(PFCNTR0)
#define bfin_write_PFCNTR0(val)        bfin_write32(PFCNTR0, val)
#define pPFCNTR1                       ((uint32_t volatile *)PFCNTR1)
#define bfin_read_PFCNTR1()            bfin_read32(PFCNTR1)
#define bfin_write_PFCNTR1(val)        bfin_write32(PFCNTR1, val)
#define pSRAM_BASE_ADDR_CORE_A         ((uint32_t volatile *)SRAM_BASE_ADDR_CORE_A)
#define bfin_read_SRAM_BASE_ADDR_CORE_A() bfin_read32(SRAM_BASE_ADDR_CORE_A)
#define bfin_write_SRAM_BASE_ADDR_CORE_A(val) bfin_write32(SRAM_BASE_ADDR_CORE_A, val)
#define pSRAM_BASE_ADDR_CORE_B         ((uint32_t volatile *)SRAM_BASE_ADDR_CORE_B)
#define bfin_read_SRAM_BASE_ADDR_CORE_B() bfin_read32(SRAM_BASE_ADDR_CORE_B)
#define bfin_write_SRAM_BASE_ADDR_CORE_B(val) bfin_write32(SRAM_BASE_ADDR_CORE_B, val)
#define pEVT_OVERRIDE                  ((uint32_t volatile *)EVT_OVERRIDE)
#define bfin_read_EVT_OVERRIDE()       bfin_read32(EVT_OVERRIDE)
#define bfin_write_EVT_OVERRIDE(val)   bfin_write32(EVT_OVERRIDE, val)
#define pUART_THR                      ((uint16_t volatile *)UART_THR)
#define bfin_read_UART_THR()           bfin_read16(UART_THR)
#define bfin_write_UART_THR(val)       bfin_write16(UART_THR, val)
#define pUART_RBR                      ((uint16_t volatile *)UART_RBR)
#define bfin_read_UART_RBR()           bfin_read16(UART_RBR)
#define bfin_write_UART_RBR(val)       bfin_write16(UART_RBR, val)
#define pUART_DLL                      ((uint16_t volatile *)UART_DLL)
#define bfin_read_UART_DLL()           bfin_read16(UART_DLL)
#define bfin_write_UART_DLL(val)       bfin_write16(UART_DLL, val)
#define pUART_DLH                      ((uint16_t volatile *)UART_DLH)
#define bfin_read_UART_DLH()           bfin_read16(UART_DLH)
#define bfin_write_UART_DLH(val)       bfin_write16(UART_DLH, val)
#define pUART_IER                      ((uint16_t volatile *)UART_IER)
#define bfin_read_UART_IER()           bfin_read16(UART_IER)
#define bfin_write_UART_IER(val)       bfin_write16(UART_IER, val)
#define pUART_IIR                      ((uint16_t volatile *)UART_IIR)
#define bfin_read_UART_IIR()           bfin_read16(UART_IIR)
#define bfin_write_UART_IIR(val)       bfin_write16(UART_IIR, val)
#define pUART_LCR                      ((uint16_t volatile *)UART_LCR)
#define bfin_read_UART_LCR()           bfin_read16(UART_LCR)
#define bfin_write_UART_LCR(val)       bfin_write16(UART_LCR, val)
#define pUART_MCR                      ((uint16_t volatile *)UART_MCR)
#define bfin_read_UART_MCR()           bfin_read16(UART_MCR)
#define bfin_write_UART_MCR(val)       bfin_write16(UART_MCR, val)
#define pUART_LSR                      ((uint16_t volatile *)UART_LSR)
#define bfin_read_UART_LSR()           bfin_read16(UART_LSR)
#define bfin_write_UART_LSR(val)       bfin_write16(UART_LSR, val)
#define pUART_MSR                      ((uint16_t volatile *)UART_MSR)
#define bfin_read_UART_MSR()           bfin_read16(UART_MSR)
#define bfin_write_UART_MSR(val)       bfin_write16(UART_MSR, val)
#define pUART_SCR                      ((uint16_t volatile *)UART_SCR)
#define bfin_read_UART_SCR()           bfin_read16(UART_SCR)
#define bfin_write_UART_SCR(val)       bfin_write16(UART_SCR, val)
#define pUART_GCTL                     ((uint16_t volatile *)UART_GCTL)
#define bfin_read_UART_GCTL()          bfin_read16(UART_GCTL)
#define bfin_write_UART_GCTL(val)      bfin_write16(UART_GCTL, val)
#define pUART_GBL                      ((uint16_t volatile *)UART_GBL)
#define bfin_read_UART_GBL()           bfin_read16(UART_GBL)
#define bfin_write_UART_GBL(val)       bfin_write16(UART_GBL, val)
#define pEBIU_AMGCTL                   ((uint16_t volatile *)EBIU_AMGCTL)
#define bfin_read_EBIU_AMGCTL()        bfin_read16(EBIU_AMGCTL)
#define bfin_write_EBIU_AMGCTL(val)    bfin_write16(EBIU_AMGCTL, val)
#define pEBIU_AMBCTL0                  ((uint32_t volatile *)EBIU_AMBCTL0)
#define bfin_read_EBIU_AMBCTL0()       bfin_read32(EBIU_AMBCTL0)
#define bfin_write_EBIU_AMBCTL0(val)   bfin_write32(EBIU_AMBCTL0, val)
#define pEBIU_AMBCTL1                  ((uint32_t volatile *)EBIU_AMBCTL1)
#define bfin_read_EBIU_AMBCTL1()       bfin_read32(EBIU_AMBCTL1)
#define bfin_write_EBIU_AMBCTL1(val)   bfin_write32(EBIU_AMBCTL1, val)
#define pEBIU_SDGCTL                   ((uint32_t volatile *)EBIU_SDGCTL)
#define bfin_read_EBIU_SDGCTL()        bfin_read32(EBIU_SDGCTL)
#define bfin_write_EBIU_SDGCTL(val)    bfin_write32(EBIU_SDGCTL, val)
#define pEBIU_SDBCTL                   ((uint32_t volatile *)EBIU_SDBCTL)
#define bfin_read_EBIU_SDBCTL()        bfin_read32(EBIU_SDBCTL)
#define bfin_write_EBIU_SDBCTL(val)    bfin_write32(EBIU_SDBCTL, val)
#define pEBIU_SDRRC                    ((uint16_t volatile *)EBIU_SDRRC)
#define bfin_read_EBIU_SDRRC()         bfin_read16(EBIU_SDRRC)
#define bfin_write_EBIU_SDRRC(val)     bfin_write16(EBIU_SDRRC, val)
#define pEBIU_SDSTAT                   ((uint16_t volatile *)EBIU_SDSTAT)
#define bfin_read_EBIU_SDSTAT()        bfin_read16(EBIU_SDSTAT)
#define bfin_write_EBIU_SDSTAT(val)    bfin_write16(EBIU_SDSTAT, val)

#endif /* __BFIN_CDEF_ADSP_BF561_proc__ */
