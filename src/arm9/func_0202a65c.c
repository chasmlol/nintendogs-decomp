#pragma avoid_byte strb
#include "ctx.h"

static inline s32 FXM(s32 p, s32 v)
{
    s64 r = (s64)p * (s64)v;
    return (s32)((r + 0x800) >> 12);
}

extern u8 *data_0214f464;
extern u32 data_0214f460;
extern s32 func_020aaec4(u32 a, u8 *b, s32 c);
extern s32 func_020aaf38(u32 a, u8 *b, s32 c);

s32 func_0202a65c(u8 *param_1, s16 param_2)
{
    s32 iVar2;
    s32 uVar3;
    s32 uVar4;

    if (((*(vu16 *)0x04000304 & 0x8000) >> 15) == 0 && *(s8 *)(data_0214f464 + 7) == -1) {
        iVar2 = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
        uVar3 = FXM(iVar2, iVar2);
        uVar4 = FXM(0x19a, uVar3);
        iVar2 = func_020aaec4(data_0214f460, param_1 + 0x36c, uVar4);
        if (iVar2 != 0) {
            s32 v = *(s8 *)(param_1 + 0x88);
            if (*(s8 *)(data_0214f464 + 7) == -1) {
                *(u8 *)(data_0214f464 + 8) = (u8)v;
            }
            *(s16 *)(param_1 + 0xea) = param_2 + 0xea;
            return 1;
        }
        iVar2 = *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8);
        uVar4 = FXM(iVar2, iVar2);
        uVar3 = FXM(0x1004, uVar4);
        iVar2 = func_020aaf38(data_0214f460, param_1 + 0x2dc, uVar3);
        if (iVar2 != 0) {
            s32 v = *(s8 *)(param_1 + 0x88);
            if (*(s8 *)(data_0214f464 + 7) == -1) {
                *(u8 *)(data_0214f464 + 8) = (u8)v;
            }
            *(s16 *)(param_1 + 0xea) = param_2 + 0xe8;
            return 1;
        }
    }
    return 0;
}
