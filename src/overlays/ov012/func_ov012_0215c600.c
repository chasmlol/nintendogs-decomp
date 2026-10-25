#include "ctx.h"

extern void func_02005e18(void *p);
extern void func_020995b8(int p);
extern u16 *func_0200563c(int *p, void *q);
extern void func_020075c8(int *p);
extern void func_020054dc(u16 *p, int v);
extern void func_0200560c(u16 *p, int a, int b, int c, int d, int e, int f, int g);
extern void func_020055b4(u16 *p, int a, int b, int c, int d, int e, int f);
extern void func_02099554(u16 *p);

u16 *func_ov012_0215c600(int *param_1)
{
    u16 uStack_38[20];
    u16 *puVar1;
    int one;

    one = 1;
    func_02005e18(uStack_38);
    uStack_38[1] = 0x17;
    uStack_38[4] = 0;
    uStack_38[3] = one;
    uStack_38[7] = 4;
    uStack_38[5] = one;
    uStack_38[11] = 3;
    uStack_38[12] = 16;
    uStack_38[8] = 0x60;
    uStack_38[14] = 0x180;
    uStack_38[15] = 8;
    func_020995b8((int)uStack_38);
    puVar1 = func_0200563c(param_1, uStack_38);
    func_020075c8(param_1);
    func_020054dc(puVar1, 0x00200010);
    func_0200560c(puVar1 + 0x16, one, 0, 0, 0, 0, one, 0);
    func_020055b4(puVar1 + 0x3c, 2, 0, 0, 0, 2, one);
    func_02099554(puVar1);
    return puVar1;
}
