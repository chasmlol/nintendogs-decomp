#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern T3 data_02139ebc;
extern u32 func_01ffdb08(s32 v);
extern void func_020090cc(u32 a, u32 b, u32 *c, T3 *d);

void func_02008a6c(s32 p0, u32 p1)
{
    u32 v = func_01ffdb08(p0);
    if (v != 0) {
        T3 buf;
        buf = data_02139ebc;
        func_020090cc(v, p1, (u32 *)(v + 732), &buf);
    }
}
