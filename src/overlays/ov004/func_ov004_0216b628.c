#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02027668(int, int);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_0203567c(int);
extern void func_0203e8cc(int, int, int);

void func_ov004_0216b628(int param_1, int param_2)
{
    u32 uVar2;
    int iVar1;

    if (param_2 == 0) {
        return;
    }
    func_02027668(param_2, param_1 + 0x26c);
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    uVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar2;
    switch ((u16)((u32)(u16)uVar2 * 6 >> 16)) {
    case 0:
        func_0203e8cc(param_1, 1, 0x3a);
        return;
    case 1:
        func_0203e8cc(param_1, 1, 0x3b);
        return;
    case 2:
        func_0203e8cc(param_1, 1, 0x3c);
        return;
    case 3:
        func_0203e8cc(param_1, 1, 0x3d);
        return;
    case 4:
        func_0203e8cc(param_1, 1, 0x3e);
        return;
    case 5:
        func_0203e8cc(param_1, 1, 0x3f);
        return;
    }
}
