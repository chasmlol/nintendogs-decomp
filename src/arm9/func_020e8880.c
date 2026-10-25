#include "ctx.h"

u32 func_020bd858(u8 *p);
u32 func_020bd868(u8 *p);
u32 func_020bf1ec(u8 *p);

u32 func_020e8880(u8 *param_1)
{
    u32 *iVar5;
    s32 iVar4;
    u32 *q;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        return func_020bd858(param_1);
    case 1:
        break;
    case 2:
        iVar5 = *(u32 **)(param_1 + 0x214);
        iVar4 = 0;
        do {
            q = iVar5 + iVar4;
            q[8] = 0;
            iVar4 = iVar4 + 1;
        } while (iVar4 < 7);
        return func_020bd868(param_1);
    case 3:
        *(u32 *)(param_1 + 0xa8) = 0;
        return (u32)param_1;
    case 4:
        return func_020bf1ec(param_1);
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    }
    return (u32)param_1;
}
