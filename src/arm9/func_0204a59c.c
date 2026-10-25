#include "ctx.h"

extern s32 func_02036578(int a);
extern void func_02027654(int a, int b);
extern void func_0203942c(int a);
extern void func_02037450(int a, int b);
extern void func_02035be8(int a);
extern s32 func_020289d0(int a, int b, int c);
extern s32 func_0203592c(int a, int b);
extern s32 func_020357c8(int a, int b);
extern void func_0202fcc0(int a);
extern void func_020362f8(int a);
extern void func_0205178c(int a);

void func_0204a59c(int param_1)
{
    int iVar2;
    int bVar1;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        func_02027654(iVar2, param_1 + 620);
        func_0203942c(param_1);
        func_02037450(param_1, 0x302);
    }
    func_02035be8(param_1);
    if (func_020289d0(param_1, 0, 1) != 0) {
        bVar1 = 1;
        goto end;
    }
    if (func_0203592c(param_1, 0) != 0) {
        bVar1 = 1;
        goto end;
    }
    if (func_020357c8(param_1, 0) != 0) {
        bVar1 = 1;
        goto end;
    }
    if (iVar2 != 0) {
        bVar1 = 0;
        goto end;
    }
    func_0202fcc0(param_1);
    func_020362f8(param_1);
    bVar1 = 1;
end:
    if (!bVar1) {
        func_0205178c(param_1);
    }
}
