#include "ctx.h"

extern u32 data_ov003_0219a7a4;

typedef struct { u32 w[5]; } T5;

s32 func_02036578(u8 *p);
void func_020275dc(s32 a, s32 *b);
void func_02027690(s32 a, s32 *b);
s32 func_02028130(s32 a);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
void func_0203942c(u8 *p);
void func_02037450(u8 *p, s32 a);
s32 func_02022e14(u8 *p, s32 a);
void func_02029504(u8 *p);
void func_02038138(u8 *p, s32 a);
void func_020424e4(s32 a);
void func_0202fcc0(u8 *p);

void func_ov003_0218e794(u8 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 bVar1;
    s32 x;
    s32 y;
    s32 local_30[3];
    T5 local_24;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_020275dc(iVar2, (s32 *)(param_1 + 620));
        func_02027690(iVar2, local_30);
        iVar3 = func_02028130(iVar2);
        func_01ff832c(iVar3 * -4, local_30, (s32 *)(param_1 + 620), (s32 *)(param_1 + 620));
        func_0203942c(param_1);
        func_02037450(param_1, 0x102);
    }
    local_24 = *(T5 *)&data_ov003_0219a7a4;
    bVar1 = func_02022e14(param_1, 0x4e);
    if (bVar1) {
        *(s32 *)(param_1 + 0x468) = *(u8 *)(param_1 + 0xa5);
        *(s32 *)(param_1 + 0x46c) = 180 - *(u8 *)(param_1 + 0xa5) * 30;
        func_02029504(param_1);
    }
    func_02038138(param_1, ((s32 *)&local_24)[*(s32 *)(param_1 + 0x468)]);
    if (iVar2 == 0) {
        goto nocase;
    }
    x = *(s16 *)(iVar2 + 0xea);
    if (x < 0x439) {
        goto z1;
    }
    if (x <= 0x43b) {
        bVar1 = 1;
        goto t1;
    }
z1:
    bVar1 = 0;
t1:
    if (bVar1 != 0) {
        bVar1 = 1;
        goto out;
    }
    if (x < 0x318) {
        goto zero;
    }
    if (x > 0x33b) {
        goto zero;
    }
    y = *(s16 *)(iVar2 + 0xee);
    if (y < 0x439) {
        goto z2;
    }
    if (y <= 0x43b) {
        bVar1 = 1;
        goto t2;
    }
z2:
    bVar1 = 0;
t2:
    if (bVar1 != 0) {
        bVar1 = 1;
        goto out;
    }
zero:
    bVar1 = 0;
out:
    if (bVar1 != 0) {
        return;
    }
nocase:
    func_020424e4(*(s8 *)(param_1 + 136));
    bVar1 = func_02022e14(param_1, 0x4e);
    if (bVar1) {
        func_02029504(param_1);
    }
    func_0202fcc0(param_1);
}
