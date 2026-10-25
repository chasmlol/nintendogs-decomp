#include "ctx.h"

extern u8 data_02148018[];
extern u8 data_0214802c[];
extern u8 data_02148044[];

u32 func_0210e968(u32 a, u8 *b);
void func_02113090(u32 a, u32 b);
void func_021130c4(u32 a, u32 b);
void func_02112ed0(u32 a, u32 b);
void func_02112e74(u32 a, u32 b);
void func_02112798(u32 a, u32 b, u32 c);

void func_0210ac3c(s32 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;

    param_1[1] = 0;
    *param_1 = 0;
    iVar2 = func_0210e968(0, data_02148018);
    iVar3 = func_0210e968(0, data_0214802c);
    iVar4 = func_0210e968(0, data_02148044);
    func_02113090(0, 0);
    func_021130c4(0, iVar2);
    func_02112ed0(0, iVar3);
    func_02112e74(0, iVar4);
    func_02112798(0, 2, (u32)(*param_1 == 1));
    func_02112798(0, 1, (u32)(*param_1 == 2));
    func_02112798(0, 0, (u32)(*param_1 == 3));
    func_02112798(0, 3, (u32)(*param_1 == 4));
    func_02112798(0, 4, 0);
}
