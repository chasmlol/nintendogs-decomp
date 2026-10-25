#include "ctx.h"

extern u8 *data_0214f464;

extern void func_0202f6ec(u8 *p);
extern void func_0202f5fc(u8 *p);
extern s32 func_02028124(u8 *p);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_02022e14(u8 *p, s32 a);
extern s32 func_0202c87c(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_02185644(u8 *p, s32 p2)
{
    s16 s;
    s32 r;
    u32 v;

    s = (p2 == 1) ? -1 : 1;
    if (p2 == 0) {
        func_0202f6ec(p);
    } else {
        func_0202f5fc(p);
    }
    r = func_02024d40(p, 8, 35, s * ((s32)(((s64)func_02028124(p) * 151 + 0x800) >> 12)));
    if (r == 0) {
        r = func_02024d40(p, 35, 59, s * ((s32)(((s64)func_02028124(p) * 54 + 0x800) >> 12)));
        if (r == 0) {
            func_02024d40(p, 59, 86, s * ((s32)(((s64)func_02028124(p) * 151 + 0x800) >> 12)));
        }
    }
    if (*(u8 *)(p + 0xa3) != 0 && func_02022e14(p, *(s16 *)(p + 0xf2))) {
        *(u16 *)(p + 0x122) = *(u16 *)(p + 0x122) + 1;
    }
    r = func_0202c87c(p, (s16)(p2 + 7));
    if (r != 0) {
        return;
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    v = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = v;
    if ((u16)((((u16)v) * 3u) >> 16) == 0) {
        func_0203e908(p, (s16)(p2 + 0xf3));
        return;
    }
    func_0203e908(p, (s16)(p2 + 0x1ce));
}
