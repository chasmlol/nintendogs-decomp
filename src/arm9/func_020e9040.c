#include "ctx.h"

extern u32 data_0215be34;
extern void func_02081310(s32 a);

void func_020e9040(void)
{
    s32 *p;
    p = (s32 *)data_0215be34;
    if (p != 0) {
        func_02081310(*p);
        return;
    }
}
