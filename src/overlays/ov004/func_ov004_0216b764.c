#include "ctx.h"

extern int *data_0214f464;
extern int func_0203579c(int, int);
extern int func_0202fcd4(int);
extern void func_02027654(int, int);
extern void func_02067e34(int, int, int);
extern void func_01ff832c(int, int, int, int);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216b764(int param_1)
{
    int iVar1;
    int bVar2;

    bVar2 = 0;
    iVar1 = func_0203579c(param_1, 0x1c);
    if (iVar1 != 0 &&
        (iVar1 = *data_0214f464 * 0x10dcd + 1, *data_0214f464 = iVar1,
         (u16)((u32)(iVar1 << 16) >> 31) != 0)) {
        bVar2 = 1;
    }
    iVar1 = func_0202fcd4(param_1);
    if (iVar1 != 0) {
        func_02027654(iVar1, param_1 + 0x3b4);
        func_02067e34(param_1 + 0x3b4, param_1 + 0x2a0, param_1 + 0x26c);
        func_01ff832c(0x64000, param_1 + 0x26c, param_1 + 0x2a0, param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
    }
    iVar1 = func_ov004_0216be28(param_1, iVar1);
    if (iVar1 == 0) {
        if (bVar2) {
            func_0203e908(param_1, 0x4a0);
            return;
        }
        return;
    }
    return;
}
