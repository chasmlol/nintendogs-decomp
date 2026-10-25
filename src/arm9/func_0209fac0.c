#include "ctx.h"

extern u32 data_02159074;
extern u32 data_0212fdc7;
extern u32 data_02159198;
extern void func_0209adc8(u32 a);
extern void func_02072cf0(u32 a, u32 b);
extern void func_0209ae94(u32 a);
extern void func_0207307c(u8 *p, u32 v);
extern void func_02070ac8(u8 *p, u32 a, u32 b);

u32 func_0209fac0(void)
{
    u32 uVar2;
    uVar2 = *(u8 *)((u8 *)&data_0212fdc7 + *(u16 *)((u8 *)&data_02159074 + 24) * 6);
    func_0209adc8(2);
    func_02072cf0(uVar2, *(u32 *)&data_02159074);
    func_0209ae94(3);
    *(u16 *)((u8 *)&data_02159198 + 12) = 90;
    func_0207307c((u8 *)&data_02159198, uVar2);
    func_02070ac8((u8 *)&data_02159198, 90, 0);
    return 1;
}
