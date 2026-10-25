#include "ctx.h"

extern s32 func_ov004_0215ca68(void);
extern void func_020ad7c8(u8 *p, s32 v);

u32 func_020b496c(u8 *param_1)
{
    s32 uVar1;
    u32 uVar2;

    uVar1 = func_ov004_0215ca68();
    uVar2 = 0;
    switch (uVar1) {
    case -1:
    case 0:
        break;
    case 1:
        func_020ad7c8(param_1, 0x2b);
        return 1;
    case 2:
        *(u16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 0xb;
        return 1;
    case 3:
        *(u16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 4;
        return 1;
    case 4:
        *(u16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 0xf;
        return 1;
    case 5:
        *(u16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 0x12;
        uVar2 = 1;
        break;
    }
    return uVar2;
}
