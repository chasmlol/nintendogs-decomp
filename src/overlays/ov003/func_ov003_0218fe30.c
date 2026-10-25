#include "ctx.h"

extern u32 data_02152cd8;
extern u32 data_0214f460;
extern u32 data_02159444;
extern u32 data_0215942c;

typedef struct { u32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

s32 func_020364cc(u8 *p);
void func_020ab02c(s32 a, s32 *b, s32 *c);
void func_02067e34(s32 *a, s32 *b, s32 *c);
void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
s32 func_02009eb8(s32 *a, s32 *b);
s32 func_02028130(u8 *p);
s32 func_020aaf38(u32 a, s32 *b, s32 c);
s32 func_020c1f34(u8 *p);
void func_0203e908(u8 *p, s32 v);
void func_020362f8(u8 *p);
void func_0202a8cc(u8 *p, s32 v);

void func_ov003_0218fe30(u8 *param_1)
{
    s32 iVar4, iVar5, iVar6;
    s32 bVar3;
    s32 blk[3];
    s32 sblk[3];
    s32 local_20[3];
    s32 uVar9, uVar10;
    u8 *o;

    iVar4 = func_020364cc(param_1);
    if (iVar4 != 0) {
        *(T3 *)(param_1 + 0x3b4) = *(T3 *)((u8 *)iVar4 + 0xbc);
    }
    blk[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x4c);
    blk[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x58);
    blk[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x64);
    func_020ab02c(*(s32 *)&data_0214f460, sblk, (s32 *)(param_1 + 0x2dc));
    func_02067e34(sblk, (s32 *)(param_1 + 0x2dc), sblk);
    o = *(u8 **)((u8 *)(*(u32 *)&data_02159444) + 0x1c);
    *(T3 *)local_20 = *(T3 *)(o + 0x30);
    func_01ff832c(0x3000, sblk, local_20, (s32 *)(param_1 + 0x3b4));
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + (sblk[1] * 3 - 0x5000);
    bVar3 = func_02009eb8(sblk, blk);
    if (bVar3) {
        *(u16 *)(param_1 + 0x12e) = 0xf400;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xc00;
    }
    iVar5 = func_02028130(param_1);
    iVar6 = func_02028130(param_1);
    iVar5 = func_020aaf38(*(s32 *)&data_0214f460, (s32 *)(param_1 + 0x378), FX_Mul(FX_Mul(iVar6, iVar5), 0x1004));
    if (iVar5 == 0) {
        *(s32 *)(param_1 + 0x464) = *(s32 *)(param_1 + 0x464) + 1;
    } else {
        *(s32 *)(param_1 + 0x464) = 0;
    }
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)(*(u8 **)&data_0215942c) == 0x8003) {
        bVar3 = 0;
        goto done;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar3 = 0;
        goto done;
    }
    if (iVar4 == 0) {
        goto act;
    }
    if (*(s16 *)((u8 *)iVar4 + 0x90) == 0) {
        goto one;
    }
    if (*(s16 *)((u8 *)iVar4 + 0x90) != 2) {
        goto c94;
    }
one:
    bVar3 = 1;
    goto chk;
c94:
    if (*(s16 *)((u8 *)iVar4 + 0x94) != 0x35) {
        goto z0;
    }
    iVar5 = func_020c1f34((u8 *)iVar4);
    if (iVar5 == 0) {
        bVar3 = 1;
        goto chk;
    }
z0:
    bVar3 = 0;
chk:
    if (bVar3 == 0) {
        goto nact;
    }
act:
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar3 = 1;
    goto done;
nact:
    bVar3 = 0;
done:
    if (bVar3) {
        return;
    }
    if (*(s32 *)(param_1 + 0x464) > 20) {
        func_0202a8cc(param_1, iVar4);
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 300) {
        func_0202a8cc(param_1, iVar4);
    }
}
