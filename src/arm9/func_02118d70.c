#include "ctx.h"
extern u8 data_02159444[];
extern u8 data_0215be48[];
extern u8 data_0214a4c0[];
extern u8 data_0214a4d0[];
extern u8 data_0214a4e0[];
extern u8 data_0214a4f8[];
extern u8 data_0214a49c[];
extern u8 data_0214a458[];
extern u8 data_0214a46c[];
extern s16 func_ov006_0216204c(void);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern s32 func_0210e968(s32 a, u8 *b);
extern void func_020fc084(u32 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);
extern void func_02117f14(u32 *p, s32 a, u8 *b, s32 c, s32 d, s32 e, s32 f);
extern void func_02117cf0(u32 *p);
extern void func_02117c54(u32 *p);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_02118d70(u32 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 iVar5;
    s32 iVar6;
    s16 sVar2;
    u8 *piVar1;

    *param_1 = 0;
    param_1[0x2e] = *(s16 *)(*(u8 **)data_02159444 + 100);
    param_1[0x2f] = *(s16 *)(*(u8 **)data_02159444 + 0x68);
    sVar2 = func_ov006_0216204c();
    param_1[0x30] = (u32)(s32)(sVar2 * 100);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0x61] = 0;
    piVar1 = *(u8 **)data_0215be48;
    if (*(s32 *)(piVar1 + 0xa8) == 8) {
        func_02113090(0, 0);
        func_021130c4(0, 0);
        func_02112ed0(0, 0);
        func_02112e74(0, 0);
        return;
    }
    iVar3 = func_0210e968(0, data_0214a4c0);
    iVar4 = func_0210e968(0, data_0214a4d0);
    iVar5 = func_0210e968(0, data_0214a4e0);
    iVar6 = func_0210e968(0, data_0214a4f8);
    func_02113090(0, iVar3);
    func_021130c4(0, iVar4);
    func_02112ed0(0, iVar5);
    func_02112e74(0, iVar6);
    func_020fc084(param_1 + 6, 0, 0x18, 2, 2, param_1[0x2e], 0, 0);
    func_020fc084(param_1 + 0x10, 0, 0x18, 7, 4, param_1[0x2f], 0, 0);
    func_020fc084(param_1 + 0x1a, 0, 0x18, 0xd, 4, param_1[0x30], 0, 0);
    func_020fc084(param_1 + 0x24, 0, 0x22, 0x14, 4, param_1[0x30], 0, 0);
    func_02117f14(param_1 + 0x31, 0, data_0214a49c, 1, 0, -0x40, 0x10);
    func_02117f14(param_1 + 0x39, 0, data_0214a458, 0, -0x100, 0, 0x10);
    func_02117f14(param_1 + 0x41, 0, data_0214a46c, 0x11, 0, 200, 0x10);
    func_02117f14(param_1 + 0x49, 0, data_0214a46c, 0x11, 0x28, -0x6e, 0x10);
    func_02117cf0(param_1 + 0x31);
    func_02117cf0(param_1 + 0x39);
    func_02117c54(param_1 + 0x49);
    func_02117cf0(param_1 + 0x41);
    func_02112798(0, 0x2c, 0);
}
