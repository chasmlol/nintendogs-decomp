#include "ctx.h"
extern u32 data_0215942c;
extern u32 data_021425cc;
extern int func_01ffdb08(int a);
extern int func_0202817c(int a);
extern int func_02028100(int a);
extern int func_0208fc60(int a, u32 b);

int func_020b38a0(int param_1, u32 param_2)
{
    int iVar3 = (int)&data_021425cc;
    int iVar2 = func_01ffdb08((int)*(s16 *)(*(int *)&data_0215942c + 14));
    if (param_1 == 0x30002) {
        goto caseA;
    }
    if (param_1 != 0x30005) {
        goto done;
    }
    goto caseB;
caseA:
    iVar3 = func_0202817c(iVar2) + 0x78;
    goto done;
caseB:
    if (iVar2 == 0) {
        goto done;
    }
    iVar3 = func_0208fc60(func_02028100(iVar2), param_2);
done:
    return iVar3;
}
