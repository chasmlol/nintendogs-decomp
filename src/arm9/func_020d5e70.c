#include "ctx.h"
extern u16 data_021594d8;
extern s32 func_020654a4(u32 a, u32 b, u32 c, u32 d, u32 e);
BOOL func_020d5e70(u32 param_1, u32 param_2, s16 *param_3)
{
    s32 iVar1;
    if (data_021594d8 == 0x8000) {
        *param_3 = 3;
        return FALSE;
    }
    if (data_021594d8 == 0) {
        *param_3 = 0x15;
        return FALSE;
    }
    iVar1 = func_020654a4(param_1, 3, 0x11, param_2, 0x1e);
    *param_3 = (s16)iVar1;
    return *(u16 *)param_3 == 2;
}
