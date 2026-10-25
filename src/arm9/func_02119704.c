#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_0214a6d8;
extern u32 data_0214a714, data_0214a728, data_0214a73c, data_0214a758, data_0214a76c;
extern u32 data_0214a784, data_0214a798, data_0214a7ac, data_0214a7c8, data_0214a7dc;
extern u32 data_0214a7f4, data_0214a808, data_0214a81c, data_0214a838, data_0214a84c;
extern u32 data_0214a864, data_0214a878, data_0214a88c, data_0214a8a8, data_0214a8bc;
extern u32 data_0214a8d4, data_0214a8ec, data_0214a904, data_0214a908, data_0214a920;
extern u32 data_0214a938, data_0214a950, data_0214a954, data_0214a96c, data_0214a984;
extern u32 data_0214a99c, data_0214a9a0, data_0214a9b8, data_0214a9d0, data_0214a9e8, data_0214a9ec;
extern void func_0210ea40(s32 a, s32 b, s32 c, s32 d);
extern s32 func_0210e968(s32 a, u32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_0211305c(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc76c(s32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02117f14(s32 a, s32 b, u32 c, s32 d, s16 e, s32 f, s32 g);
extern void func_02117c54(s32 a);
extern void func_02109238(void);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_020fbeb0(s32 a);

void func_02119704(s32 *param_1, s32 param_2, s32 param_3, u32 param_4)
{
    s32 unaff_r8;
    s32 iVar6;
    s32 iVar5;
    s32 iVar4;
    s32 iVar3;
    s32 iVar2;

    param_1[10] = 0;
    param_1[1] = 0;
    *param_1 = 4;
    *param_1 = 2;
    switch (*param_1) {
    case 2:
        unaff_r8 = 0x46;
        break;
    case 1:
        unaff_r8 = 0x45;
        break;
    case 0:
        unaff_r8 = 0x44;
        break;
    case 3:
        unaff_r8 = 0x47;
        break;
    }
    func_0210ea40(unaff_r8, param_2, param_3, param_4);
    iVar6 = 0;
    iVar5 = 0;
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    switch (*param_1) {
    case 3:
        iVar6 = func_0210e968(unaff_r8, (u32)&data_0214a714);
        iVar5 = func_0210e968(unaff_r8, (u32)&data_0214a728);
        iVar4 = func_0210e968(unaff_r8, (u32)&data_0214a73c);
        iVar3 = func_0210e968(unaff_r8, (u32)&data_0214a758);
        iVar2 = func_0210e968(unaff_r8, (u32)&data_0214a76c);
        break;
    case 0:
        iVar6 = func_0210e968(unaff_r8, (u32)&data_0214a784);
        iVar5 = func_0210e968(unaff_r8, (u32)&data_0214a798);
        iVar4 = func_0210e968(unaff_r8, (u32)&data_0214a7ac);
        iVar3 = func_0210e968(unaff_r8, (u32)&data_0214a7c8);
        iVar2 = func_0210e968(unaff_r8, (u32)&data_0214a7dc);
        break;
    case 1:
        iVar6 = func_0210e968(unaff_r8, (u32)&data_0214a7f4);
        iVar5 = func_0210e968(unaff_r8, (u32)&data_0214a808);
        iVar4 = func_0210e968(unaff_r8, (u32)&data_0214a81c);
        iVar3 = func_0210e968(unaff_r8, (u32)&data_0214a838);
        iVar2 = func_0210e968(unaff_r8, (u32)&data_0214a84c);
        break;
    case 2:
        iVar6 = func_0210e968(unaff_r8, (u32)&data_0214a864);
        iVar5 = func_0210e968(unaff_r8, (u32)&data_0214a878);
        iVar4 = func_0210e968(unaff_r8, (u32)&data_0214a88c);
        iVar3 = func_0210e968(unaff_r8, (u32)&data_0214a8a8);
        iVar2 = func_0210e968(unaff_r8, (u32)&data_0214a8bc);
        break;
    }
    func_02113090(2, iVar6);
    func_021130c4(2, iVar5);
    func_02112ed0(2, iVar4);
    func_0211305c(2, iVar3);
    func_02112e74(2, iVar2);
    *(s32 *)(*(u8 **)&data_0215be48 + 0xc838) = 1;
    *(s32 *)(*(u8 **)&data_0215be48 + 0xc83c) = 1;
    switch (*param_1) {
    case 3:
        func_020fc76c(unaff_r8, (u32)&data_0214a8d4, (u32)&data_0214a8ec, (u32)&data_0214a904, (u32)&data_0214a908);
        break;
    case 0:
        func_020fc76c(unaff_r8, (u32)&data_0214a920, (u32)&data_0214a938, (u32)&data_0214a950, (u32)&data_0214a954);
        break;
    case 1:
        func_020fc76c(unaff_r8, (u32)&data_0214a96c, (u32)&data_0214a984, (u32)&data_0214a99c, (u32)&data_0214a9a0);
        break;
    case 2:
        func_020fc76c(unaff_r8, (u32)&data_0214a9b8, (u32)&data_0214a9d0, (u32)&data_0214a9e8, (u32)&data_0214a9ec);
        break;
    }
    func_02117f14((s32)param_1 + 8, 2, (u32)&data_0214a6d8, 1, (s16)0x11b, 0, 0xf);
    func_02117c54((s32)(param_1 + 2));
    func_02109238();
    *(s32 *)(*(u8 **)&data_0215be48 + 0x1115c) = 0;
    func_02112798(2, 0, 1);
    func_02112798(2, 1, 1);
    func_020fbeb0(0);
}
