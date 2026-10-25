#include "ctx.h"

extern u8 data_02152264[];

extern u32 func_02071778(u8 *p);
extern s32 func_020717a0(u8 *p, u32 a, u32 b, u32 c);
extern u32 func_02071aa4(void);
extern u32 func_02071f78(u8 *p2, u32 a, u32 fn, u32 b, u32 c);
extern void func_02072378(void);
extern void func_0206c9b8(u8 *a, u8 *b, u32 n);
extern void func_0206c924(u8 *a, u32 b, u32 n);
extern void func_020800f0(u32 a, u32 b);
extern void func_0207175c(u32 a, u32 b);

u32 func_020724b4(u8 *p1, u8 *p2, u32 p3)
{
    u32 r6, r5, r4, uVar5, t;

    r6 = func_02071778(p1);
    if (r6 != 0) {
        goto ret;
    }
    if (func_020717a0(p1, (u32)data_02152264, 60, 0) != 60) {
        return 0;
    }
    r4 = *(u32 *)(data_02152264 + 0x38) * 4;
    r5 = r4 * 2 + 60;
    if (p2 == 0) {
        return 0;
    }
    if (p3 == 0) {
        uVar5 = 0;
    } else {
        uVar5 = func_02071aa4();
    }
    r6 = func_02071f78(p2, r5 + 32, (u32)func_02072378, uVar5, (u32)p1);
    if (r6 == 0) {
        return 0;
    }
    t = func_020717a0(p1, r6, r4 + 60, 0);
    if (t != r4 + 60) {
        return 0;
    }
    func_0206c9b8((u8 *)r6 + 60, (u8 *)r6 + 60 + *(u32 *)(r6 + 0x38) * 4, r4);
    func_0206c924((u8 *)r6 + 60, 0, r4);
    func_020800f0(r6, r5);
    if (p3 != 0) {
        func_0207175c((u32)p1, r6);
    }
ret:
    return r6;
}
