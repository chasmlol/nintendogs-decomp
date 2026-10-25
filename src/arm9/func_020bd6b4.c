#include "ctx.h"

extern s32 func_02028130(s32 a);
extern s16 data_02132844[];

BOOL func_020bd6b4(s32 param_1, s32 param_2)
{
    s32 iVar1;
    iVar1 = func_02028130(param_1);
    return iVar1 > data_02132844[*(s16 *)(param_2 + 0x94)];
}
