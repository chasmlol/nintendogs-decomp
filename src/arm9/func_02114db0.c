#include "ctx.h"

extern u32 data_0214949c;
extern u32 data_021494b0;
extern u32 data_021494c4;
extern u32 data_021494dc;
extern u32 func_0210e968(u32 a, u32 b);
extern void func_02113090(u32 a, u32 b);
extern void func_021130c4(u32 a, u32 b);
extern void func_02112ed0(u32 a, u32 b);
extern void func_02112e74(u32 a, u32 b);
extern void func_021128a8(u32 a, u32 b, u32 c);
extern void func_02112978(u32 a, u32 b, u32 c, u32 d);

void func_02114db0(u32 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    *(u16 *)(param_1 + 5) = 0;
    param_1[6] = 0x1000;
    iVar2 = func_0210e968(26, (u32)&data_0214949c);
    iVar3 = func_0210e968(26, (u32)&data_021494b0);
    iVar4 = func_0210e968(26, (u32)&data_021494c4);
    iVar5 = func_0210e968(26, (u32)&data_021494dc);
    func_02113090(0, iVar2);
    func_021130c4(0, iVar3);
    func_02112ed0(0, iVar4);
    func_02112e74(0, iVar5);
    func_021128a8(0, 1, 1);
    func_021128a8(0, 0, 1);
    param_1[1] = 2;
    param_1[0] = 2;
    func_02112978(0, 0, 2, 2);
    func_021128a8(0, 0, 0);
    param_1[3] = 10;
}
