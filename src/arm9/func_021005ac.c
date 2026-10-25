#include "ctx.h"

extern u8 *data_0215be48;
extern void *func_020fc938(s32 a, s32 b, s32 c, s32 d);
extern void func_02101280(s32 a, s32 b);
extern void func_02101118(s32 a, s32 b, s32 c, s32 d, void *e);
extern void func_02100fac(s32 a, s32 b, s32 c, s32 d, u16 *e, s32 f);
extern void func_0210f2c0(s32 a, s32 b, s32 c, s32 d, u32 e);

void func_021005ac(u32 param_1, s32 param_2)
{
    void *puVar4;
    u16 uVar3;
    u8 *iVar6;
    u8 *p7;
    u16 a15;
    u16 uVar1;
    u16 a6;
    u8 *iVar5;
    u8 *base6;
    s32 iVar2;

    iVar5 = data_0215be48;
    p7 = iVar5 + 0xc4;
    a15 = (u16)(param_1 + 15);
    uVar1 = (u16)param_1;
    a6 = (u16)(param_1 + 6);
    if (param_2 < 0 || param_2 >= 70) {
        param_2 = 0;
    }
    base6 = p7 + 0x6c;
    iVar6 = base6 + param_2 * 0x20;
    uVar3 = *(u16 *)(iVar6 + 0xc);
    {
    u16 local[4] = {0, 0, 0, 0};
    puVar4 = func_020fc938(2, 0, *(u16 *)(iVar6 + 6), 0);
    func_02101280(0, uVar1);
    func_02101118(0, *(s32 *)(data_0215be48 + 0x232c), uVar1, a6, puVar4);
    local[0] = 0x78;
    iVar2 = (s32)uVar3 / 10;
    local[1] = (u16)(iVar2 % 10 + 0x30);
    local[2] = (u16)((s32)uVar3 % 10 + 0x30);
    local[3] = 0;
    func_02100fac(0, *(s32 *)(data_0215be48 + 0x232c), uVar1, uVar1, local, 7);
    func_0210f2c0(*(s32 *)p7, 2, a15, *(s32 *)(iVar6 + 8), param_1 + 8);
    }
}
