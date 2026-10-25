#include "ctx.h"
extern void func_020393d8(u32 a, u32 b);
extern s32 func_02035770(u32 a, s32 b);
extern void func_0203e908(u32 a, s32 b);
void func_ov003_0217712c(u32 p0)
{
    s32 r;
    func_020393d8(p0, 0xfdc4);
    r = func_02035770(p0, 30);
    if (r != 0) {
        func_0203e908(p0, 0x3a5);
    }
}
