#include "ctx.h"
extern u64 func_0205e270(u32 a, u32 b);
extern void func_02112a50(u32 a, u32 b, u32 c, u32 d);
u32 func_021225f0(u8 *param_1)
{
    s32 iVar2;
    s32 iVar1;
    s32 bVar3;
    u64 uVar4;
    bVar3 = 0;
    *(s32 *)(param_1 + 0x58) = *(s32 *)(param_1 + 0x58) + 1;
    uVar4 = func_0205e270((u32)(*(s32 *)(param_1 + 0x58) * *(s32 *)(param_1 + 0x40)), *(u32 *)(param_1 + 0x54));
    *(s32 *)(param_1 + 0x5c) = (s32)uVar4;
    if (*(s32 *)(param_1 + 0x58) == *(s32 *)(param_1 + 0x54)) {
        *(u32 *)(param_1 + 0x5c) = 0;
        bVar3 = 1;
    } else if (*(s32 *)(param_1 + 0x4c) > *(s32 *)(param_1 + 0x48)) {
        *(s32 *)(param_1 + 0x5c) = -*(s32 *)(param_1 + 0x5c);
    }
    iVar2 = 0;
    if (0 < *(s32 *)(param_1 + 0x3c)) {
        do {
            iVar1 = 0;
            if (0 < *(s32 *)(param_1 + 0x14)) {
                do {
                    func_02112a50(2, (u16)(iVar2 + *(u16 *)(param_1 + ((u32)iVar1 << 1) + 0x18)), 0, *(s32 *)(param_1 + 0x5c));
                    iVar1 = iVar1 + 1;
                } while (iVar1 < *(s32 *)(param_1 + 0x14));
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 < *(s32 *)(param_1 + 0x3c));
    }
    return bVar3;
}
