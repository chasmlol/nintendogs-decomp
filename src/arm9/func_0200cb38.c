#include "ctx.h"

extern s32 func_02022e14(u8 *p, s32 n);
extern void func_02029504(u8 *p);
extern void func_0200ccd4(u8 *p);
extern void func_0203e908(u8 *p, s32 n);

void func_0200cb38(u8 *p)
{
    if (*(s16 *)(p + 0xf0) != 0x6f && !func_02022e14(p, 0x46) && !func_02022e14(p, 0x4d)) {
        func_02029504(p);
    }
    func_0200ccd4(p);
    if (*(u16 *)(p + 0xfc) < 0x50) {
        if (*(s8 *)(p + 0xa0) != 0) {
            return;
        }
        if (*(s8 *)(p + 0xa1) != 0) {
            return;
        }
    }
    func_0203e908(p, 0x47d);
}
