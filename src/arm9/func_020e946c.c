#pragma avoid_byte strb
#include "ctx.h"

extern s8 data_027c0bb8[];
extern u8 data_02132f1c[];
extern u8 data_027c0bbc[];
extern u32 data_027c0bc0[];
extern u32 data_027c0bc4[];

void func_020e946c(void)
{
    u8 loc[6];
    s32 mode;
    u32 x;
    u32 u;
    u32 sel;
    u8 *tb;
    u8 *p;
    s32 idx;

    mode = data_027c0bb8[0];
    if (mode == 3) {
        goto blkA;
    }
    if (mode != 1) {
        goto blkB;
    }
blkA:
    idx = mode * 3;
    data_027c0bbc[0] = data_02132f1c[idx];
    p = data_02132f1c + idx;
    data_027c0bbc[1] = p[1];
    data_027c0bbc[2] = p[2];
    return;
blkB:
    x = data_027c0bc0[0];
    u = x << 7;
    if (x >= 30) {
        u = (x - 30) << 7;
    }
    sel = data_027c0bc4[0];
    if (sel != 6) {
        goto chk18;
    }
    if (x >= 30) {
        goto blkD;
    }
    tb = data_02132f1c;
    loc[0] = tb[9];
    loc[1] = tb[10];
    loc[2] = tb[11];
    loc[3] = tb[0];
    loc[4] = tb[1];
    loc[5] = tb[2];
    goto chk18;
blkD:
    tb = data_02132f1c;
    loc[0] = tb[0];
    loc[1] = tb[1];
    loc[2] = tb[2];
    loc[3] = tb[3];
    loc[4] = tb[4];
    loc[5] = tb[5];
chk18:
    if (sel != 18) {
        goto tail;
    }
    if (x >= 30) {
        goto blkF;
    }
    tb = data_02132f1c;
    loc[0] = tb[3];
    loc[1] = tb[4];
    loc[2] = tb[5];
    loc[3] = tb[6];
    loc[4] = tb[7];
    loc[5] = tb[8];
    goto tail;
blkF:
    tb = data_02132f1c;
    loc[0] = tb[6];
    loc[1] = tb[7];
    loc[2] = tb[8];
    loc[3] = tb[9];
    loc[4] = tb[10];
    loc[5] = tb[11];
tail:
    {
        s32 cnt = 0;
        u8 *p8 = loc + 3;
        u8 *p4 = loc;
        u8 *ob2 = data_027c0bbc;
        u32 w5 = 4096 - u;
        do {
            s32 v = (s32)((u32)*p4 * w5 + (u32)*p8 * u) >> 12;
            if (v > 31) {
                v = 31;
            }
            *ob2 = (u8)v;
            p8++;
            p4++;
            ob2++;
            cnt++;
        } while (cnt < 3);
    }
}
