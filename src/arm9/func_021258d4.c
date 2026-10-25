#include "ctx.h"

extern u32 data_0215be48;
extern s32 func_01ffdb08(s32 a);
extern s32 func_02024114(s32 a, s32 b);
extern void func_02101280(u32 a, u8 *b);
extern void func_02101118(u32 a, u32 b, u8 *c, u8 *d, u16 *e);

void func_021258d4(u8 *param_1, u32 param_2)
{
    u8 *tb;
    s32 iVar1;

    tb = (u8 *)data_0215be48 + 196;
    iVar1 = func_01ffdb08((s16)*(u32 *)((u8 *)data_0215be48 + 0x1dd4));
    iVar1 = func_02024114(iVar1, *(s16 *)(tb + param_2 * 2 + 104));
    func_02101280(0, param_1 + 22);
    func_02101118(0, *(u32 *)((u8 *)data_0215be48 + 0x2000 + 0x32c), param_1 + 22, param_1 + 1,
                  (u16 *)(iVar1 + 18));
}
