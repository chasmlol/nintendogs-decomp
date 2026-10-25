#include "ctx.h"

extern u32 data_0215cd9c;
extern void func_02005e18(u16 *a);
extern u16 *func_0200563c(int a, u16 *b);
extern void func_020054ec(int a, int b, int c);
extern void func_0200560c(u16 *a, int b, int c, int d, int e, int f, int g, int h);
extern void func_020055b4(int a, int b, int c, int d, int e, int f, int g);
extern void func_02005514(int a, int b, int c, int d, int e, int f);
extern void func_020054d4(int a, u32 b);

u16 *func_ov016_0215cc68(int param_1)
{
    u16 st[20];
    u16 *puVar1;

    func_02005e18(st);
    st[1] = 5;
    st[2] = 0x14;
    st[11] = 3;
    st[12] = 0x10;
    st[3] = 1;
    st[4] = 0;
    st[5] = 1;
    st[6] = 0;
    st[7] = 4;
    st[8] = 0x60;
    st[14] = 0x180;
    st[15] = 8;
    puVar1 = func_0200563c(param_1, st);
    func_020054ec((int)puVar1, 1, 1);
    func_0200560c(puVar1 + 0x16, 2, 0, 0, 1, 5, 1, 0);
    func_020055b4((int)(puVar1 + 0x16), 1, 0, 0, 0, 5, 1);
    func_020055b4((int)puVar1 + 120, 2, 0, 0, 0, 2, 1);
    func_02005514((int)(puVar1 + 0x3c), 0, 0, 1, 0, 0);
    func_020054d4((int)puVar1, 0x00200010);
    return puVar1;
}
