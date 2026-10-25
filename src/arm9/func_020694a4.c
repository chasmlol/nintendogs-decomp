#include "ctx.h"
extern u16 data_02150e30[];
extern void func_020699dc(u32 a);
void func_020694a4(s32 param_1)
{
    u16 *puVar3;
    int uVar2;
    s32 uVar1;
    puVar3 = data_02150e30;
    uVar1 = puVar3[7];
    uVar2 = puVar3[0];
    puVar3[0] = ~param_1 & (uVar2 | uVar1);
    puVar3[7] = param_1;
    if (32 < param_1) goto hi;
    if (32 <= param_1) goto c32;
    if (param_1 > 0) goto t16;
    if (param_1 == 0) {
        *(vu32 *)0x04000000 = *(vu32 *)0x04000000 & 0xbfffffff;
    }
    goto tail;
t16:
    if (16 != param_1) goto tail;
    goto c16;
hi:
    if (64 < param_1) goto t96;
    if (param_1 != 64) goto tail;
    goto c64;
t96:
    if (96 != param_1) goto tail;
    goto c96;
c16:
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 | 0x40000000;
    *(vu8 *)0x04000244 = 0x84;
    goto tail;
c64:
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 | 0x40000000;
    *(vu8 *)0x04000246 = 0x8c;
    goto tail;
c96:
    *(vu8 *)0x04000246 = 0x8c;
c32:
    *(vu8 *)0x04000245 = 0x84;
    *(vu32 *)0x04000000 = *(vu32 *)0x04000000 | 0x40000000;
tail:
    func_020699dc(data_02150e30[0]);
}
