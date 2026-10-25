#include "ctx.h"
extern u8 data_0214f464[];
extern void func_ov003_021799c0(u8 *p);
extern s32 func_02028124(u8 *p);
extern void func_02024f18(u8 *p, s32 a, s32 b);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

void func_ov003_02177af8(u8 *param_1)
{
    s32 bVar1;
    s32 iVar2;
    u32 uVar3;
    u32 *pc;
    s32 iVar4;

    bVar1 = 0;
    func_ov003_021799c0(param_1);
    if (*(s16 *)(param_1 + 0x152) == 360) {
        goto blk1;
    }
    if (*(s16 *)(param_1 + 0x152) != 0x169) {
        goto common;
    }
    goto blk2;
blk1:
    uVar3 = (u32)func_02028124(param_1);
    func_02024f18(param_1, 1, (s32)(((s64)(s32)uVar3 * 491 + 0x800) >> 12));
    goto common;
blk2:
    uVar3 = (u32)func_02028124(param_1);
    func_02024f18(param_1, 1, -(s32)(((s64)(s32)uVar3 * 491 + 0x800) >> 12));
common:
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        u16 sw;
        bVar1 = 1;
        pc = *(u32 **)data_0214f464;
        uVar3 = *pc * 0x10dcd + 1;
        sw = (((u32)(u16)uVar3) * 3u) >> 16;
        *pc = uVar3;
        switch (sw) {
        case 0: goto c0;
        case 1: goto c1;
        case 2: goto c2;
        }
        goto after;
c0:
        func_0203e8cc(param_1, 0, 0x168);
        goto after;
c1:
        func_0203e8cc(param_1, 0, 0x169);
        goto after;
c2:
        func_0203e8cc(param_1, 0, 0x165);
after:
        ;
    }
    iVar2 = 0;
    if (*(u16 *)(param_1 + 0xfc) > 60 && bVar1 != 0) {
        pc = *(u32 **)data_0214f464;
        iVar4 = (s32)(*pc * 0x10dcd + 1);
        *pc = (u32)iVar4;
        if ((u16)(((u32)iVar4 << 16) >> 31) == 0) {
            iVar2 = 1;
        }
    }
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar2, 0x30, 0, 3, 0);
}
