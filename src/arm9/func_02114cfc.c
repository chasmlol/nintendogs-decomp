#include "ctx.h"

extern u8 *data_0215be48;
extern s32 func_ov005_02164898(void);
extern void func_02112c20(s32 a, s32 b, s32 c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_021128a8(u32 a, u32 b, u32 c);

void func_02114cfc(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    iVar1 = func_ov005_02164898();
    if (iVar1 != 0) {
        *(s32 *)(data_0215be48 + 0x4858) = 1;
    }
    func_02112c20(0, 1, -16, -16, *(u32 *)(param_1 + 0x18), *(u32 *)(param_1 + 0x18), 0, 31, 1);
    iVar1 = *(s32 *)(param_1 + 4);
    uVar2 = 0;
    if (iVar1 == 0 || (iVar1 != 1 && iVar1 == 2)) {
        uVar2 = 1;
    }
    if (*(s32 *)(param_1 + 0x10) != 0 && (uVar2 = 2, *(u16 *)(param_1 + 0x14) < 0x8000)) {
        uVar2 = 1;
    }
    func_021128a8(0, 1, uVar2);
}
