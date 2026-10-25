#include "ctx.h"

extern s32 data_0214f464;
extern s32 data_0213b578;

void func_02039a28(u8 *p, s32 ch, s16 v, s16 w, s16 p5, u16 p6)
{
    u32 iv = (u32)p + (u32)ch * 2;
    s32 cur = *(s16 *)(iv + 256 + 82);
    u16 f;
    u32 uc;

    if (v != cur) {
        goto ne;
    }
    {
        u32 t6 = p6;
        uc = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = uc;
        f = (u16)(((u32)t6 * (u16)uc) >> 16);
    }
    if (f == 0) {
        goto w_store;
    }
    if (f == 1) {
        goto p5_store;
    }
    return;

w_store:
    *(s16 *)(iv + 256 + 82) = w;
    if (ch == 0) {
        goto w_ch0;
    }
    if (ch == 2) {
        goto w_ch2;
    }
    return;
w_ch0:
    *(s16 *)(p + 256 + 72) = w;
    return;
w_ch2:
    if (w >= 20) {
        *(s16 *)(p + 256 + 76) = w;
    }
    return;

p5_store:
    {
        s32 t5 = *(volatile s16 *)&p5;
        *(s16 *)(iv + 256 + 82) = t5;
        if (ch == 0) {
            goto p_ch0;
        }
        if (ch == 2) {
            goto p_ch2;
        }
        return;
    p_ch0:
        *(s16 *)(p + 256 + 72) = t5;
        return;
    p_ch2:
        if (t5 >= 20) {
            *(s16 *)(p + 256 + 76) = t5;
        }
        return;
    }

ne:
    if (cur != 0) {
        goto dpath;
    }
    *(s16 *)(iv + 256 + 82) = v;
    if (ch == 0) {
        goto v_ch0;
    }
    if (ch == 2) {
        goto v_ch2;
    }
    return;
v_ch0:
    *(s16 *)(p + 256 + 72) = v;
    return;
v_ch2:
    if (v >= 20) {
        *(s16 *)(p + 256 + 76) = v;
    }
    return;

dpath:
    {
        s32 tb;
        u8 *rec;
        s32 bv;
        if (*(s16 *)(iv + 256 + 98) == cur) {
            tb = *(s16 *)((u8 *)&data_0213b578 + ch * 4);
            rec = *(u8 **)(p + 0x74) + tb * 36;
            if (rec != 0) {
                if (*(s8 *)(p + ch + 190) > 0) {
                    if ((*(s32 *)(rec + 0x20) >> 12) >= *(s16 *)(rec + 24) - 1) {
                        bv = 1;
                        goto jn;
                    }
                } else {
                    if ((*(s32 *)(rec + 0x20) >> 12) <= 1) {
                        bv = 1;
                        goto jn;
                    }
                }
            }
        }
        bv = 0;
    jn:
        if (bv == 0) {
            return;
        }
    }
    *(s16 *)(p + ch * 2 + 256 + 82) = v;
    if (ch == 0) {
        goto d_ch0;
    }
    if (ch == 2) {
        goto d_ch2;
    }
    return;
d_ch0:
    *(s16 *)(p + 256 + 72) = v;
    return;
d_ch2:
    if (v >= 20) {
        *(s16 *)(p + 256 + 76) = v;
    }
    return;
}
