#include "ctx.h"

extern u8 *data_02159468;

u32 func_020bc860(void)
{
    s32 i;
    s32 zero;
    s32 zero2;
    s32 one;
    u8 *tbl;
    u8 *e;
    s32 r;
    s32 sv;

    tbl = data_02159468;
    i = 0;
    zero = 0;
    zero2 = 0;
    one = 1;
L20:
    if (i < 0) goto Z34;
    if (*(s16 *)(tbl + 32) > i) goto LE3c;
Z34:
    e = (u8 *)zero;
    goto J44;
LE3c:
    e = *(u8 **)(tbl + i * 4 + 4);
J44:
    if (e == 0) goto NEXT;
    sv = *(s16 *)(e + 144);
    if (sv == 3) goto S1;
    if (sv == 6) goto S1;
    if (sv != 8) goto S0;
S1:
    r = one;
    goto J74;
S0:
    r = zero2;
J74:
    if (r != 0) return 1;
NEXT:
    i = (s16)(i + 1);
    if (i < 7) goto L20;
    return 0;
}
