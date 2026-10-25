#include "ctx.h"

extern void func_0208278c(u32 a);
extern void func_02082878(int p, void *q);
extern void func_020835f8(int p, void *q);
extern void func_02082d98(int p, void *q);

void func_02081c70(int param_1)
{
    int iVar5;
    u32 *puVar3;
    void (*pcVar2)(int, void *);
    u32 *piVar4;
    u32 uVar1;

    pcVar2 = (void (*)(int, void *))0;
    iVar5 = *(int *)(param_1 + 0x34);
    puVar3 = *(u32 **)(iVar5 + 0x18);
    if (((*(u32 *)(*puVar3)) << 15) >> 31 == 0) {
        return;
    }
    func_0208278c((u32)*(u8 *)(puVar3[5] + 0xf) * 20 + *(u32 *)(param_1 + 0x20));
    uVar1 = ((u32)(*(u16 *)puVar3[5]) << 23) >> 30;
    switch (uVar1) {
    case 0:
        pcVar2 = (void (*)(int, void *))func_020835f8;
        break;
    case 1:
        pcVar2 = (void (*)(int, void *))func_02082d98;
        break;
    case 2:
        pcVar2 = (void (*)(int, void *))func_02082878;
        break;
    }
    piVar4 = *(u32 **)(iVar5 + 0x10);
    if (piVar4 == (u32 *)0) {
        return;
    }
    do {
        pcVar2(param_1, piVar4);
        piVar4 = (u32 *)*piVar4;
    } while (piVar4 != (u32 *)0);
}
