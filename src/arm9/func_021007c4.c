#include "ctx.h"

extern u8 data_02147ca4[];
extern u8 data_02147cb8[];
extern u8 data_02147ccc[];

s32 func_0210e968(s32 a, u8 *b);
void func_02113090(s32 a, s32 b);
void func_021130c4(s32 a, s32 b);
void func_02112ed0(s32 a, s32 b);

void func_021007c4(void)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar1 = func_0210e968(0, data_02147ca4);
    iVar2 = func_0210e968(0, data_02147cb8);
    iVar3 = func_0210e968(0, data_02147ccc);
    func_02113090(2, iVar1);
    func_021130c4(2, iVar2);
    func_02112ed0(2, iVar3);
}
