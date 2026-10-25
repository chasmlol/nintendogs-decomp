#include "ctx.h"

extern u32 data_02152d58[];

void func_02074730(u32 a, s32 b, s32 c, s32 d)
{
    data_02152d58[a] = (0x3ff & (b >> 3)) | ((0x3ff & (c >> 3)) << 10) | ((0x3ff & (d >> 3)) << 20) | (a << 30);
}
