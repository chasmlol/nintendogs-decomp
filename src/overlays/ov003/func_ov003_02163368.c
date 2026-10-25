#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213b7d0[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern s32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

typedef struct { s32 a, b, c; } Vec3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_02163368(u8 *param_1)
{
    Vec3 v;
    s32 uVar1;

    *(u16 *)(param_1 + 0x152) = 0;
    *(u16 *)(param_1 + 0x154) = 0x43;
    SwapByte(4, param_1 + 0x97);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(s32 *)data_0213b7d0);
    v = *(Vec3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    v.b = v.b + FX_Mul(uVar1, 0x1ccd);
    *(Vec3 *)(param_1 + 0x490) = v;
    func_02009408(param_1, 0x4f, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x49, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x4a, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x4b, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x4c, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x4d, 0, (s32 *)&v, 1);
    func_02009408(param_1, 0x4e, 0, (s32 *)&v, 1);
    func_02023590(param_1);
    func_020a1a40(0x45);
}
