#include "ctx.h"
extern u8 *data_ov004_02170320;

void func_ov004_02160b0c(void)
{
    s32 cnt;
    s32 i;
    s32 k;
    s32 lim;
    u8 *Q;
    u8 *D;
    s32 a;
    s32 b;
    s32 c1;
    s32 c2;
    u8 *P;
    s32 m;
    s32 j;

    cnt = 0;
    i = 0;
    do {
        ((s32 *)(*(u8 **)(data_ov004_02170320 + 0x36c4) + 0x2000 + 0x2a8))[i] = -1;
        i = i + 1;
    } while (i < 7);
    P = data_ov004_02170320;
    Q = *(u8 **)(P + 0x36c4);
    j = *(s32 *)(Q + 0x2000 + 0x264);
    if (j >= *(s32 *)(Q + 8)) {
        return;
    }
    do {
        k = 0;
        Q = *(u8 **)(data_ov004_02170320 + 0x36c4);
        c1 = *(u8 *)(Q + (u32)j * 2 + 0xc);
        c2 = *(u8 *)(Q + (u32)j * 2 + 0xd);
        m = *(s32 *)(data_ov004_02170320 + 0x1300);
        if (m > 0) {
            do {
                D = *(u8 * volatile *)&data_ov004_02170320;
                a = *(u8 *)(D + 0x1304 + k * 2);
                b = *(u8 *)(D + 0x1305 + k * 2);
                if (a == c1 && b == c2) {
                    Q = *(u8 **)(P + 0x36c4);
                    lim = (s32)*(u8 *)(Q + 0x2000 + 0x2a4) - (s32)*(u8 *)(Q + 0x2000 + 0x2a5);
                    if (cnt < lim) {
                        ((s32 *)(Q + 0x2000 + 0x2a8))[cnt] = j;
                        P = data_ov004_02170320;
                        cnt = cnt + 1;
                        m = *(s32 *)(P + 0x1300);
                        k = m;
                    }
                }
                k = k + 1;
            } while (k < m);
        }
        j = j + 1;
    } while (j < *(s32 *)(*(u8 **)(P + 0x36c4) + 8));
}
