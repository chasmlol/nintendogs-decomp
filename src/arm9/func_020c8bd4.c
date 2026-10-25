#include "ctx.h"

extern u8 *data_02159468;
extern int func_020bfe78(u8 *p);
extern int func_02044ca0(int v);
extern void func_020be4b4(u8 *p, void *q, int v);
extern void func_020be3d4(u8 *p, void *q);
extern u32 func_020c5fbc(u8 *p);
extern int func_020aaec4(int a, void *b, int c);
extern void func_020c5fec(u8 *p);
extern u32 func_0209d4b0(void *p, int v);

u32 func_020c8bd4(u8 *param_1)
{
    int iVar2;
    int iVar3;

    iVar2 = func_020bfe78(param_1);
    iVar3 = func_02044ca0(0);
    func_020be4b4(param_1, param_1 + 188, iVar2);
    func_020be3d4(param_1, param_1 + 200);
    if (*(int *)(data_02159468 + 0x24) != 0) {
        return func_020c5fbc(param_1);
    }
    iVar2 = func_020aaec4(iVar3, param_1 + 188, *(int *)(param_1 + 0x120));
    if (iVar2 != 0) {
        func_020c5fec(param_1);
        return func_0209d4b0(param_1 + 400, 5);
    }
    return iVar2;
}
