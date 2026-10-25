#include "ctx.h"

extern u32 data_ov005_02167f00;
extern s32 func_01ffdb08(s32 a);
extern void func_020271b8(s32 a, s32 *b, u32 c);
extern u32 func_02028130(s32 a);

void func_ov005_02162a60(u8 *param_1)
{
    s32 buf[12];
    s32 iVar2;
    u32 uVar3;
    s64 V;
    s32 b9;
    s32 b10;
    s32 b11;

    iVar2 = func_01ffdb08(*(s16 *)data_ov005_02167f00);
    if (*(u32 *)((u8 *)data_ov005_02167f00 + 4) != 0) {
        func_020271b8(iVar2, buf, 2);
    } else {
        func_020271b8(iVar2, buf, 6);
    }
    b9 = buf[9];
    b11 = buf[11];
    b10 = buf[10];
    *(s32 *)(param_1 + 0x20) = b9 + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 4);
    *(s32 *)(param_1 + 0x24) = b10 + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 8);
    *(s32 *)(param_1 + 0x28) = b11 + *(s32 *)(*(u8 **)(*(u8 **)(param_1 + 0x18)) + 12);
    uVar3 = func_02028130(iVar2);
    V = (s64)(s32)uVar3 * 2048 + 0x800;
    *(u32 *)(param_1 + 0x44) = (u32)(V >> 12);
    *(s32 *)(param_1 + 0x54) = *(s16 *)((u8 *)data_ov005_02167f00 + 8);
}
