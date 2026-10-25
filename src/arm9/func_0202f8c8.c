#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;

extern u8 data_02152cd8[];
extern int data_0214f464;
extern int data_0214f460;
extern int data_02159444;
extern void func_01ff8980(int *a);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern void func_02037450(int a, int b);

void func_0202f8c8(int param_1)
{
    T3 l20;
    T3 l14;
    int iVar3;
    int iVar4;

    l20.a = *(u32 *)(data_02152cd8 + 0x4c);
    l20.b = *(u32 *)(data_02152cd8 + 0x58);
    l20.c = *(u32 *)(data_02152cd8 + 0x64);
    if (*(int *)(data_0214f464 + 0x64) == 0) {
        ((int *)data_0214f464)[25] = data_0214f460;
        iVar4 = data_0214f464;
        iVar3 = *(int *)(data_02159444 + 0x1c);
        *(T3 *)(iVar4 + 0x68) = *(T3 *)(iVar3 + 0x48);
        func_01ff8980((int *)(iVar4 + 0x68));
    }
    l14 = *(T3 *)(data_0214f464 + 0x68);
    func_01ff832c(0x5000, (int *)&l20, (int *)(param_1 + 0x2a0), (int *)(param_1 + 0x278));
    func_01ff832c(-0x5000, (int *)&l14, (int *)(param_1 + 0x278), (int *)(param_1 + 0x278));
    *(T3 *)(param_1 + 0x26c) = *(T3 *)(param_1 + 0x2a0);
    func_02037450(param_1, 0x200);
}
