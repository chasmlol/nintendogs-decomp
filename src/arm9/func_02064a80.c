#include "ctx.h"

extern u8 *func_020641b8(void);
extern s32 func_02064098(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_020800d4(u8 *p, u32 a);
extern void func_0206431c(u32 a, u32 b);
extern s32 func_020641c8(u32 a, u32 b, u32 c);

s32 func_02064a80(u32 p1, u32 p2)
{
    u8 *o;
    s32 r;
    s32 ret;

    o = func_020641b8();
    r = func_02064098(5, 7, 9, 8, 10, 11);
    if (r != 0) {
        return r;
    }
    if (**(u16 **)(o + 4) == 7 || **(u16 **)(o + 4) == 9) {
        if (p2 < 1 || p2 > 15) {
            return 6;
        }
        func_020800d4(*(u8 **)(o + 4) + 0x17e, 2);
        if ((*(u16 *)(*(u8 **)(o + 4) + 0x17e) & (1 << p2)) == 0) {
            return 7;
        }
    } else if (p2 != 0) {
        return 6;
    }
    func_0206431c(13, p1);
    ret = func_020641c8(13, 1, 1 << p2);
    if (ret == 0) {
        ret = 2;
    }
    return ret;
}
