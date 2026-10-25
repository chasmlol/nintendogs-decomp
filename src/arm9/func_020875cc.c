#include "ctx.h"
extern void func_02087d98(void);
extern void func_02087d6c(void);
u32 func_020875cc(u8 *o, u32 a2, u32 a3, u32 a4, u32 a5, u32 a6, u32 a7, u32 a8)
{
    u32 t7;
    u32 t8;
    *(u32 *)(o + 0x1c) = a2;
    *(u32 *)(o + 0x24) = a4;
    *(u32 *)(o + 0x30) = a3;
    *(u32 *)(o + 0x20) = *(u32 *)(o + 0x30);
    *(u32 *)(o + 0x2c) = a6;
    *(u32 *)(o + 0x34) = a5;
    *(u32 *)(o + 0x28) = *(u32 *)(o + 0x34);
    t7 = a7;
    if (t7 == 0) {
        t7 = (u32)func_02087d98;
    }
    *(u32 *)(o + 0x3c) = t7;
    t8 = a8;
    if (t8 == 0) {
        t8 = (u32)func_02087d6c;
    }
    *(u32 *)(o + 0x40) = t8;
    *(u32 *)(o + 0x44) = *(u32 *)(o + 0x3c);
    *(u32 *)(o + 0x38) = 0;
    *(u32 *)(o + 0x10) = *(u32 *)(o + 0x10) | 2;
    return 1;
}
