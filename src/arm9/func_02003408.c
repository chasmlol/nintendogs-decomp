#include "ctx.h"

extern u8 data_0214e858[];
extern u8 data_0214e77c[];
extern u8 data_0214f138[];
extern u8 data_027c0000[];

typedef void (*Fn)(u8 *, u32);

void func_02003408(void)
{
    u32 uVar1;
    Fn f;
    u32 base;
    uVar1 = *(vu16 *)0x04000006;
    f = *(Fn *)(data_0214e858 + 0x14);
    if (f != 0) {
        f(data_0214e858, uVar1);
    }
    f = *(Fn *)(data_0214e77c + 0x14);
    if (f != 0) {
        f(data_0214e77c, uVar1);
    }
    f = *(Fn *)(data_0214f138 + 0x10);
    if (f != 0) {
        f(data_0214f138, uVar1);
    }
    base = (u32)data_027c0000;
    base += 0x3000;
    *(u32 *)(base + 0xff8) = *(u32 *)(base + 0xff8) | 2;
}
