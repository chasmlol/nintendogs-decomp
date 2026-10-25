#pragma avoid_byte strb
#include "ctx.h"

static inline u32 FXM(s32 a, s32 b)
{
    s64 r = (s64)a * (s64)b + 0x800;
    return (u32)(r >> 12);
}

static inline void SwapB(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern s32 data_0214f460;
extern s32 data_0214f464;
extern void func_ov003_021799c0(u8 *p);
extern s32 func_02028130(u8 *p);
extern s32 func_020aaf38(s32 a, u8 *b, u32 c);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_02035584(u8 *p, s32 b);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

void func_ov003_02179810(u8 *param_1)
{
    s32 iVar6;
    s32 iVar5;
    s32 iVar3;
    s32 iVar4;
    u32 uVar7;
    u32 uVar8;
    s64 lVar1;

    iVar6 = 0;
    iVar5 = 0x3c;
    func_ov003_021799c0(param_1);
    if (((s32)((*(vu16 *)0x04000304) & 0x8000) >> 15) == 0) {
        iVar3 = func_02028130(param_1);
        iVar4 = func_02028130(param_1);
        uVar7 = FXM(iVar4, iVar3);
        lVar1 = (s64)(s32)uVar7 * 410;
        uVar8 = (u32)lVar1;
        iVar3 = func_020aaf38(data_0214f460, param_1 + 744, (u32)((lVar1 + 0x800) >> 12));
        if (iVar3 != 0) {
            iVar5 = 300;
            iVar6 = 1;
            func_0203e8cc(param_1, 2, 0x15);
            goto LAB;
        }
    }
    if (*(s16 *)(param_1 + 0x156) == 0x15) {
        if (func_02035584(param_1, 2) != 0) {
            func_0203e8cc(param_1, 2, 0x12);
        }
    }
LAB:
    iVar3 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 40) {
        uVar7 = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uVar7;
        if ((u16)(((u32)iVar5 * (u16)uVar7) >> 16) == 0) {
            iVar3 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1f8, 1, 0, 1, iVar6, iVar3, 0x30, 0, 3, 0);
    if (*(s16 *)(param_1 + 0x156) == 21) {
        SwapB(1, (vu8 *)(param_1 + 185));
    } else {
        SwapB(0, (vu8 *)(param_1 + 185));
    }
}
