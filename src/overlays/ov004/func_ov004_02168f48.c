#include "ctx.h"

struct Vec3 {
    u32 v[3];
};

extern int func_0203579c(int, int);
extern u32 func_02028124(int);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern void func_020381f0(int);
extern void func_ov004_02169ff4(int);
extern int func_02035770(int, int);
extern void func_ov004_0216c504(int);
extern void func_0203e908(int, int);

void func_ov004_02168f48(int param_1)
{
    int iVar1;
    u32 uVar2;
    u32 uVar3;

    iVar1 = func_0203579c(param_1, 10);
    if (iVar1 != 0) {
        uVar2 = func_02028124(param_1);
        *(u32 *)(param_1 + 0x25c) = (u32)(((s64)(s32)uVar2 * -48 + 0x800) >> 12);
        *(u32 *)(param_1 + 0x264) = *(u32 *)(param_1 + 0x25c) * -14;
    }
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x26c) = *(u32 *)(param_1 + 0x26c) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    *(struct Vec3 *)(param_1 + 0x26c) = *(struct Vec3 *)(param_1 + 0x2a0);
    *(u32 *)(param_1 + 0x26c) = *(u32 *)(param_1 + 0x26c) + 0x64000;
    func_0203942c(param_1);
    func_02037450(param_1, 0x300);
    func_020381f0(param_1);
    func_ov004_02169ff4(param_1);
    iVar1 = func_02035770(param_1, 0x2f);
    if (iVar1 != 0) {
        func_ov004_0216c504(param_1);
        func_0203e908(param_1, 0x4b8);
        return;
    }
    return;
}
