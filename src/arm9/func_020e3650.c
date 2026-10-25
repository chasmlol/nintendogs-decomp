#include "ctx.h"

extern void func_020bd858(u8 *p);
extern void func_020bd868(u8 *p);
extern void func_020e3708(u8 *p);
extern void func_020e37e4(u8 *p);
extern void func_020bf1ec(u8 *p);

void func_020e3650(u8 *param_1)
{
    u8 *iVar1;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 2:
        iVar1 = *(u8 **)(param_1 + 0x214);
        *(u32 *)(*(u8 **)(iVar1 + 0xa4) + 0xc) = 0;
        *(u32 *)(*(u8 **)(iVar1 + 0xa4) + 8) = 0;
        *(u32 *)(*(u8 **)(iVar1 + 0xa0) + 0xc) = 0;
        *(u32 *)(*(u8 **)(iVar1 + 0xa0) + 8) = 0;
        func_020bd868(param_1);
        *(u32 *)(iVar1 + 0x34) = 0;
        return;
    case 3:
        func_020e37e4(param_1);
        return;
    case 1:
        func_020e3708(param_1);
        return;
    case 4:
        func_020bf1ec(param_1);
        return;
    case 8:
        *(u32 *)(*(u8 **)(param_1 + 0x214) + 0x34) = 1;
        return;
    }
}
