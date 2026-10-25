#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

typedef struct { u32 w[3]; } T3;

extern u32 data_0213b7d0;

extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern s32 func_02028130(u8 *p);
extern void func_02009408(u8 *p, u32 a, u32 b, u32 *c, u32 d);
extern void func_02023590(u8 *p);
extern void func_020a1a40(u32 a);

void func_ov003_02162588(u8 *p)
{
    u32 pad;
    u32 arr[3];

    *(u16 *)(p + 0x152) = 106;
    *(u16 *)(p + 0x154) = 69;
    *(u8 *)(p + 151) = 4;
    func_02026c24(p);
    func_02025548(p);
    func_0202da00(p, *(u32 *)((u8 *)&data_0213b7d0 + 0x24));
    *(T3 *)arr = *(T3 *)(p + 0x2dc);
    arr[1] = arr[1] + FX_Mul(func_02028130(p), 0x1ccd);
    *(T3 *)(p + 0x490) = *(T3 *)arr;
    func_02009408(p, 79, 0, arr, 1);
    func_02009408(p, 73, 0, arr, 1);
    func_02009408(p, 74, 0, arr, 1);
    func_02009408(p, 75, 0, arr, 1);
    func_02009408(p, 76, 0, arr, 1);
    func_02009408(p, 77, 0, arr, 1);
    func_02009408(p, 78, 0, arr, 1);
    func_02023590(p);
    func_020a1a40(69);
}
