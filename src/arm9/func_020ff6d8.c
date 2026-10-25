#include "ctx.h"

extern u32 data_02147b38;
extern u32 data_02147b14;
extern u32 data_02147b24;
extern u32 data_02147b34;
extern s32 func_020fc76c(u32 p0, u32 p1, u32 p2, u32 p3, u32 p4);

void func_020ff6d8(void)
{
    func_020fc76c(0, (u32)&data_02147b14, (u32)&data_02147b24, (u32)&data_02147b34, (u32)&data_02147b38);
}
