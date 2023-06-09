

#ifndef LEDMXD_INTERFACE_H_
#define LEDMXD_INTERFACE_H_


void LEDMXD_voidInit(void);

u8 LEDMXD_u8Display(u8* Copy_u8Frame);
void LEDMXD_voidDisableCols(void);
void LEDMXD_voidSetRowVlaues(u8 Copy_u8Frame);
void LEDMXD_u8ShiftingDisplay(u8* Copy_u8Frame);
#endif /* LEDMXD_INTERFACE_H_ */
