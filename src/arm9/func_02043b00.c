#include "ctx.h"

extern int data_0214f464;
extern void func_0208f3fc(int a);
extern u32 *func_0208f43c(int *a, int b);

void func_02043b00(int *param_1)
{
    int iVar2;
    u32 *puVar3;
    int iVar4;

    iVar4 = 0;
    do {
        iVar2 = *(int *)(data_0214f464 + iVar4 * 4 + 0x48);
        if (iVar2 != 0) {
            func_0208f3fc(iVar2 + 0x98);
        }
        iVar4 = (s16)(iVar4 + 1);
    } while (iVar4 < 3);
    iVar4 = data_0214f464;
    puVar3 = func_0208f43c(param_1, *(int *)(iVar4 + 0x7404));
    *(u32 **)(iVar4 + 0x7408) = puVar3;
    iVar4 = data_0214f464;
    puVar3 = func_0208f43c(param_1, *(int *)(iVar4 + 0x7418));
    *(u32 **)(iVar4 + 0x741c) = puVar3;
}
