#include "ctx.h"

extern u32 data_0214a40c;
extern u32 data_0214a41c;
extern u32 data_0214a42c;
extern u32 data_0214a444;
extern u32 func_0210e968(u32 a, u32 b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_02112798(u32 a, u32 b, u32 c);

void func_021188e8(u32 *param_1)
{
    u32 iVar1;
    u32 iVar2;
    u32 iVar3;
    u32 iVar4;

    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = func_0210e968(0, (u32)&data_0214a40c);
    iVar2 = func_0210e968(0, (u32)&data_0214a41c);
    iVar3 = func_0210e968(0, (u32)&data_0214a42c);
    iVar4 = func_0210e968(0, (u32)&data_0214a444);
    func_02113090(0, iVar1);
    func_021130c4(0, iVar2);
    func_02112ed0(0, iVar3);
    func_02112e74(0, iVar4);
    func_02112798(0, 0, 0);
    func_02112798(0, 1, 0);
    func_02112798(0, 2, 0);
    func_02112798(0, 4, 0);
    func_02112798(0, 5, 0);
    func_02112798(0, 3, 1);
}
