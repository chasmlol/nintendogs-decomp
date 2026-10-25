#include "ctx.h"

extern s32 func_02035584(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0202e29c(u8 *p);
extern void func_020b9b18(s32 a);

s32 func_ov003_02174844(u8 *param_1, s32 param_2, s32 param_3, s32 param_4, s16 param_5, s16 param_6, s16 param_7)
{
    s32 iVar1;
    s32 iVar2;

    iVar2 = *(s16 *)(param_1 + param_2 * 2 + 0x152);
    iVar1 = 0;
    if (param_3 == iVar2) {
        iVar2 = func_02035584(param_1, param_2);
        if (iVar2 != 0) {
            func_0203e8cc(param_1, param_2, (s32)param_5);
        }
    } else if (param_4 == iVar2) {
        iVar2 = func_02035584(param_1, param_2);
        if (iVar2 != 0) {
            func_0203e8cc(param_1, param_2, (s32)param_6);
        }
    } else if ((param_5 == iVar2 || param_6 == iVar2) && (s32)*(u16 *)(param_1 + 0xfc) > (s32)param_7) {
        iVar1 = 1;
    }
    if (iVar1 != 0 && (iVar2 = func_0202e29c(param_1)) != 0) {
        func_020b9b18(2);
    }
    return iVar1;
}
