#include "ctx.h"

typedef struct {
    int a;
    int b;
    int c;
} T3;

extern int data_02159444;
extern int data_0214f460;
extern int data_02152cd8;
extern void func_020ab02c(int a, int *b, int *c);
extern void func_02067e34(int *a, int *b, int *c);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern u32 func_02067df0(int *a, int *b);
extern void func_ov005_0215d198(int a, int *b, int c);

void func_ov005_0215d0ac(int param_1)
{
    int local_38[3];
    int aiStack_2c[3];
    int big[5];
    int iVar2;
    u32 uVar1;

    iVar2 = *(int *)(*(int *)&data_02159444 + 0x1c);
    *(T3 *)local_38 = *(T3 *)(iVar2 + 0x30);
    func_020ab02c(data_0214f460, aiStack_2c, (int *)(param_1 + 0x2dc));
    big[0] = *(int *)((u8 *)&data_02152cd8 + 0x4c);
    big[1] = *(int *)((u8 *)&data_02152cd8 + 0x58);
    big[2] = *(int *)((u8 *)&data_02152cd8 + 0x64);
    func_02067e34(aiStack_2c, (int *)(param_1 + 0x2dc), &big[3]);
    func_01ff832c(0x3000, &big[3], local_38, (int *)(param_1 + 0x3b4));
    *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + (big[4] * 3 - 0x6000);
    uVar1 = func_02067df0(&big[3], big);
    if ((s32)uVar1 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0xf400;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xc00;
    }
    func_ov005_0215d198(param_1, (int *)(param_1 + 0x378), 0x1004);
}
