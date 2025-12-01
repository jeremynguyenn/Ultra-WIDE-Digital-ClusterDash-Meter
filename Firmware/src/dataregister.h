/*
 * dataregister.h
 *
 *  Created on: 2025/08/25
 *      Author: Nguyen Nhan
 */


#ifndef _DATAREGISTER_H_
#define _DATAREGISTER_H_

// --------------------------------------------------------------------
// prototype declaration
// --------------------------------------------------------------------
void init_data_store(void);
void data_store(void);
void data_setLCD10ms(void);
void data_setLCD100ms(void);

#pragma pack()
// --------------------------------------------------------------------
// Standard CAN Data Register
// --------------------------------------------------------------------
typedef struct {
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x0000	Number 1 upper limit					*/
										/*	0x0001								*/
		unsigned int  DATA2;			/*	0x0002	Number 2 upper limit					*/
										/*	0x0003								*/
		unsigned int  DATA3;			/*	0x0004	Number 3 upper limit					*/
										/*	0x0005								*/
		unsigned int  DATA4;			/*	0x0006	Number 4 upper limit					*/
	} ID1;								/* 										*/
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x0007	Number 1 upper limit					*/
										/*	0x0008								*/
		unsigned int  DATA2;			/*	0x0009	Number 2 upper limit					*/
										/*	0x000A								*/
		unsigned int  DATA3;			/*	0x000B	Number 3 upper limit					*/
										/*	0x000C								*/
		unsigned int  DATA4;			/*	0x000D	Number 4 upper limit					*/
	} ID2;								/* 										*/
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x000E	Number 1 upper limit					*/
										/*	0x000F								*/
		unsigned int  DATA2;			/*	0x0010	Number 2 upper limit					*/
										/*	0x0011								*/
		unsigned int  DATA3;			/*	0x0012	Number 3 upper limit					*/
										/*	0x0013								*/
		unsigned int  DATA4;			/*	0x0014	Number 4 upper limit					*/
	} ID3;								/* 										*/
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x0015	Number 1 upper limit					*/
										/*	0x0016								*/
		unsigned int  DATA2;			/*	0x0017	Number 2 upper limit					*/
										/*	0x0018								*/
		unsigned int  DATA3;			/*	0x0019	Number 3 upper limit					*/
										/*	0x001A								*/
		unsigned int  DATA4;			/*	0x001B	Number 4 upper limit					*/
	} ID4;								/* 										*/
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x001C	Number 1 upper limit					*/
										/*	0x001D								*/
		unsigned int  DATA2;			/*	0x001E	Number 2 upper limit					*/
										/*	0x001F								*/
		unsigned int  DATA3;			/*	0x0020	Number 3 upper limit					*/
										/*	0x0021								*/
		unsigned int  DATA4;			/*	0x0022	Number 4 upper limit					*/
	} ID5;								/* 										*/
	struct {							/*										*/
		unsigned int  DATA1;			/*	0x0023	Number 1 upper limit					*/
										/*	0x0024								*/
		unsigned int  DATA2;			/*	0x0025	Number 2 upper limit					*/
										/*	0x0026								*/
		unsigned int  DATA3;			/*	0x0027	Number 3 upper limit					*/
										/*	0x0028								*/
		unsigned int  DATA4;			/*	0x0029	Number 4 upper limit					*/
	} ID6;								/* 										*/
} CAN_data_t;
#pragma unpack

// --------------------------------------------------------------------
// Operational data register
// --------------------------------------------------------------------
typedef struct {
	float TyreCirc;
	float AD0;
	float AD1;
	float AD2;
	float AD2L;
	float AD3;
	float AD4;
	float AD5;
	float AD6;
	float AD7;
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float af;
	float rev;
	float rev_angle;
	float bt;
	float sp;
	double odo;
	double trip;
	char str_fps[7];
	char str_day[10];
	char str_time[10];
	char str_bt[7];
	char str_bl[7];
	char str_fl1[7];
	char str_fl2[7];
	char str_sp[7];
	char str_odo[30];
	char str_trip[30];
	char neopixel[256]; // Neopixel 8byte x rgb x 8led[192]
	char neobrightness;
} CALC_data_t;

// --------------------------------------------------------------------
// extern
// --------------------------------------------------------------------
extern volatile CAN_data_t			g_CAN_data;
extern volatile CALC_data_t			g_CALC_data,g_CALC_data_sm;
extern volatile unsigned long		sp_int, tr_int;
extern volatile unsigned int		g_sw_cnt, g_sw_int_flg;

#endif /* _DATAREGISTER_H_ */
