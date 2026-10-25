#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern void func_0207f4e0(u16 *a);
extern int func_020870b8(int *a, int b);
extern int *func_02087ad0(int a);

void func_02087a2c(int *param_1, u32 param_2, u32 param_3, int param_4)
{
    int iVar1;
    int iVar2;
    u32 uVar;
    s32 t0;
    s32 t1;
    s32 bVar1;

    iVar2 = param_1[2];
    if (param_1 == NULL) {
        return;
    }
    t0 = 0;
    t1 = 1;
    for (;;) {
        uVar = func_02080b08();
        param_1[3] = param_1[3] | 0x40;
        bVar1 = (param_1[3] & 4U) ? t1 : t0;
        if (bVar1 != 0) {
            func_0207f4e0((u16 *)(param_1 + 6));
            func_02080b1c(uVar);
            return;
        }
        param_1[3] = param_1[3] | 8;
        func_02080b1c(uVar);
        iVar1 = func_020870b8(param_1, param_1[4]);
        if (iVar1 == 6) {
            return;
        }
        param_1 = func_02087ad0(iVar2);
        if (param_1 == NULL) {
            return;
        }
    }
}
