#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} T3;

extern int data_02159444;
extern int func_0200f8e0(int a);
extern int func_0203567c(int a);
extern int func_0203541c(int a);
extern int func_0202d108(int a, int b, int c, int d);
extern void func_ov003_02198420(int a, int b, int c);
extern void func_ov003_0218c3e0(int a, int b, int c);

void func_ov003_0217d214(int param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = *(int *)(*(int *)&data_02159444 + 0x1c);
    *(T3 *)(param_1 + 0x3b4) = *(T3 *)(iVar1 + 0x30);
    iVar1 = func_0200f8e0(param_1);
    if (iVar1 != 0) {
        return;
    }
    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_0203541c(param_1);
    iVar2 = func_0202d108(param_1, 0, iVar1, 1);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        func_ov003_02198420(param_1, iVar1, 0);
    } else {
        func_ov003_0218c3e0(param_1, 0, 0);
    }
}
