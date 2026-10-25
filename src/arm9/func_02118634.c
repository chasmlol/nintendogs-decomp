#include "ctx.h"

extern u32 data_0214a3a0[];
extern u32 data_0214a3b0[];
extern u32 data_0214a3c0[];
extern u32 data_0214a3d8[];
extern u32 data_0214a358[];
extern u32 data_0214a364[];
extern u32 data_0214a34c[];
extern u32 data_0214a370[];

u32 func_0210e968(u32 a, u32 *b);
void func_02113090(u32 a, u32 b);
void func_021130c4(u32 a, u32 b);
void func_02112ed0(u32 a, u32 b);
void func_02112e74(u32 a, u32 b);
void func_020fc084(u32 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void func_02117f14(u32 *p, u32 a, u32 *b, u32 c, u32 d, u32 e, u32 f);
void func_02117cf0(u32 *p);

void func_02118634(u32 *param_1)
{
    s32 i;
    s32 iVar2;
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    u32 *piVar6;

    u32 *q;
    param_1[1] = 0;
    param_1[0] = 0;
    q = param_1 + 0x5d;
    iVar2 = (s32)func_0210e968(0, data_0214a3a0);
    iVar3 = (s32)func_0210e968(0, data_0214a3b0);
    iVar4 = (s32)func_0210e968(0, data_0214a3c0);
    iVar5 = (s32)func_0210e968(0, data_0214a3d8);
    func_02113090(0, iVar2);
    func_021130c4(0, iVar3);
    func_02112ed0(0, iVar4);
    func_02112e74(0, iVar5);
    func_020fc084(param_1 + 2, 0, 0x15, 4, 3, q[0], 0, 0);
    func_020fc084(param_1 + 0xc, 0, 0x15, 8, 3, q[1], 0, 0);
    func_020fc084(param_1 + 0x16, 0, 0x15, 0xc, 3, q[2], 0, 0);
    func_020fc084(param_1 + 0x20, 0, 0x1f, 0x10, 4, q[3], 0, 0);
    func_02117f14(param_1 + 0x2a, 0, data_0214a358, 0, 0, (u32)-64, 8);
    func_02117f14(param_1 + 0x32, 0, data_0214a364, 1, 0, (u32)-64, 8);
    func_02117f14(param_1 + 0x3a, 0, data_0214a34c, 2, 0, (u32)-64, 8);
    func_02117f14(param_1 + 0x42, 0, data_0214a370, 3, 0x80, 0, 8);
    piVar6 = param_1 + 0x2a;
    i = 0;
    do {
        func_02117cf0(piVar6);
        i = i + 1;
        piVar6 = piVar6 + 8;
    } while (i < 4);
}
