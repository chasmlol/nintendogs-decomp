#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, u32 v);
extern void func_ov003_0218e360(u8 *p, u32 v);

void func_ov003_02171370(u8 *param_1)
{
    s32 iVar1;
    s32 s;
    u16 x;

    iVar1 = func_ov003_02174904(param_1, 0x11f, 0x71, 0x2000);
    s = *(s16 *)(param_1 + 0xea);
    if (s >= 0x119 && s <= 0x121) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    x = *(u16 *)(param_1 + 0xf4);
    if (x >= 79 && x < 99) {
        func_0203e908(param_1, 0x438);
        return;
    }
    func_ov003_0218e360(param_1, 6);
}
