#include "ctx.h"

extern s32 func_0202fcd4(void);
extern void func_02039448(int);
extern void func_02027668(s32, int);
extern void func_02027654(s32, int);
extern void func_02037450(int, int);
extern s32 func_ov004_0216be28(int, s32);
extern s32 func_0203567c(int);
extern void func_0203e908(int, s32);

void func_ov004_0216aa4c(int param_1)
{
    s32 iVar1;

    iVar1 = func_0202fcd4();
    if (iVar1 != 0) {
        func_02039448(param_1);
        func_02027668(iVar1, param_1 + 0x278);
        func_02027654(iVar1, param_1 + 0x3b4);
        func_02037450(param_1, 0x300);
    }
    if (func_ov004_0216be28(param_1, iVar1) != 0) {
        return;
    }
    if (func_0203567c(param_1) != 0) {
        func_0203e908(param_1, 0x4cf);
    }
}
