#include "ctx.h"
extern u32 func_01ffdb08(u32 a);
extern void func_020090cc(u32 a, u32 b, u32 c, u32 d);
extern u32 data_02139ed4[];
typedef struct { u32 w[3]; } Blk12;
void func_02008af8(u32 p0, u32 p1)
{
    u32 r = func_01ffdb08(p0);
    Blk12 blk;
    if (r != 0) {
        blk = *(Blk12 *)data_02139ed4;
        func_020090cc(r, p1, r + 732, (u32)&blk);
    }
}
