#include "ctx.h"

extern void func_020895a8(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_0208974c(u32 p1, s32 p2, s32 p3, s32 p4, u32 p5, u32 p6, s32 p7, s32 p8, s32 p9, s32 p10)
{
    func_020895a8(14, p1 | ((u32)p9 << 16), p3, p6 | (((u32)p7 << 24) | ((u32)p8 << 22)),
                  p5 | ((((u32)p4 << 26) | ((u32)p2 << 24)) | ((u32)p10 << 16)));
}
