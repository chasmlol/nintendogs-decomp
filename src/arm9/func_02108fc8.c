#include "ctx.h"

extern u8 *data_0215be48;
void func_02117cf0(void *p);

void func_02108fc8(void)
{
    u8 *base = data_0215be48;
    u8 *r4 = base + 0x5028;
    if (*(u32 *)(base + 0x5028) != 0) {
        func_02117cf0(r4 + 0x198);
        func_02117cf0(r4 + 0x1b8);
    }
}
