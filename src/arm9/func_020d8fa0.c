#include "ctx.h"

extern u32 data_02152cd8;
void func_0202756c(s32 p, u32 *buf);
s32 func_02067df0(s32 *a, u32 *b);

s32 func_020d8fa0(s32 param_1)
{
    u32 buf[12];
    u32 b[3];
    s32 c[3];
    s32 v0;
    s32 v1;
    s32 v2;
    u32 t0;
    u32 t1;
    u32 t2;

    func_0202756c(param_1, buf);
    t0 = buf[6];
    v0 = *(s32 *)((u8 *)&data_02152cd8 + 0x4c);
    v1 = *(s32 *)((u8 *)&data_02152cd8 + 0x58);
    v2 = *(s32 *)((u8 *)&data_02152cd8 + 0x64);
    t1 = buf[7];
    t2 = buf[8];
    c[0] = v0;
    c[1] = v1;
    c[2] = v2;
    b[0] = t0;
    b[1] = t1;
    b[2] = t2;
    c[0] = -v0;
    c[1] = -v1;
    c[2] = -v2;
    return func_02067df0(c, b) > 0;
}
