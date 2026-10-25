#include "ctx.h"
extern u8 func_02089e78(u32 a);
extern u32 *func_0208a240(u32 a);
extern void func_02089d08(void);
void func_02089f0c(u32 param_1)
{
    u8 bVar1;
    u32 *piVar2;
    bVar1 = func_02089e78(param_1);
    if (bVar1) {
        return;
    }
    do {
        piVar2 = func_0208a240(0);
    } while (piVar2 != NULL);
    bVar1 = func_02089e78(param_1);
    if (bVar1) {
        return;
    }
    func_02089d08();
    bVar1 = func_02089e78(param_1);
    if (bVar1) {
        return;
    }
    do {
        func_0208a240(1);
        bVar1 = func_02089e78(param_1);
    } while (!bVar1);
}
