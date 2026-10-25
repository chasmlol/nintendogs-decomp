#include "ctx.h"
extern void func_0206fff4(u32 a);
void func_02070eb4(u8 *p)
{
    if (*(u32 *)(p + 0x44) != 0) {
        func_0206fff4(*(u32 *)(p + 0x44));
        *(u32 *)(p + 0x44) = 0;
        *(u32 *)(p + 0x48) = 0;
    }
}
