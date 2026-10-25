#include "ctx.h"

extern u32 *func_020641b8(void);
extern s32 func_02064098(u32 a, u32 b, u32 c);
extern void func_020800d4(void *p, u32 n);

u32 func_020648e8(void)
{
    u32 *o;
    u8 *s;

    o = func_020641b8();
    if (func_02064098(2, 7, 8) != 0) {
        return 0;
    }
    func_020800d4((u8 *)o[1] + 0xc, 4);
    s = (u8 *)o[1];
    if (*(u32 *)(s + 0xc) == 1) {
        return 0;
    }
    func_020800d4((u8 *)o[1] + 0x18e, 4);
    return ((u32)*(u16 *)((u8 *)o[1] + 0x18e) + 31) & ~31;
}
