#include "ctx.h"

extern u32 data_02159444;
extern u32 data_02152cd8;
extern u32 data_0215942c;

typedef struct { u32 w[3]; } T3;

s32 func_020364cc(u8 *p);
void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
void func_0203942c(u8 *p);
void func_02037450(u8 *p, s32 a);
void func_02035aa0(u8 *p);
s32 func_020c1f34(u8 *p);
void func_0203e908(u8 *p, s32 v);
void func_020362f8(u8 *p);
s32 func_01ffdb08(s32 a);
void func_ov003_0219a368(u8 *p);
void func_020362ec(u8 *p, s32 a);
void func_0204eb80(u8 *p);

void func_ov003_0218f8bc(u8 *param_1)
{
    s32 iVar4;
    s32 iVar6;
    s32 bVar2;
    s32 blk[3];
    u8 *o;
    u8 *p4;
    s32 sVar1;

    iVar4 = func_020364cc(param_1);
    if (iVar4 != 0) {
        o = *(u8 **)((u8 *)(*(u32 *)&data_02159444) + 0x1c);
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(o + 0x30);
        blk[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x54);
        blk[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x60);
        blk[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x6c);
        func_01ff832c(-0x1e000, blk, param_1 + 0x26c, param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x312);
    }
    func_02035aa0(param_1);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (*(u16 *)(*(u8 **)&data_0215942c) == 0x8003) {
        bVar2 = 0;
        goto chk;
    }
    if (*(s16 *)(param_1 + 0xfa) == 0x23) {
        bVar2 = 0;
        goto chk;
    }
    if (iVar4 != 0) {
        p4 = (u8 *)iVar4;
        if (*(s16 *)(p4 + 0x90) == 0 || *(s16 *)(p4 + 0x90) == 2) {
            bVar2 = 1;
        } else if (*(s16 *)(p4 + 0x94) == 0x35 && (iVar6 = func_020c1f34(p4), iVar6 == 0)) {
            bVar2 = 1;
        } else {
            bVar2 = 0;
        }
        if (!bVar2) {
            goto zz;
        }
    }
    func_0203e908(param_1, 0x5d);
    func_020362f8(param_1);
    bVar2 = 1;
    goto chk;
zz:
    bVar2 = 0;
chk:
    if (bVar2) {
        return;
    }
    sVar1 = *(s16 *)((u8 *)iVar4 + 0x98);
    if ((s32)*(s8 *)(param_1 + 0x88) != sVar1) {
        iVar6 = func_01ffdb08(sVar1);
        if (iVar6 == 0) {
            goto zz2;
        }
        func_020362ec(param_1, (s16)sVar1);
        func_0204eb80(param_1);
        return;
zz2:
        func_ov003_0219a368(param_1);
        return;
    }
    if (*(s8 *)(param_1 + 0xa0) == 0) {
        func_0203e908(param_1, 0x429);
    }
}
