#include "ctx.h"

typedef struct { u32 a, b, c; } Vec3U;

extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_02039448(int);
extern void func_02067e68(int, Vec3U *, int);
extern void func_02037450(int, int);
extern int func_0203567c(int);
extern void func_0202fd38(int);

void func_ov004_0216472c(int param_1)
{
    Vec3U local;
    int iVar1;

    *(int *)(param_1 + 0x484) = 0;
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(int *)(param_1 + 0x484));
    }
    local = *(Vec3U *)(param_1 + 0x490);
    func_02039448(param_1);
    func_02067e68(param_1 + 0x2a0, &local, param_1 + 0x278);
    func_02037450(param_1, 768);
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0202fd38(param_1);
    }
}
