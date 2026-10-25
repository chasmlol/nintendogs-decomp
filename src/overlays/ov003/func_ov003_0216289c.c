#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 a, b, c; } T3;

extern u8 data_0213b7d0[];

void func_02026c24(u8 *p);
void func_02025548(u8 *p);
void func_0202da00(u8 *p, u32 a);
u32 func_02028130(u8 *p);
void func_02009408(u8 *p, u32 a, u32 b, s32 *c, u32 d);
void func_02023590(u8 *p);
void func_020a1a40(u32 a);

void func_ov003_0216289c(u8 *param_1)
{
    T3 loc;
    s64 t;
    s32 uVar1;

    *(u16 *)(param_1 + 0x152) = 0x1ea;
    param_1[151] = 4;
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(0x1c + data_0213b7d0));
    loc = *(T3 *)(0x2dc + param_1);
    uVar1 = func_02028130(param_1);
    t = (s64)(s32)uVar1 * (s64)0x1ccd + 0x800;
    loc.b = loc.b + (s32)((u64)t >> 12);
    *(T3 *)(0x490 + param_1) = loc;
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
