#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s16 v);

void func_ov005_0215f2ac(u8 *p)
{
    s32 v = func_0203567c(p);
    if ((*(u16 *)(data_02159444 + 132) & 1) == 0) {
        *(u16 *)(p + 0x11a) = (u16)(*(u16 *)(p + 0x11a) + 1);
    } else {
        *(u16 *)(p + 0x11a) = 0;
    }
    *(u16 *)(p + 0x11c) = 1;
    *(u16 *)(p + 0x11e) = 0;
    if (v != 0) {
        func_0203e908(p, 0x451);
    }
}
