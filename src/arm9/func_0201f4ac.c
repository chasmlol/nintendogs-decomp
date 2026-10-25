#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02035a3c(u8 *p);
extern s32 func_02035a0c(u8 *p);

void func_0201f4ac(u8 *param_1)
{
    u32 uVar4;
    u32 uVar3;
    u32 *P;
    s8 c;

    uVar4 = 0;
    if (func_02035a3c(param_1) != 0) {
        c = *(s8 *)(param_1 + 0x8d);
        switch (c) {
        case 0:
            goto a50;
        case 1:
            goto done;
        case 2:
            goto a80;
        default:
            goto a100;
        }
    a80:
        uVar4 = 80;
        goto done;
    a50:
        uVar4 = 50;
        goto done;
    a100:
        uVar4 = 100;
        goto done;
    } else {
        if (func_02035a0c(param_1) != 0) {
            c = *(s8 *)(param_1 + 0x8d);
            switch (c) {
            case 0:
                goto b30;
            case 1:
                goto done;
            case 2:
                goto b60;
            default:
                goto b100;
            }
        b60:
            uVar4 = 60;
            goto done;
        b30:
            uVar4 = 30;
            goto done;
        b100:
            uVar4 = 100;
            goto done;
        }
    }
done:
    P = *(u32 **)&data_0214f464;
    uVar3 = *P * 0x10dcd + 1;
    *P = uVar3;
    if ((u16)(((u32)(u16)uVar3 * 100) >> 16) < uVar4) {
        *(u32 *)(param_1 + 0x464) = 1;
    }
}
