#include "ctx.h"

extern u32 data_02142a2c;
extern void func_020bd858(u8 *p);
extern void func_020bd868(u8 *p);
extern void func_020be3d4(u8 *p, u8 *q);
extern void func_020c3970(u8 *p);

void func_020c38c0(u8 *param_1)
{
    s32 iVar2;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        func_020bd858(param_1);
        return;
    case 1:
        break;
    case 2:
        iVar2 = *(s32 *)(param_1 + 0x214);
        func_020bd868(param_1);
        *(u32 *)(iVar2 + 0xc) = data_02142a2c;
        return;
    case 3:
        iVar2 = *(s32 *)(param_1 + 0x214);
        func_020be3d4(param_1, param_1 + 200);
        *(u32 *)(param_1 + 0xa8) = 0;
        *(u32 *)(iVar2 + 0xc) = data_02142a2c;
        return;
    case 4:
        func_020c3970(param_1);
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        break;
    }
}
