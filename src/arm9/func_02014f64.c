#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_0203541c(int a);
extern void func_0203e8cc(int a, int b, int c);
extern s32 func_ov003_02198298(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0202cd10(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_0203e908(int a, int b);
extern void func_0202fd8c(int a, int b);

void func_02014f64(int param_1, int param_2)
{
    int iVar2;
    u32 uVar3;
    int bVar1;

    iVar2 = func_0203541c(param_1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar2 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(s32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(s32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        bVar1 = 1;
        goto ret;
    }
    iVar2 = func_020289d0(param_1, param_2, 0);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto ret;
    }
    iVar2 = func_0202cd10(param_1, (s16)param_2);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto ret;
    }
    bVar1 = 0;
ret:
    if (bVar1) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) > 100 && func_020357c8(param_1, 1) != 0) {
        func_0203e908(param_1, (s16)(param_2 + 0x4c));
        return;
    }
    if (param_2 == 0) {
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        if ((u16)((((u16)uVar3) * 150u) >> 16) == 0) {
            func_0202fd8c(param_1, (s16)param_2);
            return;
        }
    }
    if (*(u16 *)(param_1 + 0xfc) > 300) {
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        if ((u16)((((u16)uVar3) * 100u) >> 16) == 0) {
            func_0202fd8c(param_1, (s16)param_2);
            return;
        }
    }
    if (param_2 == 0 && *(u16 *)(param_1 + 0xfc) > 150) {
        func_0203e908(param_1, (s16)(param_2 + 0x4c));
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 1000) {
        return;
    }
    func_0203e908(param_1, (s16)(param_2 + 0x4c));
}
