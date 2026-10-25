#include "ctx.h"

extern s32 func_ov003_02187168(u8 *p, s32 a, s16 idx);
extern void func_0203e908(u8 *p, s16 v);

void func_ov003_02187108(u8 *p, s32 a, s16 idx)
{
    if (func_ov003_02187168(p, a, idx) != 0) {
        if (*(s32 *)(p + 0x3f4 + idx * 12) > *(s32 *)(p + 0x2d4)) {
            *(s32 *)(p + 0x3f4 + idx * 12) = *(s32 *)(p + 0x2d4);
        }
        return;
    }
    func_0203e908(p, (s16)(a + 0xec));
}
