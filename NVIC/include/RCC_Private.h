


#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H
/********************************** RCC Registers ************************/
/*#define RCC_u32_BASE_ADDRESS  0x40023800

typedef struct
{
	volatile u32 CR;
	volatile u32 PLLCFGR;
	volatile u32 CFGR;
	volatile u32 CIR;
	volatile u32 AHB1RSTR;
	volatile u32 AHB2RSTR;
	volatile u32 Res1;
	volatile u32 Res2;
	volatile u32 APB1RSTR;
	volatile u32 APB2RSTR;
	volatile u32 Res3;
	volatile u32 Res4;
	volatile u32 AHB1ENR;
	volatile u32 AHB2ENR;
	volatile u32 Res5;
	volatile u32 Res6;
	volatile u32 APB1ENR;
	volatile u32 APB2ENR;
	volatile u32 Res7;
	volatile u32 Res8;
	volatile u32 AHB1LPENR;
	volatile u32 AHB2LPENR;
	volatile u32 Res9;
	volatile u32 Res10;
	volatile u32 APB1LPENR;
	volatile u32 APB2LPENR;
	volatile u32 Res11;
	volatile u32 Res12;
	volatile u32 BDCR;
	volatile u32 CSR;
	volatile u32 Res13;
	volatile u32 Res14;
	volatile u32 SSCGR;
	volatile u32 PLLI2SCFGR;
	volatile u32 Res15;
	volatile u32 DCKCFGR;
	
}RCC_REG_DEF_T;
#define RCC   ((RCC_REG_DEF_T*)RCC_u32_BASE_ADDRESS)*/
/*************************************************************************/


#define  RCC_u8_HSI       0
#define  RCC_u8_HSE_OSC    1
#define  RCC_u8_PLL        2
#define  RCC_u8_HSE_BYBASS 3

#endif
