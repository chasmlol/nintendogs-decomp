#include "ctx.h"

extern u32 data_02159010;
extern void func_020fc220(u32, u32, u32, u32);

void func_020fc1c0(u32 param_1, u32 param_2, u32 param_3)
{
    u32 uVar1 = 0x2e;
    switch (*(u16 *)((u8 *)&data_02159010 + 4)) {
    case 0:
        goto dflt;
    case 1:
        goto dflt;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    default:
        goto dflt;
    }
    uVar1 = 0x2c;
dflt:
    func_020fc220(param_1, param_2, param_3, uVar1);
}
