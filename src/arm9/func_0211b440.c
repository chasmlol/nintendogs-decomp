#include "ctx.h"
extern u16 *func_020955c0(s32 a);

s32 func_0211b440(s32 p0)
{
    s32 cnt = 0;
    s16 idx = -1;
    u16 key = 0xffff;
    s32 p = p0;
    s32 old;
L18:
    idx = (s16)(idx + 1);
    goto L34;
L28:
    idx = (s16)(idx + 1);
L34:
    if (idx >= 3) {
        goto L50;
    }
    if (*func_020955c0((s16)idx) == key) {
        goto L28;
    }
L50:
    old = cnt;
    cnt = (s16)(cnt + 1);
    if (old < p) {
        goto L18;
    }
    if (idx >= 3) {
        idx = -1;
    }
    return idx;
}
