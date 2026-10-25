#include "ctx.h"

extern s32 func_02035584(u8 *p, s32 v);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_0202e29c(u8 *p);
extern void func_020b9b18(s32 v);
extern void func_020b9858(s32 a, s32 b);
extern void func_02029290(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s16 v);

void func_ov003_02171b58(u8 *p)
{
    s32 r = func_02035584(p, 1);
    if (r != 0) {
        func_0203e8cc(p, 1, 0);
    }
    if (*(u16 *)(p + 252) > 100) {
        if (func_0202e29c(p) != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s16)*(s8 *)(p + 136), *(s16 *)(p + 246));
        func_02029290(p, 87, 1);
        func_0203e908(p, 236);
    }
}
