#include "ctx.h"

extern u32 data_02156180;
extern s32 data_02156190;
extern u32 data_021561a0[];
extern u32 data_0215618c;
extern u32 data_0215617c;
extern u32 data_02156198;

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern void func_02080b78(u32 a);
extern u32 func_0208a5ec(void);

u32 *func_0208a240(u32 param_1)
{
    u32 irq;
    u32 iVar3;
    u32 iVar6;
    u32 *piVar7;
    u32 *piVar8;
    u32 *puVar4;

    irq = func_02080b08();
    if ((param_1 & 1) == 0) {
        goto noflag;
    }
    iVar3 = func_0208a5ec();
    if (data_02156180 != iVar3) {
        goto main;
    }
    do {
        func_02080b1c(irq);
        func_02080b78(100);
        irq = func_02080b08();
        iVar3 = func_0208a5ec();
    } while (data_02156180 == iVar3);
    goto main;
noflag:
    iVar3 = func_0208a5ec();
    if (data_02156180 == iVar3) {
        func_02080b1c(irq);
        return NULL;
    }
main:
    iVar3 = data_02156190 + 1;
    piVar8 = (u32 *)data_021561a0[data_02156190];
    data_02156190 = iVar3;
    if ((s32)iVar3 > 8) {
        data_02156190 = 0;
    }
    iVar3 = *piVar8;
    piVar7 = piVar8;
    while (iVar3 != 0) {
        piVar7 = (u32 *)*piVar7;
        iVar3 = *piVar7;
    }
    puVar4 = (u32 *)data_0215618c;
    if (puVar4 != NULL) {
        *puVar4 = (u32)piVar8;
    } else {
        data_0215617c = (u32)piVar8;
    }
    iVar3 = data_02156198;
    iVar6 = data_02156180;
    data_0215618c = (u32)piVar7;
    data_02156198 = iVar3 - 1;
    data_02156180 = iVar6 + 1;
    func_02080b1c(irq);
    return piVar8;
}
