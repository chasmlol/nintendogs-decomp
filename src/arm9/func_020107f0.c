#include "ctx.h"

extern int func_02022dec(u8 *p, int a, int b);
extern int func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, int a, int b);
extern int func_ov003_02198298(u8 *p);
extern int func_020289d0(u8 *p, int a, int b);
extern int func_0202cd10(u8 *p, int a);
extern int func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, int a);

void func_020107f0(u8 *param_1)
{
    int bFlag;
    int bVar1;
    int iVar2;

    bFlag = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bFlag) {
        iVar2 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bFlag = (iVar2 != 0);
    }
    iVar2 = func_0203541c(param_1);
    if (iVar2 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(iVar2 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar2 = func_ov003_02198298(param_1);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        bVar1 = 1;
        goto test;
    }
    iVar2 = func_020289d0(param_1, 0, 0);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto test;
    }
    if (bFlag) {
        goto zero;
    }
    iVar2 = func_0202cd10(param_1, 0);
    if (iVar2 != 0) {
        bVar1 = 1;
        goto test;
    }
zero:
    bVar1 = 0;
test:
    if (!bVar1) {
        iVar2 = func_0203567c(param_1);
        if (iVar2 != 0) {
            func_0203e908(param_1, 0);
        }
    }
}
