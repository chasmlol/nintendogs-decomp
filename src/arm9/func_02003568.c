#include "ctx.h"

extern u32 func_0207d2a4(u32 *p, u32 a);
extern u32 func_0207dc94(u32 *p, u32 a);
extern u32 func_0207d51c(u32 *p, u32 a, u32 b);
extern u32 func_0207dd14(u32 *p, u32 a, u32 b);
extern void func_0207dd68(u32 a, u32 b, u32 c);

void func_02003568(u32 *param_1)
{
    u32 iVar1;
    u32 uVar2;

    uVar2 = 0;
    switch (*param_1) {
    case 0x45585048:
        uVar2 = func_0207d2a4(param_1, 4);
        break;
    case 0x46524d48:
        uVar2 = func_0207dc94(param_1, 4);
        break;
    }
    iVar1 = 0;
    switch (*param_1) {
    case 0x45585048:
        iVar1 = func_0207d51c(param_1, uVar2, 4);
        break;
    case 0x46524d48:
        iVar1 = func_0207dd14(param_1, uVar2, 4);
        break;
    }
    func_0207dd68(iVar1, uVar2, 1);
}
