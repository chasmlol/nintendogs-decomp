#include "ctx.h"

extern int data_0214f130;
extern u32 func_01ffdb08(int a);
extern int func_02027540(u32 a);
extern void func_02029180(u32 a, int b, u8 c);

void func_020a4368(void)
{
    u32 bVar6;
    int iVar5;
    u32 uVar3;
    int iVar2;
    u32 two;
    u32 c49;
    int iVar4;
    int *piVar7;
    int iVar1;

    bVar6 = 1;
    iVar5 = 0;
    piVar7 = (int *)(data_0214f130 + 44);
    iVar2 = piVar7[2] + (*(int *)((u8 *)data_0214f130 + 0x2c) + piVar7[1]);
    two = 2;
    c49 = 49;
    asm { ldr iVar1, =0x10dcd }
    do {
        uVar3 = func_01ffdb08(iVar5);
        if ((uVar3 != 0) && (iVar4 = func_02027540(uVar3), *(u16 *)(iVar4 + 0x26) < 5)) {
            iVar2 = iVar2 * iVar1 + 1;
            if ((u16)((u32)(iVar2 * 0x10000) >> 0x1f) != 0) {
                bVar6 = two;
            }
            func_02029180(uVar3, c49, bVar6);
        }
        iVar5 = (iVar5 + 1) * 0x10000 >> 0x10;
    } while (iVar5 < 3);
}
