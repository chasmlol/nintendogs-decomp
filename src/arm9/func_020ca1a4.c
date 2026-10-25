#include "ctx.h"
#pragma opt_propagation off

extern u32 func_02062164(void);
extern u16 data_0215948c;
extern u32 data_02159494;

void func_020ca1a4(void)
{
    u32 uVar2;
    s32 a;
    s32 r5;
    s64 pr;

    uVar2 = func_02062164();
    a = (s32)(uVar2 << 12);
    r5 = a / 32767;
    pr = (s64)(s32)((u32)(((s64)r5 * 0xf0000 + 0x800) >> 12) + 0x3c000) * (s64)0xB60B60B60BLL + ((s64)0x800 << 32);
    data_0215948c = (u16)(pr >> 44);
    uVar2 = func_02062164();
    a = (s32)(uVar2 << 12);
    r5 = a / 32767;
    data_02159494 = (u32)(((s64)r5 * 0x1b000 + 0x800) >> 12) + 0x3000;
}
