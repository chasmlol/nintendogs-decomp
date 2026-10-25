#include "ctx.h"

typedef struct { u32 a, b, c; } Vec3U;

extern u32 *data_0214f464;
extern int func_0203579c(int, int);
extern int func_02028124(int);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern void func_020381f0(int);
extern void func_ov004_02169ff4(int);
extern int func_02035770(int, int);
extern void func_ov004_0216c504(int);
extern void func_0203e908(int, int);

void func_ov004_02168cd8(int param_1)
{
    int iVar1;
    int v;

    iVar1 = func_0203579c(param_1, 10);
    if (iVar1 != 0) {
        v = func_02028124(param_1);
        *(int *)(param_1 + 0x25c) = (int)(u32)((((s64)v * -64) + 0x800) >> 12);
        *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x25c) * -16;
    }
    *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3fc) - *(int *)(param_1 + 0x484);
    *(int *)(param_1 + 0x488) = *(int *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(int *)(param_1 + 0x484));
    }
    *(Vec3U *)(param_1 + 0x26c) = *(Vec3U *)(param_1 + 0x2a0);
    *(int *)(param_1 + 0x26c) = *(int *)(param_1 + 0x26c) + 0x64000;
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    func_020381f0(param_1);
    func_ov004_02169ff4(param_1);
    iVar1 = func_02035770(param_1, 0x3e);
    if (iVar1 != 0) {
        func_ov004_0216c504(param_1);
        func_0203e908(param_1, 0x4b8);
    }
}
