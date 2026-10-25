#include "ctx.h"
void func_02000c88(s32 *out)
{
    vu16 *r = (vu16 *)0x04000204;
    u32 v;
    out[0] = (s32)(*r & 12) >> 2;
    out[1] = (s32)(*r & 16) >> 4;
    v = *r;
    v = (v & ~12u) | 12u;
    *r = v;
    v = *r;
    v = v & ~16u;
    *r = v;
}
