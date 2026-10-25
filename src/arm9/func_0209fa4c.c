#include "ctx.h"

extern s32 data_02159198[];
extern s32 data_02159178[];
extern s32 func_0209e494(void);
extern void func_02070c18(s32 *p, s32 v);

u32 func_0209fa4c(s32 param_1)
{
    s32 *piVar1;
    s32 iVar2;
    s32 iVar3;

    piVar1 = data_02159198;
    iVar2 = func_0209e494();
    iVar3 = *piVar1;
    data_02159178[2] = -1;
    if (iVar3 != 0 && iVar2 == 0) {
        func_02070c18(piVar1, param_1);
        piVar1[0x40] = 0;
        return 1;
    }
    return 0;
}
