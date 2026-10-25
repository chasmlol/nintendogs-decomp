#include "ctx.h"

extern void func_020776d4(u32 a, u32 *b, u32 c);

void func_02076eac(u32 *param_1)
{
    u32 uVar1;
    s32 cVar2;
    u32 local_10;

    if (((param_1[2] & 0x200) == 0) && ((param_1[2] & 1) != 0)) {
        cVar2 = (param_1[6] != 0) ? *(u8 *)((u8 *)param_1 + 0x8f) : 0;
        if (cVar2 == 1) {
            param_1[2] = param_1[2] & ~0x40;
            ((void (*)(u32 *))param_1[6])(param_1);
            cVar2 = (param_1[6] != 0) ? *(u8 *)((u8 *)param_1 + 0x8f) : 0;
            uVar1 = param_1[2] & 0x40;
        } else {
            uVar1 = 0;
        }
        if ((uVar1 == 0) && (local_10 = *(u8 *)(*param_1 + 1), (param_1[2] & 0x100) == 0)) {
            func_020776d4(0x14, &local_10, 1);
        }
        if (cVar2 == 3) {
            param_1[2] = param_1[2] & ~0x40;
            ((void (*)(u32 *))param_1[6])(param_1);
        }
    }
    *param_1 = *param_1 + 2;
}
