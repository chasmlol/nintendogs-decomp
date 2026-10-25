#include "ctx.h"

extern u32 data_0215be4c;
extern void func_021013e4(u32 a, u8 *b);

s32 func_02101510(u32 param_1, u32 param_2, u32 param_3, u16 param_4, u16 param_5,
                  u16 param_6, u16 param_7, u16 param_8, u16 param_9, u16 param_10)
{
    s32 ret = -1;
    s32 iVar2 = 0;
    u8 *iVar1;
    u8 *pv;
    iVar1 = (u8 *)(data_0215be4c + 4);
    do {
        if (*(s32 *)(iVar1 + 4) == 0) {
            ret = iVar2;
            *(s32 *)(iVar1 + 4) = 1;
            *(u16 *)(iVar1 + 0xc) = param_6;
            *(u16 *)(iVar1 + 0xe) = param_7;
            *(u32 *)(iVar1 + 0x14) = (u32)param_6 * (u32)param_7 * 0x20;
            *(u32 *)(iVar1 + 0x18) = param_2;
            pv = iVar1 + 24;
            *(u16 *)(pv + 8) = param_4;
            *(u16 *)(pv + 10) = param_5;
            *(u32 *)(pv + 4) = param_3;
            *(u16 *)(pv + 30) = param_9;
            *(u16 *)(pv + 28) = param_8;
            *(u16 *)(pv + 36) = param_10;
            func_021013e4(param_1, iVar1);
            break;
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x1b8;
    } while (iVar2 < 0x18);
    return ret;
}
