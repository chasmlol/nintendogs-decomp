#include "ctx.h"

extern u32 data_02147ee8;
extern void func_020fbf18(int a, int *b, u32 c, u32 d, u32 e);
extern void func_020fc114(int a, int b, int c, int d);

void func_0210a484(int *param_1)
{
    u32 uVar1;
    u32 uVar2;
    int iVar4;
    int *piVar3;
    u16 *puVar5;

    uVar1 = 0xffff;
    piVar3 = param_1 + 0x3c;
    iVar4 = 0;
    do {
        iVar4 = iVar4 + 1;
        *(u16 *)((int)piVar3 + 4) = (u16)uVar1;
        uVar2 = 0xffff;
        piVar3 = piVar3 + 4;
    } while (iVar4 < 0x14);
    piVar3 = param_1 + 0x3c;
    iVar4 = 0;
    puVar5 = (u16 *)&data_02147ee8;
    do {
        if (*puVar5 == uVar2) {
            break;
        }
        func_020fbf18(2, piVar3, *puVar5, 0x100, 0);
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
        puVar5 = puVar5 + 1;
    } while (iVar4 < 0x14);
    *param_1 = 0;
    func_020fc114(2, (int)(param_1 + 0x3c), *param_1, 0x10);
}
