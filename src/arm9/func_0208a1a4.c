#include "ctx.h"

s32 func_02089c68(u32 p);
u32 func_02089cb0(void);
s32 func_02089dd8(void);
void func_02089f9c(u32 v);
void func_02089d08(void);
u32 func_0208a240(u32 v);

u32 func_0208a1a4(u32 param_1)
{
    u32 piVar2;
    s32 iVar3;

    if (func_02089c68(param_1) == 0) {
        return 0;
    }
    piVar2 = func_02089cb0();
    if (piVar2 != 0) {
        return piVar2;
    }
    if ((param_1 & 1) == 0) {
        return 0;
    }
    iVar3 = func_02089dd8();
    if (iVar3 > 0) {
        do {
            piVar2 = func_0208a240(0);
        } while (piVar2 != 0);
        piVar2 = func_02089cb0();
        if (piVar2 != 0) {
            return piVar2;
        }
    } else {
        func_02089f9c(1);
    }
    func_02089d08();
    do {
        func_0208a240(1);
        piVar2 = func_02089cb0();
    } while (piVar2 == 0);
    return piVar2;
}
