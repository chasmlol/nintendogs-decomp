#include "ctx.h"

u8 *func_0207fe24(u8 *p);
void func_0207f4e0(u8 *p);

void func_0207ff08(u8 *param_1)
{
    u8 *p;

    if (*(u32 *)(param_1 + 0x7c) == 0) {
        return;
    }
    do {
        p = func_0207fe24(param_1);
        *(u32 *)(p + 8) = 0;
        *(u32 *)(p + 4) = 0;
        func_0207f4e0(p);
    } while (*(u32 *)(param_1 + 0x7c) != 0);
}
