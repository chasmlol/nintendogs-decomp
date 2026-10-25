#include "ctx.h"

extern void func_02108e24(s32 v);

void func_02124448(u32 *p)
{
    func_02108e24(1);
    p[0] = 0;
    p[8] = 0;
    p[4] = 0xffffffffu;
    p[3] = p[4];
}
