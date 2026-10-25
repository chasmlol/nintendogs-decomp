#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, s32 a, s32 b, s32 c);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_0218e360(u8 *p, s32 v);

void func_ov003_021712e0(u8 *p)
{
    s32 iVar1;
    s16 x;
    u16 y;

    iVar1 = func_ov003_02174904(p, 0x120, 0x18b, 0x8000);
    x = *(s16 *)(p + 0xea);
    if (x >= 0x119 && x <= 0x121) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    y = *(u16 *)(p + 0xf4);
    if (y >= 79 && y < 99) {
        func_0203e908(p, 0x438);
        return;
    }
    func_ov003_0218e360(p, 7);
}
