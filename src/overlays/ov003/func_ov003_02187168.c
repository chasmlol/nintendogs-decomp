#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_0214f460[];
extern void func_01ff832c(s32 a, void *b, void *c, void *d);
extern void func_020ab02c(s32 a, void *b, void *c);
extern s32 func_02028130(u8 *p);
extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_02027ee0(u8 *p, s32 a, s32 b);
extern void func_ov003_0218c050(u8 *p, s32 a);
extern void func_ov003_0218ba7c(u8 *p);
extern void func_02029b30(u8 *p, s32 a);
extern s32 func_020aaf38(s32 a, void *b, s32 c);

typedef struct { s32 v[3]; } T3;


u32 func_ov003_02187168(u8 *param_1, s16 param_2, s16 param_3)
{
    u8 *iVar5p;
    s32 off;
    s32 blk[3];
    s32 aiStack_2c[3];
    s32 iVar5;
    s32 iVar4;
    u32 uVar7;
    u32 uVar3;
    u32 uVar8;
    s64 lVar1;

    iVar5p = *(u8 **)(*(u8 * volatile *)data_02159444 + 0x1c);
    off = param_3 * 12;
    *(T3 *)blk = *(T3 *)(iVar5p + 0x48);
    func_01ff832c(-0x400, blk, (s32 *)(param_1 + 0x30c + off), aiStack_2c);
    func_020ab02c(*(s32 *)data_0214f460, param_1 + 0x3f0 + off, aiStack_2c);
    uVar3 = func_02028130(param_1);
    lVar1 = (s64)(s32)uVar3 * (s64)(s32)0xffffcff4 + 0x800;
    uVar8 = ((u32)lVar1 >> 12) | ((s32)((u64)lVar1 >> 32) * 0x100000);
    func_01ff832c(uVar8, blk, param_1 + 0x2a0, aiStack_2c);
    func_020ab02c(*(s32 *)data_0214f460, param_1 + 0x278, aiStack_2c);
    func_02039448(param_1);
    if (param_2 <= 4) {
        func_02037450(param_1, 0x300);
    }
    func_02027ee0(param_1, 5, 10);
    func_ov003_0218c050(param_1, 1);
    *(u16 *)(param_1 + 0x11c) = 0;
    iVar5 = *(s32 *)(*(u8 **)data_02159444 + 0x98);
    iVar4 = *(s32 *)(*(u8 **)data_02159444 + 0x94);
    if (iVar5 <= 0) {
        iVar5 = -iVar5;
    }
    if (iVar4 <= 0) {
        iVar4 = -iVar4;
    }
    if (iVar4 + iVar5 > 2) {
        *(u16 *)(param_1 + 0x11e) = 12;
    } else {
        if (*(u16 *)(param_1 + 0x11e) != 0) {
            *(u16 *)(param_1 + 0x11e) = *(u16 *)(param_1 + 0x11e) - 1;
        }
    }
    func_ov003_0218ba7c(param_1);
    *(u8 *)(param_1 + 185) = 1;
    func_02029b30(param_1, (s16)param_2);
    uVar7 = 0;
    if ((((s32)(*(u16 *)0x04000304 & 0x8000)) >> 15) == 0) {
        iVar5 = func_02028130(param_1);
        iVar4 = func_02028130(param_1);
        uVar8 = (u32)((((s64)iVar4 * iVar5) + 0x800) >> 12);
        iVar5 = func_020aaf38(*(s32 *)data_0214f460, (s32 *)(param_1 + 0x30c + off), (u32)((((s64)(s32)uVar8 * 820) + 0x800) >> 12));
        if (iVar5 != 0) {
            uVar7 = 1;
        }
    }
    return uVar7;
}
