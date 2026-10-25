#include "ctx.h"

extern int data_0214f460;
extern u8 data_02152cd8[];
extern void func_02039448(int p);
extern void func_020ab064(int a, int *b);
extern void func_01ff832c(u32 a, int *b, int *c, int *d);
extern void func_02037450(int p, int q);
extern void func_ov003_02179bb8(int p, int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);

void func_ov003_021792a8(u32 param_1)
{
    int local[3];

    func_02039448(param_1);
    func_020ab064(data_0214f460, (int *)(param_1 + 0x3b4));
    local[0] = *(int *)(data_02152cd8 + 0x4c);
    local[1] = *(int *)(data_02152cd8 + 0x58);
    local[2] = *(int *)(data_02152cd8 + 0x64);
    func_01ff832c(0x1000, local, (int *)(param_1 + 0x3b4), (int *)(param_1 + 0x278));
    func_02037450(param_1, 0x300);
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1,
                        (u32)(0x96 < *(u16 *)(param_1 + 0xfc)), 0x30, 0, 5, 5);
}
