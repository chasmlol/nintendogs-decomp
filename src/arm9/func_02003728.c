#include "ctx.h"

extern void func_0207d560(s32 *p);
extern void func_0207dd5c(s32 *p);
extern s32 *func_0207d0c4(s32 *p);
extern s32 func_0207d354(s32 *a, s32 *b);

s32 func_02003728(s32 *param_1)
{
    s32 *piVar1;

    switch (*param_1) {
    case 0x45585048:
        func_0207d560(param_1);
        break;
    case 0x46524d48:
        func_0207dd5c(param_1);
        break;
    }
    piVar1 = func_0207d0c4(param_1);
    if (piVar1 == NULL) {
        return (s32)piVar1;
    }
    switch (*piVar1) {
    case 0x45585048:
        goto call;
    case 0x46524d48:
        return 0x46524d48;
    }
    return 0x46524d48;
call:
    return func_0207d354(piVar1, param_1);
}
