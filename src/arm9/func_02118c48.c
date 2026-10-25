#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_0215bf9c;
extern u8 *data_02159444;

void func_02117ac8(u8 *a, s32 b);
void func_020fbf30(u8 *a, u32 b);
void func_0211902c(u32 a, u8 *b);
void func_020fc594(u32 a, u32 b, u32 c);

void func_02118c48(u8 *param_1)
{
    s32 iVar1;
    s32 v;

    if (*(s32 *)(data_0215be48 + 0xa8) == 7) {
        func_02117ac8(param_1 + 0xc4, 1);
        func_02117ac8(param_1 + 0xe4, 1);
        v = *(s32 *)(data_0215bf9c + 8);
        if (v == 1) goto LAB_a;
        if (v != 2) goto LAB_b;
    LAB_a:
        func_02117ac8(param_1 + 0x104, 0);
        goto LAB_c;
    LAB_b:
        func_02117ac8(param_1 + 0x124, 0);
    LAB_c:
        *(s32 *)(param_1 + 0xb8) = (s16)(-*(s16 *)(data_02159444 + 100));
        iVar1 = *(s16 *)(data_02159444 + 104) * 100;
        *(s32 *)(param_1 + 0xbc) = iVar1 / 60;
        func_020fbf30(param_1 + 0x18, *(u32 *)(param_1 + 0xb8));
        func_020fbf30(param_1 + 0x40, *(u32 *)(param_1 + 0xbc));
    }
    func_0211902c(0, param_1);
    if (0 < *(s32 *)(param_1 + 0x10)) {
        *(s32 *)(param_1 + 0x10) = *(s32 *)(param_1 + 0x10) - 1;
        if (*(s32 *)(param_1 + 0x10) == 0) {
            func_020fc594(0, 4, 0);
            return;
        }
        return;
    }
}
