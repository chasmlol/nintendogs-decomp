#include "ctx.h"

extern u32 data_02159320;
extern u8 *func_02027540(u8 *p);
extern s32 func_02027708(u8 *p);
extern s32 func_02044a6c(s32 a, s32 b);

u32 func_020a2df8(u8 *param_1, s32 param_2, s32 param_3)
{
    u8 *iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar1 = func_02027540(param_1);
    iVar2 = func_02027708(param_1);
    iVar3 = func_02044a6c(iVar2, param_2);
    data_02159320 = iVar3;
    *(u16 *)(iVar1 + 0x80) = (u16)param_2;
    *(u32 *)(iVar1 + 0x84) = 0;
    *(u16 *)(iVar1 + 0x8a) = 3;
    if (param_3 > 0x8fc) {
        *(u16 *)(iVar1 + 0x8a) = 16;
    } else if (param_3 > 0x898) {
        *(u16 *)(iVar1 + 0x8a) = 15;
    } else if (param_3 > 0x834) {
        *(u16 *)(iVar1 + 0x8a) = 14;
    } else if (param_3 > 2000) {
        *(u16 *)(iVar1 + 0x8a) = 13;
    } else if (param_3 > 0x76c) {
        *(u16 *)(iVar1 + 0x8a) = 12;
    } else if (param_3 > 0x708) {
        *(u16 *)(iVar1 + 0x8a) = 11;
    } else if (param_3 > 0x6a4) {
        *(u16 *)(iVar1 + 0x8a) = 10;
    } else if (param_3 > 1600) {
        *(u16 *)(iVar1 + 0x8a) = 9;
    } else if (param_3 > 0x5dc) {
        *(u16 *)(iVar1 + 0x8a) = 8;
    } else if (param_3 > 0x578) {
        *(u16 *)(iVar1 + 0x8a) = 7;
    } else if (param_3 > 0x514) {
        *(u16 *)(iVar1 + 0x8a) = 6;
    } else if (param_3 > 1200) {
        *(u16 *)(iVar1 + 0x8a) = 5;
    } else if (param_3 > 0x44c) {
        *(u16 *)(iVar1 + 0x8a) = 4;
    }
    return 1;
}
