#include "ctx.h"

extern u8 data_0214a68c[];
extern u8 data_0214a6a0[];
extern u8 data_0214a6b4[];
extern u8 data_0214a6c8[];
extern void func_02119578(void);
extern s32 func_0210e968(int a, u8 *b);
extern void func_02113090(int a, s32 b);
extern void func_021130c4(int a, s32 b);
extern void func_02112ed0(int a, s32 b);
extern void func_02112e74(int a, s32 b);
extern void func_02117a58(void *a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k);
extern void func_02112798(int a, int b, int c);

void func_02119448(u32 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;

    param_1[1] = 0;
    *param_1 = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    iVar2 = func_0210e968(9, data_0214a68c);
    iVar3 = func_0210e968(9, data_0214a6a0);
    iVar4 = func_0210e968(9, data_0214a6b4);
    iVar5 = func_0210e968(9, data_0214a6c8);
    func_02113090(0, iVar2);
    func_021130c4(0, iVar3);
    func_02112ed0(0, iVar4);
    func_02112e74(0, iVar5);
    func_02117a58(param_1 + 2, 2, 0xffff, 0, 0, 0, 0, 0, 0, 10, 10);
    param_1[0xd] = (u32)func_02119578;
    func_02112798(0, 0, 0);
    func_02112798(0, 3, 0);
    func_02112798(0, 1, 0);
    func_02112798(0, 2, 0);
}
