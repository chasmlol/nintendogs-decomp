#include "ctx.h"

extern s32 func_ov003_02174904(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, s32 v);
extern void func_ov003_0218e360(u8 *p, s32 v);

void func_ov003_02171520(u8 *p)
{
    s32 iVar1;

    iVar1 = func_ov003_02174904(p, 0x11c, 0x2a, 0);
    if (*(s16 *)(p + 0xea) >= 0x119 && *(s16 *)(p + 0xea) <= 0x121) {
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)(p + 0xf4) >= 79 && *(u16 *)(p + 0xf4) < 99) {
        func_0203e908(p, 0x438);
        return;
    }
    func_ov003_0218e360(p, 3);
}
