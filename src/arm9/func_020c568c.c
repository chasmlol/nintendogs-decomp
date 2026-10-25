#include "ctx.h"

extern u8 data_02152cd8[];
extern void func_020bd868(int p);
extern void func_02044ca0(s16 a);
extern void func_020be4b4(int p, int *a, int b);
extern void func_01ff832c(int a, int *b, int *c, int *d);
extern void func_02067e34(int *a, int *b, int *c);

void func_020c568c(int param_1)
{
    int *piVar4;
    int iVar3;
    int *piVar2;
    int t58;
    int t4c;
    int t64;
    int aiStack_48[3];
    int local_3c[3];
    int aiStack_30[3];

    piVar4 = *(int **)(param_1 + 0x214);
    func_020bd868(param_1);
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 0x10;
    func_02044ca0(*(s16 *)(param_1 + 0x9c));
    func_020be4b4(param_1, aiStack_48, 0x1a000);
    t58 = *(int *)(data_02152cd8 + 0x58);
    t4c = *(int *)(data_02152cd8 + 0x4c);
    local_3c[1] = t58;
    t64 = *(int *)(data_02152cd8 + 0x64);
    local_3c[0] = t4c;
    local_3c[2] = t64;
    func_01ff832c(0x3000, local_3c, aiStack_48, local_3c);
    iVar3 = 0;
    local_3c[1] = 0;
    piVar2 = piVar4;
    do {
        func_02067e34(local_3c, aiStack_48, aiStack_30);
        func_01ff832c((iVar3 << 12) / 11,
                      aiStack_30, aiStack_48, piVar2);
        piVar2[0x21] = 0;
        piVar2[0x22] = 0;
        piVar2[0x23] = 0;
        piVar2 = piVar2 + 3;
        iVar3 = (iVar3 + 1) * 0x10000 >> 0x10;
    } while (iVar3 < 0xb);
    piVar4[0x42] = 0;
}
