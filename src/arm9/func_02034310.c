#include "ctx.h"

extern u8 *data_02159468;
extern u32 *data_0214f464;
extern void func_020bc024(s32 *p);
extern s32 func_02009bd0(s32 *a, s32 *b);

typedef struct { s32 a, b, c; } Trio;

u32 func_02034310(u8 *param_1)
{
    s32 blk[7];
    s32 iVar1;
    s32 iVar5;
    s32 idx;
    u8 *ent;
    u32 uVar2;
    u32 uVar3;
    u32 uVar4;
    u16 v;

    iVar5 = *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x2c);
    idx = (s16)(*(s16 *)(param_1 + 0x13e) - 3);
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        ent = 0;
    } else {
        ent = *(u8 **)(data_02159468 + idx * 4 + 4);
    }
    if (ent == 0) {
        goto ret0;
    }
    if (0) {
        return 0;
    }
    func_020bc024(blk);
    *(Trio *)(blk + 3) = *(Trio *)(ent + 0xbc);
    iVar1 = func_02009bd0(blk, blk + 3);
    if (iVar1 <= 0x900000) {
        if (*(u16 *)(ent + 0xa4) >= 40) {
            goto caseP;
        }
    }
    if (iVar5 < 1000) {
        u32 *rng = data_0214f464;
        uVar4 = *rng * 0x10dcd + 1;
        uVar3 = (u16)uVar4 * 5000;
        v = (u16)(uVar3 >> 16);
        uVar2 = (iVar5 + 500) > v;
        *rng = uVar4;
        return uVar2;
    }
    if (iVar5 < 5000) {
        u32 *rng = data_0214f464;
        uVar4 = *rng * 0x10dcd + 1;
        uVar3 = (u16)uVar4 * 10000;
        v = (u16)(uVar3 >> 16);
        uVar2 = (iVar5 + 2000) > v;
        *rng = uVar4;
        return uVar2;
    }
    {
        u32 *rng = data_0214f464;
        uVar4 = *rng * 0x10dcd + 1;
        uVar3 = (u16)uVar4 * 16666;
        v = (u16)(uVar3 >> 16);
        uVar2 = (iVar5 + 6666) > v;
        *rng = uVar4;
        return uVar2;
    }
caseP:
    {
        u32 *rng = data_0214f464;
        uVar4 = *rng * 0x10dcd + 1;
        uVar3 = (u16)uVar4 * 10000;
        v = (u16)(uVar3 >> 16);
        uVar2 = (iVar5 + 7000) > v;
        *rng = uVar4;
        return uVar2;
    }
ret0:
    return 0;
}
