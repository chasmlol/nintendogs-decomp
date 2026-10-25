#include "ctx.h"

extern u16 data_02150e30[];
void func_020699dc(u32 a);

void func_02068d28(u32 param_1)
{
    int nz;
    int uVar1;
    int uVar2;
    uVar2 = data_02150e30[0];
    nz = ~(int)param_1;
    uVar1 = data_02150e30[11];
    data_02150e30[0] = ((uVar2 | uVar1) & nz);
    data_02150e30[11] = param_1;
    if (0 == param_1) {
        goto zero;
    }
    if (param_1 != 0x80) {
        goto tail;
    }
    *(u32 *)0x04001000 = *(u32 *)0x04001000 | 0x40000000;
    *(u8 *)0x04000248 = 0x82;
    goto tail;
zero:
    *(u32 *)0x04001000 = *(u32 *)0x04001000 & 0xbfffffff;
tail:
    func_020699dc(data_02150e30[0]);
}
