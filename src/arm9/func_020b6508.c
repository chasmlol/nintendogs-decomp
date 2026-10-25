#include "ctx.h"

extern u8 data_021326f0[];
extern u8 data_021326fc[];
extern u8 data_02132704[];
extern u64 func_02080858(void);

void func_020b6508(s32 param_1, s32 param_2, u32 param_3)
{
    u32 k;
    s32 iVar3;
    s32 iVar2;
    u64 uVar4;
    u32 x;
    u32 n;
    u32 t;
    s32 off;

    k = param_3;
    iVar3 = 0;
    iVar2 = iVar3;
    uVar4 = func_02080858();
    switch (k) {
    case 1:
        iVar3 = 2;
        iVar2 = (s32)data_021326f0;
        if (param_2 == 0) {
            *(u16 *)(param_1 + 0x3c) = 120;
        } else {
            *(u16 *)(param_1 + 0x3c) = 180;
        }
        break;
    case 2:
        iVar3 = 4;
        iVar2 = (s32)data_021326fc;
        if (param_2 == 0) {
            *(u16 *)(param_1 + 0x3c) = 180;
        } else {
            *(u16 *)(param_1 + 0x3c) = 300;
        }
        break;
    case 3:
        iVar3 = 5;
        iVar2 = (s32)data_02132704;
        if (param_2 == 0) {
            *(u16 *)(param_1 + 0x3c) = 300;
        } else {
            *(u16 *)(param_1 + 0x3c) = 600;
        }
        break;
    case 4:
        iVar3 = 5;
        iVar2 = (s32)data_02132704;
        if (param_2 == 0) {
            *(u16 *)(param_1 + 0x3c) = 600;
        } else {
            *(u16 *)(param_1 + 0x3c) = 900;
        }
        break;
    case 5:
        iVar2 = (s32)data_02132704;
        iVar3 = 5;
        if (param_2 == 0) {
            *(u16 *)(param_1 + 0x3c) = 900;
        } else {
            *(u16 *)(param_1 + 0x3c) = 1200;
        }
        break;
    }
    x = (u16)((u32)uVar4 * 0x10dcd + 1);
    n = (u16)iVar3;
    t = (u16)((n * x) >> 16);
    off = (s32)(t << 16) >> 15;
    *(u16 *)(param_1 + 0x3e) = *(s16 *)(iVar2 + off);
}
