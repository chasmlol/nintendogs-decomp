#include "ctx.h"

extern int data_0215ad40;
extern u32 data_0215ad4c[];
extern void func_0206f878(int a);
extern void func_0206f2bc(void);
extern void func_020d532c(void);

void func_020d7e8c(void)
{
    int iVar3;

    func_0206f878(0xffff);
    func_0206f2bc();
    iVar3 = 0;
    *(int *)(data_0215ad40 + 4) = 0;
    do {
        data_0215ad4c[iVar3] = 0;
        iVar3 = iVar3 + 1;
    } while (iVar3 < 0x10);
    *(int *)(data_0215ad40 + 0x10c) = 0;
    *(int *)(data_0215ad40 + 0x110) = 0;
    *(int *)(data_0215ad40 + 0x124) = 0;
    *(int *)(data_0215ad40 + 0x128) = 0;
    func_020d532c();
}
