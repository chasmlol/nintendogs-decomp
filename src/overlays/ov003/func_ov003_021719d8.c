#include "ctx.h"
extern s32 func_02035584(u32 a, u32 b);
extern void func_0203e8cc(u32 a, u32 b, u32 c);
extern s32 func_0202e29c(u32 a);
extern void func_020b9b18(u32 a);
extern void func_020b9858(s32 a, s32 b);
extern void func_02029290(u32 a, u32 b, u32 c);
extern void func_0203e908(u32 a, u32 b);
void func_ov003_021719d8(u8 *p)
{
    s32 r = func_02035584((u32)p, 1);
    if (r != 0) {
        func_0203e8cc((u32)p, 1, 0);
    }
    if (*(u16 *)(p + 252) > 100) {
        r = func_0202e29c((u32)p);
        if (r != 0) {
            func_020b9b18(3);
        }
        func_020b9858((s32)*(s8 *)(p + 136), (s32)*(s16 *)(p + 246));
        func_02029290((u32)p, 87, 1);
        func_0203e908((u32)p, 239);
    }
}
