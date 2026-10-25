#include "ctx.h"

extern u8 *data_0215be48;
extern void func_0210a854(u32 a);

void func_021089e0(void)
{
    s32 v = *(s32 *)(data_0215be48 + 0xa8);
    if (v == 7) {
        goto call;
    }
    if (v != 8) {
        return;
    }
call:
    func_0210a854(12);
}
