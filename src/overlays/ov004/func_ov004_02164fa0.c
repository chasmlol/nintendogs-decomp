#include "ctx.h"

struct Vec3 {
    u32 v[3];
};

extern u32 *data_0214f464;
extern u32 *data_0214f464;
extern int func_02035744(int, int);
extern void func_020393d8(int, int);
extern int func_020f5220(void);
extern void func_020f3bdc(int);
extern int func_02035770(int, int);
extern void func_0202b2c0(int, struct Vec3 *);
extern int func_0203567c(int);
extern void func_0203e8cc(int, int, int);
extern void func_0202fd38(int);

void func_ov004_02164fa0(int param_1)
{
    int iVar1;
    u32 uVar2;
    struct Vec3 local_18;

    iVar1 = func_02035744(param_1, 0x16);
    if (iVar1 != 0) {
        func_020393d8(param_1, 0xc0);
    }
    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    iVar1 = func_020f5220();
    if (iVar1 != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    local_18 = *(struct Vec3 *)(param_1 + 0x490);
    iVar1 = func_02035770(param_1, 0xc);
    if (iVar1 != 0 && (iVar1 = func_02035744(param_1, 0x12), iVar1 != 0) &&
        (uVar2 = *data_0214f464 * 0x10dcd + 1, *data_0214f464 = uVar2,
         (u16)((((u16)uVar2) * 0xb4u) >> 16) == 0)) {
        func_0202b2c0(param_1, &local_18);
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 0, 0x138);
        func_0202fd38(param_1);
        return;
    }
    return;
}
