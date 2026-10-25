#include "ctx.h"

extern int func_02044ca0(int v);
extern void func_020be3d4(u8 *p, void *q);
extern void func_020be4b4(u8 *p, void *q, int v);
extern int func_020aaf38(int a, void *b, int c);
extern void func_0209d4b0(void *p, int v);
extern void func_020c5fec(u8 *p);
extern void func_020e5a84(u8 *p);

void func_020e59c4(u8 *param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = func_02044ca0(*(s16 *)(param_1 + 156));
    iVar2 = *(int *)(param_1 + 0x214);
    func_020be3d4(param_1, param_1 + 200);
    if (iVar1 == 0) {
        return;
    }
    if (*(s16 *)(param_1 + 136) == 0) {
        func_020be4b4(param_1, param_1 + 188, 0x4010);
        iVar1 = func_020aaf38(iVar1, param_1 + 188, 0x333);
        if (iVar1 != 0) {
            func_0209d4b0(param_1 + 400, 5);
            func_020c5fec(param_1);
        }
        func_020e5a84(param_1);
        return;
    }
    if (*(int *)(iVar2 + 8) != 0) {
        func_020c5fec(param_1);
        *(int *)(iVar2 + 8) = 0;
        *(int *)(iVar2 + 4) = 1;
        return;
    }
    return;
}
