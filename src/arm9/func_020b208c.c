#include "ctx.h"

/* Goto-shaped arms: each arm is its own block ending in 'b end'; the sub-chain falls to end. */
#define LCG_PICK(a, b) do { u32 nv = *p * 0x10dcd + 1; *p = nv; r = ((u16)nv & 1) ? (a) : (b); } while (0)

s32 func_020b208c(u32 *p, s32 sel, s32 sub)
{
    s32 r = -100;

    switch (sel) {
    case 0:
        break;
    case 1:
        if (sub == 1) goto s1a;
        if (sub == 2) goto s1b;
        if (sub != 3) goto end;
        goto s1c;
    s1a:
        r = -5;
        goto end;
    s1b:
        LCG_PICK(-5, -10);
        goto end;
    s1c:
        LCG_PICK(-10, -15);
        goto end;
    case 2:
        if (sub == 1) goto s2a;
        if (sub == 2) goto s2b;
        if (sub != 3) goto end;
        goto s2c;
    s2a:
        r = -5;
        goto end;
    s2b:
        LCG_PICK(-5, -10);
        goto end;
    s2c:
        LCG_PICK(-10, -15);
        goto end;
    case 3:
        if (sub == 1) goto s3a;
        if (sub == 2) goto s3b;
        if (sub != 3) goto end;
        goto s3c;
    s3a:
        LCG_PICK(0, -5);
        goto end;
    s3b:
        r = -5;
        goto end;
    s3c:
        LCG_PICK(-5, -10);
        goto end;
    case 4:
        if (sub == 1) goto s4a;
        if (sub == 2) goto s4b;
        if (sub != 3) goto end;
        goto s4c;
    s4a:
        LCG_PICK(0, -5);
        goto end;
    s4b:
        LCG_PICK(0, -5);
        goto end;
    s4c:
        LCG_PICK(-5, -10);
        goto end;
    case 5:
        if (sub == 1) goto s5a;
        if (sub == 2) goto s5b;
        if (sub == 3) r = -5;
        goto end;
    s5a:
        r = 0;
        goto end;
    s5b:
        LCG_PICK(0, -5);
    }
end:
    return r;
}
