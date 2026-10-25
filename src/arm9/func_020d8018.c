#include "ctx.h"

extern u8 *data_0215ad40;
extern u8 data_02132db0[];
extern void func_020d5974(u8 *a, u8 *b);
extern u8 *func_020038b8(u8 *a, u32 b);
extern u8 *func_02003860(u8 *a, u32 b, u32 c);
extern void func_02006700(u32 a, void *b);
extern void func_020d8178(void);

void func_020d8018(u8 *param_1, u32 param_2, u32 param_3)
{
    u8 *iVar3;
    u32 uVar4;
    u32 uVar6;
    u32 uVar9;
    s32 iVar8;

    func_020d5974(param_1, data_02132db0);
    iVar3 = func_020038b8(param_1, 0x134);
    data_0215ad40 = iVar3;
    *(u32 *)(iVar3 + 0x120) = param_2;
    iVar8 = 0;
    *(u32 *)(data_0215ad40 + 0x114) = param_3;
    *(u16 *)(data_0215ad40 + 0x10a) = 1;
    *(u32 *)(data_0215ad40 + 0x118) = 0;
    *(u32 *)(data_0215ad40 + 0x11c) = 0;
    do {
        *(u32 *)(data_0215ad40 + (u32)iVar8 * 4 + 0x40) = 0;
        uVar4 = (u32)func_020038b8(param_1, 0x28);
        *(u32 *)(data_0215ad40 + (u32)iVar8 * 4 + 0x80) = uVar4;
        uVar9 = *(u32 *)(data_0215ad40 + 0x114) + 0x1f1;
        uVar6 = ((uVar9 / 498) + 0x1f) & 0xfffffffc;
        uVar9 = 0;
        if (uVar6 != 0) {
            uVar9 = uVar6;
        }
        if (uVar9 < uVar6) {
            uVar9 = uVar6;
        }
        uVar6 = *(u32 *)(data_0215ad40 + 0x114);
        uVar6 = uVar6 + 0x71;
        uVar6 = ((uVar6 / 114) + 0x1f) & 0xfffffffc;
        if (uVar9 < uVar6) {
            uVar9 = uVar6;
        }
        uVar4 = (u32)func_020038b8(param_1, uVar9);
        *(u32 *)(data_0215ad40 + ((u32)iVar8 << 2) + 0xc0) = uVar4;
        iVar8 = iVar8 + 1;
    } while (iVar8 < 2);
    uVar4 = (u32)func_02003860(param_1, 0x200, 0x20);
    *(u32 *)(data_0215ad40 + 0x3c) = uVar4;
    func_02006700(11, func_020d8178);
}
