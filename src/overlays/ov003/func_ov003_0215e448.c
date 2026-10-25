#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern void func_020264f4(int a);
extern void func_020255a4(int a);
extern void func_0202da00(int a, int b);
extern u32 func_02028130(int a);
extern void func_02009408(int a, int b, int c, s32 *d, int e);
extern void func_02023590(int a);
extern void func_020a1a40(int a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_0215e448(int param_1)
{
    s32 blk[4];
    u32 uVar1;

    *(u16 *)((u8 *)param_1 + 256 + 82) = 0x1b;
    *(u16 *)((u8 *)param_1 + 256 + 84) = 1;
    SwapByte(4, (vu8 *)(151 + param_1));
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 2);
    *(T3 *)&blk[0] = *(T3 *)(param_1 + 0x2dc);
    uVar1 = func_02028130(param_1);
    blk[1] += (s32)((((s64)(int)uVar1) * 0x1ccd + 0x800) >> 12);
    *(T3 *)((u32)param_1 + 0x490) = *(T3 *)&blk[0];
    func_02009408(param_1, 0x4f, 0, &blk[0], 1);
    func_02009408(param_1, 0x49, 0, &blk[0], 1);
    func_02009408(param_1, 0x4a, 0, &blk[0], 1);
    func_02009408(param_1, 0x4b, 0, &blk[0], 1);
    func_02009408(param_1, 0x4c, 0, &blk[0], 1);
    func_02009408(param_1, 0x4d, 0, &blk[0], 1);
    func_02009408(param_1, 0x4e, 0, &blk[0], 1);
    func_02023590(param_1);
    func_020a1a40(0x45);
}
