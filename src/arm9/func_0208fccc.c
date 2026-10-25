#include "ctx.h"

extern u32 *data_02159030;

u32 func_02090b38(u32 *a, u32 b, u32 c);

u32 func_0208fccc(u32 param_1)
{
    u32 *iVar2;
    u32 uVar1;

    iVar2 = (u32 *)data_02159030[1];
    uVar1 = func_02090b38(iVar2, param_1 + 0x514, 0);
    return iVar2[2] + ((u32 *)iVar2[1])[uVar1 & 0xffff];
}
