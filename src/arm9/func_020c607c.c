#include "ctx.h"
extern s32 func_01ffdb08(s32 a);
extern s32 func_02035134(s32 a);
extern s32 func_020c8380(s32 a, s32 *b, s32 c, s32 *d);
extern s32 func_02034808(s32 a);
extern s32 func_020c81d4(s32 a, s32 *b, s32 c, s32 *d);
extern s32 func_020c6578(u8 *p, s32 *a, s32 *b, s32 *c, s32 *d);
extern s32 func_020c7fe4(s32 *a, s32 b, s32 c, s32 *d, s32 *e);

void func_020c607c(u8 *param_1, s32 param_2, s32 *param_3, s32 *param_4, s32 param_5,
                   void (*cb6)(u8 *, s32 *), void (*cb7)(u8 *, s32 *), void (*cb8)(u8 *, s32 *, s32 *),
                   void (*cb9)(u8 *, s32 *), void (*cb10)(u8 *, s32))
{
    s32 loc[3] = {0, 0, 0};
    s32 cnt;
    s32 found;
    s32 e;
    s32 r;

    found = 0;
    r = *(s16 *)(param_1 + 0x90);
    if (r == 0 || r == 2 || r == 6 || r == 8) goto L170;
    for (cnt = 0; cnt < 3; cnt = (s16)(cnt + 1)) {
        s32 me;
        e = func_01ffdb08(cnt);
        me = *(s16 *)(param_1 + 0x98);
        if (e == 0 || cnt == me) continue;
        if (func_02035134(e) != 0) continue;
        if (func_020c8380(e, (s32 *)(param_1 + 0xbc), param_2, loc) != 0) {
            *(u32 *)(param_1 + 0x16c) |= 1 << (cnt + 3);
            found = 1;
        }
        if (func_02034808(e) != 0 && *(u16 *)(param_1 + 0xa2) == 0 && (*(u32 *)(param_1 + 0x16c) & 7) == 0 &&
            func_020c81d4(e, (s32 *)(param_1 + 0xbc), param_2 * 3, loc) != 0) {
            *(u32 *)(param_1 + 0x16c) |= 1 << cnt;
            cb10(param_1, cnt);
            found = 1;
        }
        if (*(s16 *)(param_1 + 0x90) == 4 || *(s16 *)(param_1 + 0x8a) == 4) {
            loc[0] = 0;
            loc[1] = 0;
            loc[2] = 0;
        }
    }
    if (found != 0) {
        cb6(param_1, loc);
    }
L170:
    if (*(s16 *)(param_1 + 0x90) == 1) {
        if (*(s16 *)(param_1 + 0x8a) != 4) {
            s32 B[3] = {0, 0, 0};
            s32 fl = 0;
            s32 C[12];
            if (cb8 != 0) {
                if (func_020c6578(param_1, param_3, param_4, B, C) != 0) {
                    cb8(param_1, B, C);
                }
            } else {
                if (*(s32 *)(param_1 + 0xc0) >= param_2) goto fzero;
                B[1] = B[1] + (param_2 - *(s32 *)(param_1 + 0xc0));
                fl = 1;
                goto fchk;
fzero:
                fl = 0;
fchk:
                if (fl != 0) {
                    cb7(param_1, B);
                }
            }
        }
    }
    if (*(s16 *)(param_1 + 0x90) == 1) {
        s32 D[3] = {0, 0, 0};
        if (func_020c7fe4((s32 *)(param_1 + 0xbc), param_2, param_5, D, loc) != 0) {
            cb9(param_1, D);
        }
    }
}
