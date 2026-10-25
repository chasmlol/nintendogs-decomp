#include "ctx.h"

extern u8 *data_02157cc8;
extern u32 data_0213e9e4[];
extern u32 data_0213e9c0[];

void func_0208c66c(u32 *buf, s32 n, u32 v);
u32 *func_0208c720(u8 *p, u32 v, u32 *buf);

void func_0208c604(u8 *param_1, s32 param_2)
{
    u32 auStack_50[17];
    u32 *puVar2;

    *(u16 *)(data_02157cc8 + 8) = (u16)param_2;
    func_0208c66c(auStack_50, 0x40, data_0213e9e4[param_2]);
    puVar2 = func_0208c720(param_1, data_0213e9c0[param_2], auStack_50);
    *(u32 **)(data_02157cc8 + 0xc) = puVar2;
}
