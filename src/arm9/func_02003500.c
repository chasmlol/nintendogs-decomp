#include "ctx.h"

extern s32 func_0207d51c(u32 *p, u32 v, u32 n);
extern s32 func_0207dd14(u32 *p, u32 v, u32 n);
extern void func_0207dd68(s32 r, u32 v, u32 n);

void func_02003500(u32 *param_1, u32 param_2)
{
    s32 iVar1 = 0;
    switch (param_1[0]) {
    case 0x45585048:
        iVar1 = func_0207d51c(param_1, param_2, 4);
        break;
    case 0x46524d48:
        iVar1 = func_0207dd14(param_1, param_2, 4);
        break;
    }
    func_0207dd68(iVar1, param_2, 1);
}
