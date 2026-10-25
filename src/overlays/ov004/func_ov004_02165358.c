#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern u32 *data_0214f464;
extern int func_02035744(int, int);
extern void func_020393d8(int, int);
extern int func_020f5220(void);
extern void func_020f3bdc(u32);
extern int func_02035770(int, int);
extern void func_0202b2c0(int, Triple *);
extern int func_0203567c(int);
extern void func_0203e8cc(int, int, int);
extern void func_0202fd38(int);

void func_ov004_02165358(int param_1)
{
    Triple local;
    u32 uVar2;
    int iVar1;

    iVar1 = func_02035744(param_1, 18);
    if (iVar1 != 0) {
        func_020393d8(param_1, 0xff00);
    }
    *(u32 *)(param_1 + 0x484) = 0;
    *(u32 *)(param_1 + 0x2a0) = *(u32 *)(param_1 + 0x2a0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3f0) = *(u32 *)(param_1 + 0x3f0) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x3fc) = *(u32 *)(param_1 + 0x3fc) - *(u32 *)(param_1 + 0x484);
    *(u32 *)(param_1 + 0x488) = *(u32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(u32 *)(param_1 + 0x484));
    }
    local = *(Triple *)(param_1 + 0x490);
    iVar1 = func_02035770(param_1, 12);
    if (iVar1 != 0) {
        iVar1 = func_02035744(param_1, 18);
        if (iVar1 != 0) {
            uVar2 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar2;
            if ((u16)((u32)(u16)uVar2 * 180 >> 16) == 0) {
                func_0202b2c0(param_1, &local);
                return;
            }
        }
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 != 0) {
        func_0203e8cc(param_1, 0, 0x138);
        func_0202fd38(param_1);
    }
}
