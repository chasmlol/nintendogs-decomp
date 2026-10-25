#include "ctx.h"
extern void func_020c7c24(u32 a, u32 *b, s32 c, s32 d);
typedef struct { u32 w[3]; } Blk12;
void func_020ea15c(u32 p0, u32 *p1)
{
    Blk12 loc;
    *(Blk12 *)&loc = *(Blk12 *)p1;
    loc.w[1] = 0;
    func_020c7c24(p0, loc.w, -3, 0);
}
