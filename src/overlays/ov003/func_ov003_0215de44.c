#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, s32 v);
extern s32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 v);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }

void func_ov003_0215de44(u8 *param_1)
{
    s32 blk[3];
    s32 uVar1;

    *(u16 *)(param_1 + 0x152) = 491;
    SwapByte(4, param_1 + 151);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 6);
    *(T3 *)blk = *(T3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    blk[1] = blk[1] + FX_Mul(uVar1, 0x1ccd);
    *(T3 *)(param_1 + 0x490) = *(T3 *)blk;
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
