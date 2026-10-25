#pragma avoid_byte strb
#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_02028124(u8 *p);
extern void func_02025548(u8 *p);

typedef struct { u8 pad[0x152]; u16 s0; u8 pad2[2]; u16 s1; } Obj;

void func_ov003_0216fa84(u8 *p)
{
    s32 x;
    ((Obj *)p)->s0 = 368;
    ((Obj *)p)->s1 = 4;
    *(u8 *)(p + 151) = 4;
    *(u8 *)(p + 152) = 1;
    x = func_02028124(p);
    *(s32 *)(p + 0x240) = FX_Mul(x, -1024);
    *(u32 *)(p + 0x244) = 0x111;
    *(u32 *)(p + 0x24c) = 0x99c;
    func_02025548(p);
}
