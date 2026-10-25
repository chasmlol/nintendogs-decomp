#pragma avoid_byte strb
#include "ctx.h"

#define FXM(a, b) ((u32)((((s64)(s32)(a) * (s64)(s32)(b)) + 0x800) >> 12))

typedef struct { s32 a; s32 b; s32 c; } V3;

extern s32 data_0213b7d0;
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern u32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

void func_ov003_02162270(u8 *param_1)
{
    s32 blk[3];
    u32 uVar1;

    *(u16 *)(param_1 + 256 + 82) = 108;
    *(u16 *)(param_1 + 256 + 84) = 69;
    param_1[151] = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(s32 *)((u8 *)&data_0213b7d0 + 0x2c));
    *(V3 *)&blk[0] = *(V3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    blk[1] = blk[1] + FXM(uVar1, 0x1ccd);
    *(V3 *)(param_1 + 0x490) = *(V3 *)&blk[0];
    func_02009408(param_1, 0x4f, 0, blk, 1);
    func_02009408(param_1, 0x49, 0, blk, 1);
    func_02009408(param_1, 0x4a, 0, blk, 1);
    func_02009408(param_1, 0x4b, 0, blk, 1);
    func_02009408(param_1, 0x4c, 0, blk, 1);
    func_02009408(param_1, 0x4d, 0, blk, 1);
    func_02009408(param_1, 0x4e, 0, blk, 1);
    func_02023590(param_1);
    func_020a1a40(0x45);
}
