#include "ctx.h"

extern u32 data_ov007_02160898;
extern u32 data_ov007_02160d9c;
extern void func_ov007_0215e08c(s32 *p, u32 a);
extern u32 func_020038b8(s32 *p, u32 n);
extern u32 func_02003860(s32 *p, u32 a, u32 b);
extern void func_02006700(u32 a, u32 b);
extern void func_ov007_0215f208(void);

void func_ov007_0215f0a8(s32 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar4;
    s32 iVar3;
    u32 uVar6;
    u32 uVar7;
    s32 iVar8;
    u32 uVar9;
    u32 p3c = param_3;

    func_ov007_0215e08c(param_1, (u32)&data_ov007_02160898);
    iVar3 = (s32)func_020038b8(param_1, 0x134);
    *(s32 *)&data_ov007_02160d9c = iVar3;
    *(u32 *)(iVar3 + 0x120) = param_2;
    iVar8 = 0;
    *(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x114) = p3c;
    *(u16 *)(*(s32 *)&data_ov007_02160d9c + 0x10a) = 1;
    *(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x118) = 0;
    *(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x11c) = 0;
    iVar3 = 0x000001f1;
    do {
        *(u32 *)(*(s32 *)&data_ov007_02160d9c + iVar8 * 4 + 0x40) = 0;
        uVar4 = func_020038b8(param_1, 0x28);
        *(u32 *)(*(s32 *)&data_ov007_02160d9c + iVar8 * 4 + 0x80) = uVar4;
        uVar9 = *(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x114) + iVar3;
        uVar6 = ((uVar9 / 498u) + 0x1f) & 0xfffffffc;
        uVar9 = 0;
        if (uVar6 != 0) {
            uVar9 = uVar6;
        }
        if (uVar9 < uVar6) {
            uVar9 = uVar6;
        }
        uVar6 = ((*(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x114) + 0x71) / 114u + 0x1f) & 0xfffffffc;
        if (uVar9 < uVar6) {
            uVar9 = uVar6;
        }
        uVar4 = func_020038b8(param_1, uVar9);
        *(u32 *)(*(s32 *)&data_ov007_02160d9c + ((u32)iVar8 << 2) + 0xc0) = uVar4;
        iVar8 = (s32)(iVar8 + 1);
    } while (iVar8 < 2);
    uVar7 = func_02003860(param_1, 0x200, 0x20);
    *(u32 *)(*(s32 *)&data_ov007_02160d9c + 0x3c) = uVar7;
    func_02006700(0xb, (u32)func_ov007_0215f208);
}
