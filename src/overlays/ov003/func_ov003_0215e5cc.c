#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 a; u32 b; u32 c; } Tri3;

extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
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

static inline s32 mulr(s32 k, s32 x)
{
    s64 v = (s64)k * (s64)x + 0x800;
    return (s32)(u32)(v >> 12);
}

void func_ov003_0215e5cc(u8 *param_1)
{
    s32 local[3];
    s32 spare;
    u32 uVar1;

    *(u16 *)(param_1 + 0x152) = 0x19;
    *(u16 *)(param_1 + 0x154) = 1;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 1);
    *(Tri3 *)local = *(Tri3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    local[1] = local[1] + (s32)(u32)((((s64)(s32)uVar1) * 0x1ccd + 0x800) >> 12);
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
