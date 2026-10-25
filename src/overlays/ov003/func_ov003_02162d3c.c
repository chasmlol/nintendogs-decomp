#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))

extern u8 data_0213b7d0[];
extern void func_02026c24(u8 *);
extern void func_02025548(u8 *);
extern void func_0202da00(u8 *, u32);
extern u32 func_02028130(u8 *);
extern void func_02009408(u8 *, s32, s32, u32 *, s32);
extern void func_02023590(u8 *);
extern void func_020a1a40(s32);

void func_ov003_02162d3c(u8 *p)
{
    u32 L[3];
    s32 iVar;
    u32 uVar1;

    *(u16 *)(p + 256 + 82) = 0x4c;
    *(u16 *)(p + 256 + 84) = 0x43;
    *(u8 *)(p + 151) = 4;
    func_02026c24(p);
    func_02025548(p);
    func_0202da00(p, *(u32 *)(data_0213b7d0 + 0x10));
    *(T3 *)L = *(T3 *)(p + 0x2dc);
    uVar1 = func_02028130(p);
    iVar = (s32)L[1] + FXM(uVar1, 0x1ccd);
    L[1] = iVar;
    *(T3 *)(p + 0x490) = *(T3 *)L;
    func_02009408(p, 0x4f, 0, L, 1);
    func_02009408(p, 0x49, 0, L, 1);
    func_02009408(p, 0x4a, 0, L, 1);
    func_02009408(p, 0x4b, 0, L, 1);
    func_02009408(p, 0x4c, 0, L, 1);
    func_02009408(p, 0x4d, 0, L, 1);
    func_02009408(p, 0x4e, 0, L, 1);
    func_02023590(p);
    func_020a1a40(0x45);
}
