#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

extern u8 data_0213b7d0[];

void func_02026c24(u8 *p);
void func_02025a84(u8 *p);
void func_0202da00(u8 *p, u32 a);
u32 func_02028130(u8 *p);
void func_02009408(u8 *p, u32 a, u32 b, s32 *c, u32 d);
void func_02023590(u8 *p);
void func_020a1a40(u32 a);

void func_ov003_02163054(u8 *param_1)
{
    T3 loc;
    u32 uVar1;
    s64 t;

    *(u16 *)(param_1 + 0x152) = 0x28;
    *(u16 *)(param_1 + 0x154) = 0x44;
    SwapByte(4, (vu8 *)(param_1 + 0x97));
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x8));
    loc = *(T3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    loc.b = loc.b + (s32)(u32)((((s64)(s32)uVar1) * 0x1ccd + 0x800) >> 12);
    *(T3 *)(param_1 + 0x490) = loc;
    func_02009408(param_1, 0x4f, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x49, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x4a, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x4b, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x4c, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x4d, 0, (s32 *)&loc, 1);
    func_02009408(param_1, 0x4e, 0, (s32 *)&loc, 1);
    func_02023590(param_1);
    func_020a1a40(0x45);
}
