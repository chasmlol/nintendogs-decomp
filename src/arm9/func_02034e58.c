#include "ctx.h"

extern u32 data_02159468;

BOOL func_02034e58(u8 *param_1)
{
    s32 v;
    s32 i;
    u8 *p;
    u8 *e;
    s32 t;
    BOOL r;
    v = *(s16 *)(param_1 + 0xea);
    if (v < 1053) {
        goto L20;
    }
    if (v <= 1063) {
        return TRUE;
    }
L20:
    if (v < 960) {
        goto RET0;
    }
    if (v > 966) {
        goto RET0;
    }
    i = (s16)(*(s16 *)(param_1 + 0x13e) - 3);
    if (i < 0) {
        goto E0;
    }
    p = (u8 *)data_02159468;
    if (*(s16 *)(p + 0x20) > i) {
        goto LOAD;
    }
E0:
    e = NULL;
    goto HAVE;
LOAD:
    e = *(u8 **)(p + i * 4 + 4);
HAVE:
    if (e == NULL) {
        goto RET0;
    }
    t = *(s16 *)(e + 150);
    r = TRUE;
    if (t == 0) {
        return r;
    }
    if (t != 1) {
        r = FALSE;
    }
    return r;
RET0:
    return FALSE;
}
