#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026bac(u32 p);
extern void func_02025490(u32 p);

static inline void SwapByteRd1(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

typedef struct { u8 pad[0x948]; u32 f948; } S3;

void func_ov003_0216eaf8(u32 param_1)
{
    u8 *p = (u8 *)param_1;
    u32 t;
    *(vu16 *)(p + 0x152) = 0x158;
    *(vu16 *)(p + 0x156) = 1;
    SwapByteRd1(12, (vu8 *)(p + 0x93));
    SwapByteRd1(1, (vu8 *)(p + 0x97));
    SwapByteRd1(6, (vu8 *)(p + 0x98));
    func_02026bac(param_1);
    func_02025490(param_1);
    t = ((S3 *)param_1)->f948;
    ((S3 *)param_1)->f948 = t | 0x10;
}
