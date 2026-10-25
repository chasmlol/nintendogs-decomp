#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 n);
extern void func_02025e74(u8 *p);
extern s32 func_0203579c(u8 *p, s32 n);
extern s32 func_02028124(u8 *p);
extern void func_ov006_0215f0e8(u8 *p);

void func_ov006_0215ef44(u8 *p)
{
    s32 x;
    s64 v;

    if (func_02035770(p, 10) != 0) {
        func_02025e74(p);
    }
    if (func_0203579c(p, 10) != 0) {
        x = func_02028124(p);
        v = (s64)x * -160 + 0x800;
        *(u32 *)(p + 0x25c) = (u32)(v >> 12);
        *(s32 *)(p + 0x264) = *(s32 *)(p + 0x25c) * -16;
    }
    func_ov006_0215f0e8(p);
}
