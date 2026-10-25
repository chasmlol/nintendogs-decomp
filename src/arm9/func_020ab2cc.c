#include "ctx.h"

typedef struct { u32 w[3]; } T3;

/* pointer globals are read as a value through their address: one load each */
extern u8 data_02159444[];
extern u8 data_02159428[];
extern u8 data_02159468[];

s32 func_020ab2cc(s32 param_1, s32 *param_2, s32 *param_3)
{
    s32 iv3 = 0;
    s32 lrv;
    s32 p1 = param_1;
    s32 *p2 = param_2;
    s32 *p3 = param_3;
    s32 iv2;
    s32 iv1 = 0;
    s32 lvl;
    s32 cond;
    u8 *b2;
    u8 *tb;
    T3 t;

    b2 = *(u8 **)data_02159428;
    lrv = *(s32 *)(b2 + 12);
    iv2 = *(s16 *)(*(u8 **)data_02159444 + 122);
    if (iv2 < 0) {
        goto zero;
    }
    tb = *(u8 **)data_02159468;
    if (*(s16 *)(tb + 32) > iv2) {
        goto valid;
    }
zero:
    iv2 = 0;
    goto join;
valid:
    iv2 = *(s32 *)(tb + iv2 * 4 + 4);
join:
    if (iv2 != 0 && *(s16 *)(iv2 + 144) != 3) {
        t = *(T3 *)(iv2 + 188);
        iv1 = (lrv + *(s32 *)(b2 + 16)) - t.w[2];
        if (iv1 < 0) {
            iv1 = 0;
        }
    }
    *p3 = iv1;
    if (iv1 >= 0x5a000) { lvl = 5; goto done; }
    if (iv1 >= 0x46000) { lvl = 4; goto done; }
    if (iv1 >= 0x32000) { lvl = 3; goto done; }
    if (iv1 >= 0x1e000) { lvl = 2; goto done; }
    if (iv1 >= 0xa000) { lvl = 1; goto done; }
    lvl = 0;
done:
    if (lvl > 0) {
        cond = 0;
        if (p1 >= 2) {
            cond = 1;
        }
        iv3 = (s16)(cond + ((lvl - 1) * 2 + 1));
    }
    *p2 = lvl;
    return iv3;
}
