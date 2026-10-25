#include "ctx.h"

typedef void (*FnCb)(u8 *);

extern void func_020777d0(u8 *p, u32 n);

void func_020768e4(u8 *param_1, u32 param_2, u8 *param_3)
{
    u32 uVar1;
    u8 cVar2;

    if (*(void **)(param_1 + 0x20) != NULL) {
        cVar2 = param_1[0x91];
    } else {
        cVar2 = 0;
    }
    if (cVar2 == 1) {
        *(u32 *)(param_1 + 8) &= ~0x40;
        ((FnCb)*(void **)(param_1 + 0x20))(param_1);
        if (*(void **)(param_1 + 0x20) != NULL) {
            cVar2 = param_1[0x91];
        } else {
            cVar2 = 0;
        }
        uVar1 = *(u32 *)(param_1 + 8) & 0x40;
    } else {
        uVar1 = 0;
    }
    if (uVar1 == 0 && (*(u32 *)(param_1 + 8) & 0x100) == 0) {
        func_020777d0(param_3 + *(s32 *)(param_3 + 8), *(u32 *)(param_3 + 0xc));
    }
    if (cVar2 == 2) {
        *(u32 *)(param_1 + 8) &= ~0x40;
        ((FnCb)*(void **)(param_1 + 0x20))(param_1);
        if (*(void **)(param_1 + 0x20) != NULL) {
            cVar2 = param_1[0x91];
        } else {
            cVar2 = 0;
        }
    }
    if (cVar2 == 3) {
        *(u32 *)(param_1 + 8) &= ~0x40;
        ((FnCb)*(void **)(param_1 + 0x20))(param_1);
    }
}
