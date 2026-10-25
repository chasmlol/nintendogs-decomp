#include "ctx.h"

s32 func_0210e968(s32 a, void *b);
void func_02113090(s32 a, s32 b);
void func_021130c4(s32 a, s32 b);
void func_0211305c(s32 a, s32 b);
void func_02112ed0(s32 a, s32 b);
void func_02112e74(s32 a, s32 b);
void func_020fc8b0(s32 a, s32 b, s32 c);
void func_020fc084(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);
s32 func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
void func_02101be4(s32 a, s32 b);
void func_02117f14(void *a, s32 b, void *c, s32 d, s32 e, s32 f, s32 g);
void func_02117cf0(void *a);

extern u8 data_0214a1e8[];
extern u8 data_0214a1f8[];
extern u8 data_0214a208[];
extern u8 data_0214a218[];
extern u8 data_0214a230[];
extern u8 *data_0215be48;
extern u8 data_0214a1c0[];
extern u8 data_0214a1b8[];

void func_02118240(s32 *param_1)
{
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;

    param_1[1] = 0;
    param_1[0] = 0;
    param_1[12] = 99;
    param_1[14] = 0;
    param_1[15] = 0;
    param_1[84] = 0;
    iVar2 = func_0210e968(0, data_0214a1e8);
    iVar3 = func_0210e968(0, data_0214a1f8);
    iVar4 = func_0210e968(0, data_0214a208);
    iVar5 = func_0210e968(0, data_0214a218);
    iVar6 = func_0210e968(0, data_0214a230);
    func_02113090(0, iVar2);
    func_021130c4(0, iVar3);
    func_0211305c(0, iVar4);
    func_02112ed0(0, iVar5);
    func_02112e74(0, iVar6);
    func_020fc8b0(0, 0, 5);
    func_020fc084(param_1 + 2, 0, 5, 0, 2, param_1[12], 0, 12);
    {
        u8 *q = data_0215be48 + 0x4000;
        iVar2 = func_02101894(1, iVar5, iVar3, 4, *(s32 *)(q + 0x83c));
    }
    param_1[13] = iVar2;
    func_02101be4(param_1[13], 0);
    func_02117f14(param_1 + 16, 0, data_0214a1c0, 0, -64, 0, 16);
    func_02117f14(param_1 + 24, 0, data_0214a1b8, 4, 0, -64, 16);
    func_02117cf0(param_1 + 16);
    func_02117cf0(param_1 + 24);
}
