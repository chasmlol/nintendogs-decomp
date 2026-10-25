#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern s32 data_0213b7d0[];
extern void func_02026c24(u8 *p);
extern void func_02025a84(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern u32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, s32 a, s32 b, s32 *c, s32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

#define mulr(k, x) ((s32)((((s64)(k) * (s64)(x)) + 0x800) >> 12))

void func_ov003_021631e0(u8 *param_1)
{
    s32 local[3];
    u32 uVar1;

    *(u16 *)(param_1 + 0x152) = 0x1e9;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0202da00(param_1, data_0213b7d0[1]);
    *(Tri3 *)local = *(Tri3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    local[1] = local[1] + mulr(0x1ccd, (s32)uVar1);
    *(Tri3 *)(param_1 + 0x490) = *(Tri3 *)local;
    func_02009408(param_1, 0x4f, 0, local, 1);
    func_02009408(param_1, 0x49, 0, local, 1);
    func_02009408(param_1, 0x4a, 0, local, 1);
    func_02009408(param_1, 0x4b, 0, local, 1);
    func_02009408(param_1, 0x4c, 0, local, 1);
    func_02009408(param_1, 0x4d, 0, local, 1);
    func_02009408(param_1, 0x4e, 0, local, 1);
    func_02023590(param_1);
    func_020a1a40(0x45);
}
