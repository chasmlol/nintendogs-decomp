#include "ctx.h"

extern int func_020c8db4(int v);
extern void func_01ffdb08(int v);
extern void func_020c95bc(int *p, int v);
extern void func_020d0564(int *a, int *b, int *c, int d, int e, int f);
extern int func_020be240(void);
extern int *func_020bc3c4(void);
extern void func_020ca7c8(int *a, int *b, int c, int d);
extern void func_020d075c(int *a, int b);

void func_020d819c(int *param_1, int param_2)
{
    int iVar2;
    int iVar3;
    int aiStack_48[10];
    int local_20[4];

    iVar2 = func_020c8db4(-1);
    func_01ffdb08(iVar2);
    switch (*(s16 *)((u8 *)param_1 + 40)) {
    case 0:
        func_020c95bc(aiStack_48, iVar2);
        func_020d0564(param_1, param_1, aiStack_48, 0x100, 0x100, 0x80);
        break;
    case 1:
        break;
    case 2:
        iVar3 = func_020be240() + 0x2000;
        local_20[0] = 0;
        local_20[1] = 0x3000;
        local_20[2] = iVar3;
        iVar3 = (int)func_020bc3c4();
        func_020ca7c8(aiStack_48, local_20, *(int *)(iVar3 + 0x70), iVar2);
        func_020d0564(param_1, param_1, aiStack_48, 0x80, 0x80, 0x40);
        break;
    }
    func_020d075c(param_1, param_2);
}
