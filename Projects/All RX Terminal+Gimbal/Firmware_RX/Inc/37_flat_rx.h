/**
  ******************************************************************************
  * File Name          : 37_flat_rx.h
  * Date               : 22-Jan-2016
  *	Author 			   : Asaad Kaadan
  * Description        : This file is automatically generated by the 'topogen' MATLAB tool.
  *                      This version is compiled for MCU firmware use.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __37_flat_rx_H
#define __37_flat_rx_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"

// Module Part Numbers:
// HO01R3: Hexagon receiver with VEMT3700 - 30mm optical resolution.
// HO01R2: Hexagon receiver with VEMT3700 - 20mm optical resolution.
// HO02R0: Hexagon transmitter  with VSMY2850G - 30mm optical resolution.
// HO02R1: Hexagon transmitter  with VSMY2850G - 20mm optical resolution.
// PO01R0: Pentagon receiver with VEMT3700 compatible with hexagons 30mm optical resolution.
// PO02R0: Pentagon transmitter  with VSMY2850G compatible with hexagons 30mm optical resolution.

// Enumerations
enum	modulePartNumbers{_HO01R3, _HO01R2, _HO02R0, _HO02R1, _PO01R0, _PO02R0};
enum	portPol{_normal, _reversed};
enum	modulePorts{_P1=1, _P2, _P3, _P4, _P5, _P6};

#define _N	37					// Number of array modules

// Array modules
#define _mod1	1<<3
#define _mod2	2<<3
#define _mod3	3<<3
#define _mod4	4<<3
#define _mod5	5<<3
#define _mod6	6<<3
#define _mod7	7<<3
#define _mod8	8<<3
#define _mod9	9<<3
#define _mod10	10<<3
#define _mod11	11<<3
#define _mod12	12<<3
#define _mod13	13<<3
#define _mod14	14<<3
#define _mod15	15<<3
#define _mod16	16<<3
#define _mod17	17<<3
#define _mod18	18<<3
#define _mod19	19<<3
#define _mod20	20<<3
#define _mod21	21<<3
#define _mod22	22<<3
#define _mod23	23<<3
#define _mod24	24<<3
#define _mod25	25<<3
#define _mod26	26<<3
#define _mod27	27<<3
#define _mod28	28<<3
#define _mod29	29<<3
#define _mod30	30<<3
#define _mod31	31<<3
#define _mod32	32<<3
#define _mod33	33<<3
#define _mod34	34<<3
#define _mod35	35<<3
#define _mod36	36<<3
#define _mod37	37<<3

// Topology
static uint16_t array[_N][7] = {
{ _HO01R3, 0, _mod2|_P5, _mod12|_P6, _mod23|_P1, 0, 0},	// Module 1
{ _HO01R3, 0, _mod3|_P5, _mod13|_P6, _mod12|_P1, _mod1|_P2, 0},	// Module 2
{ _HO01R3, 0, _mod4|_P5, _mod8|_P6, _mod13|_P1, _mod2|_P2, 0},	// Module 3
{ _HO01R3, 0, 0, _mod5|_P6, _mod8|_P1, _mod3|_P2, 0},	// Module 4
{ _HO01R3, 0, 0, _mod6|_P6, _mod9|_P1, _mod8|_P2, _mod4|_P3},	// Module 5
{ _HO01R3, 0, 0, _mod7|_P6, _mod10|_P1, _mod9|_P2, _mod5|_P3},	// Module 6
{ _HO01R3, 0, 0, 0, _mod11|_P1, _mod10|_P2, _mod6|_P3},	// Module 7
{ _HO01R3, _mod4|_P4, _mod5|_P5, _mod9|_P6, _mod14|_P1, _mod13|_P2, _mod3|_P3},	// Module 8
{ _HO01R3, _mod5|_P4, _mod6|_P5, _mod10|_P6, _mod15|_P1, _mod14|_P2, _mod8|_P3},	// Module 9
{ _HO01R3, _mod6|_P4, _mod7|_P5, _mod11|_P6, _mod16|_P1, _mod15|_P2, _mod9|_P3},	// Module 10
{ _HO01R3, _mod7|_P4, 0, 0, _mod17|_P1, _mod16|_P2, _mod10|_P3},	// Module 11
{ _HO01R3, _mod2|_P4, _mod13|_P5, _mod18|_P6, _mod24|_P1, _mod23|_P2, _mod1|_P3},	// Module 12
{ _HO01R3, _mod3|_P4, _mod8|_P5, _mod14|_P6, _mod18|_P1, _mod12|_P2, _mod2|_P3},	// Module 13
{ _HO01R3, _mod8|_P4, _mod9|_P5, _mod15|_P6, _mod19|_P1, _mod18|_P2, _mod13|_P3},	// Module 14
{ _HO01R3, _mod9|_P4, _mod10|_P5, _mod16|_P6, _mod20|_P1, _mod19|_P2, _mod14|_P3},	// Module 15
{ _HO01R3, _mod10|_P4, _mod11|_P5, _mod17|_P6, _mod21|_P1, _mod20|_P2, _mod15|_P3},	// Module 16
{ _HO01R3, _mod11|_P4, 0, 0, _mod22|_P1, _mod21|_P2, _mod16|_P3},	// Module 17
{ _HO01R3, _mod13|_P4, _mod14|_P5, _mod19|_P6, _mod25|_P1, _mod24|_P2, _mod12|_P3},	// Module 18
{ _HO01R3, _mod14|_P4, _mod15|_P5, _mod20|_P6, _mod26|_P1, _mod25|_P2, _mod18|_P3},	// Module 19
{ _HO01R3, _mod15|_P4, _mod16|_P5, _mod21|_P6, _mod27|_P1, _mod26|_P2, _mod19|_P3},	// Module 20
{ _HO01R3, _mod16|_P4, _mod17|_P5, _mod22|_P6, _mod28|_P1, _mod27|_P2, _mod20|_P3},	// Module 21
{ _HO01R3, _mod17|_P4, 0, 0, 0, _mod28|_P2, _mod21|_P3},	// Module 22
{ _HO01R3, _mod1|_P4, _mod12|_P5, _mod24|_P6, _mod33|_P1, 0, 0},	// Module 23
{ _HO01R3, _mod12|_P4, _mod18|_P5, _mod25|_P6, _mod29|_P1, _mod33|_P2, _mod23|_P3},	// Module 24
{ _HO01R3, _mod18|_P4, _mod19|_P5, _mod26|_P6, _mod30|_P1, _mod29|_P2, _mod24|_P3},	// Module 25
{ _HO01R3, _mod19|_P4, _mod20|_P5, _mod27|_P6, _mod31|_P1, _mod30|_P2, _mod25|_P3},	// Module 26
{ _HO01R3, _mod20|_P4, _mod21|_P5, _mod28|_P6, _mod32|_P1, _mod31|_P2, _mod26|_P3},	// Module 27
{ _HO01R3, _mod21|_P4, _mod22|_P5, 0, 0, _mod32|_P2, _mod27|_P3},	// Module 28
{ _HO01R3, _mod24|_P4, _mod25|_P5, _mod30|_P6, _mod35|_P1, _mod34|_P2, _mod33|_P3},	// Module 29
{ _HO01R3, _mod25|_P4, _mod26|_P5, _mod31|_P6, _mod36|_P1, _mod35|_P2, _mod29|_P3},	// Module 30
{ _HO01R3, _mod26|_P4, _mod27|_P5, _mod32|_P6, _mod37|_P1, _mod36|_P2, _mod30|_P3},	// Module 31
{ _HO01R3, _mod27|_P4, _mod28|_P5, 0, 0, _mod37|_P2, _mod31|_P3},	// Module 32
{ _HO01R3, _mod23|_P4, _mod24|_P5, _mod29|_P6, _mod34|_P1, 0, 0},	// Module 33
{ _HO01R3, _mod33|_P4, _mod29|_P5, _mod35|_P6, 0, 0, 0},	// Module 34
{ _HO01R3, _mod29|_P4, _mod30|_P5, _mod36|_P6, 0, 0, _mod34|_P3},	// Module 35
{ _HO01R3, _mod30|_P4, _mod31|_P5, _mod37|_P6, 0, 0, _mod35|_P3},	// Module 36
{ _HO01R3, _mod31|_P4, _mod32|_P5, 0, 0, 0, _mod36|_P3}    // Module 37
};

// Configurations for duplex serial ports
#ifdef _module_1
	#define	_module	1
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_2
	#define	_module	2
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_reversed	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_3
	#define	_module	3
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_reversed	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_4
	#define	_module	4
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_5
	#define	_module	5
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_6
	#define	_module	6
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_7
	#define	_module	7
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_8
	#define	_module	8
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_9
	#define	_module	9
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_10
	#define	_module	10
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_11
	#define	_module	11
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_12
	#define	_module	12
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_reversed	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_reversed	1
#endif
#ifdef _module_13
	#define	_module	13
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_14
	#define	_module	14
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_15
	#define	_module	15
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_16
	#define	_module	16
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_17
	#define	_module	17
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_18
	#define	_module	18
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_19
	#define	_module	19
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_20
	#define	_module	20
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_21
	#define	_module	21
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_22
	#define	_module	22
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_23
	#define	_module	23
	#define	HO01R3	1
	#define	_P1pol_reversed	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_24
	#define	_module	24
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_25
	#define	_module	25
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_26
	#define	_module	26
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_27
	#define	_module	27
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_28
	#define	_module	28
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_29
	#define	_module	29
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_reversed	1
#endif
#ifdef _module_30
	#define	_module	30
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_31
	#define	_module	31
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_reversed	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_32
	#define	_module	32
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1
	#define	_P5pol_reversed	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_33
	#define	_module	33
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_reversed	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_34
	#define	_module	34
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_normal	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_35
	#define	_module	35
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_normal	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_36
	#define	_module	36
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_reversed	1
	#define	_P4pol_normal	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif
#ifdef _module_37
	#define	_module	37
	#define	HO01R3	1
	#define	_P1pol_normal	1
	#define	_P2pol_normal	1
	#define	_P3pol_normal	1
	#define	_P4pol_normal	1
	#define	_P5pol_normal	1
	#define	_P6pol_normal	1
#endif


#ifdef __cplusplus
}
#endif
#endif /*__37_flat_rx_H */
/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT OU *****END OF FILE****/
