#include "ctx.h"

extern int data_0215be3c;
extern u32 func_020038b8(int *a, int b);
extern void func_020ebf58(int *a);
extern void func_020eb76c(void *a);
extern void func_020ebe2c(void);
extern void func_020ec7c8(void);

int func_020ec740(int *param_1)
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = func_020038b8(param_1, 0x14);
    iVar3 = 0;
    data_0215be3c = iVar2;
    do {
        *(u16 *)(data_0215be3c + iVar3 * 2) = 0;
        iVar4 = (iVar3 + 1) * 0x10000;
        *(u32 *)(data_0215be3c + iVar3 * 4 + 8) = 0;
        iVar3 = iVar4 >> 0x10;
    } while (iVar3 < 3);
    func_020ebf58(param_1);
    func_020eb76c((void *)func_020ec7c8);
    func_020ebe2c();
    return data_0215be3c;
}
