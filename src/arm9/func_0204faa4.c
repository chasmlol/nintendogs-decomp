#include "ctx.h"

extern s32 func_02036578(u8 *);
extern s32 func_0202de0c(u8 *);
extern BOOL func_0202e304(u8 *);
extern void func_0203e908(u8 *, s32);
extern s32 func_02027894(u8 *, s32);

u32 func_0204faa4(u8 *p)
{
    s32 v;
    s32 w;

    v = func_02036578(p);
    if (v == 0) {
        return 0;
    }
    w = func_0202de0c(p);
    if (w >= 13) {
        return 0;
    }
    if (func_0202e304(p)) {
        if (func_0202de0c(p) == 0) {
            func_0203e908(p, 0x2fe);
        }
        return 1;
    }
    v = func_02027894(p, v);
    if (v == 0) {
        goto c0;
    }
    if (v == 1) {
        goto c1;
    }
    if (v != 2) {
        goto ret0;
    }
    if (func_0202de0c(p) == 0) {
        func_0203e908(p, 0x2ff);
    }
    return 1;
c1:
    if (func_0202de0c(p) == 0) {
        func_0203e908(p, 0x2fe);
    }
    return 1;
c0:
    func_0203e908(p, 0x300);
    return 1;
ret0:
    return 0;
}
