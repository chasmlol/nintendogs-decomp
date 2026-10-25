#include "ctx.h"

extern u32 *data_02159030;
u32 func_02090b38(u32 a, u32 b, u32 c);

u32 func_0208fc60(u32 param_1, u32 param_2)
{
    u32 iVar2;
    u32 uVar1;
    u32 iVar3;
    iVar2 = 0;
    uVar1 = 0;
    if (param_1 != 0 && param_1 == 1) {
        iVar2 = 1;
    }
    if (param_2 <= 2) {
        uVar1 = param_2;
    }
    iVar3 = data_02159030[1];
    uVar1 = func_02090b38(iVar3, iVar2 + 0x546, uVar1);
    return *(u32 *)(iVar3 + 8) + *(u32 *)(*(u32 *)(iVar3 + 4) + (uVar1 & 0xffff) * 4);
}
