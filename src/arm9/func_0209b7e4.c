#include "ctx.h"
extern void func_02070c18(u32 a, u32 b);
void func_0209b7e4(s32 *p0)
{
    s16 i = 0;
    u32 *e;
    if (p0[0] > 0) {
        e = (u32 *)((u8 *)p0 + 24);
        do {
            if (*e != 0) {
                func_02070c18((u32)e, 0);
            }
            i = (s16)(i + 1);
            e = e + 1;
        } while (i < p0[0]);
    }
    p0[0] = 0;
}
