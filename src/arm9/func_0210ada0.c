#include "ctx.h"

extern u8 data_02148078[];
extern u8 data_02148088[];
extern u8 data_0214809c[];
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_0210ada0(s32 *param_1)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    param_1[1] = 0;
    param_1[0] = 0;
    iVar1 = func_0210e968(0, data_02148078);
    iVar2 = func_0210e968(0, data_02148088);
    iVar3 = func_0210e968(0, data_0214809c);
    func_02113090(0, 0);
    func_021130c4(0, iVar1);
    func_02112ed0(0, iVar2);
    func_02112e74(0, iVar3);
    func_02112798(0, 1, 0);
    func_02112798(0, 0, 1);
}
