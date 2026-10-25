#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, u32 b, u32 c);
extern s32 func_02039cc4(u8 *p);
extern u8 *func_020bc3c4(void);
extern void func_020bbe14(u32 a, s32 b);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02173a28(u8 *param_1)
{
    s32 iVar1;
    s32 s;
    u16 x;
    u8 *t;

    iVar1 = func_ov003_02174904(param_1, 19, 0xffffffff, 0);
    s = *(s16 *)(param_1 + 0xea);
    if (s >= 16 && s <= 30) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02039cc4(param_1);
    if (iVar1 != 0) {
        t = (u8 *)func_020bc3c4() + 136;
        *(u32 *)(t + 0x6c) = 0;
        func_020bbe14(2, *(s8 *)(param_1 + 0x88));
    }
    x = *(u16 *)(param_1 + 0xf4);
    if (x >= 79 && x < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_0203e908(param_1, 3);
}
