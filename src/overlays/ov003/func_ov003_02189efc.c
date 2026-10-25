#include "ctx.h"

typedef struct {
    int a;
    int b;
    int c;
} T3;

extern int data_0214f460;
extern int data_02152cd8;
extern int data_02159444;
extern void func_020ab02c(int a, int *b, int *c);
extern void func_02067e34(int *a, int *b, int *c);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern u32 func_02067df0(int *a, int *b);
extern void func_ov003_0218ab10(int a, int b, int c, int *d, int e, int f);

void func_ov003_02189efc(int param_1)
{
    int big[3];
    int aiStack_24[3];
    int local18[3];
    int iVar1;
    u32 uVar2;

    big[0] = *(int *)((u8 *)&data_02152cd8 + 0x4c);
    big[1] = *(int *)((u8 *)&data_02152cd8 + 0x58);
    big[2] = *(int *)((u8 *)&data_02152cd8 + 0x64);
    func_020ab02c(data_0214f460, aiStack_24, (int *)(param_1 + 0x2c4));
    func_02067e34(aiStack_24, (int *)(param_1 + 0x2c4), aiStack_24);
    iVar1 = *(int *)(*(int *)&data_02159444 + 0x1c);
    *(T3 *)local18 = *(T3 *)(iVar1 + 0x30);
    func_01ff832c(0x3000, aiStack_24, local18, (int *)(param_1 + 0x3b4));
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 0xa000;
    uVar2 = func_02067df0(aiStack_24, big);
    if ((s32)uVar2 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0x1000;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xf000;
    }
    func_ov003_0218ab10(param_1, 1, 0x1f, (int *)(param_1 + 0x348), 0x14d2, 2);
}
