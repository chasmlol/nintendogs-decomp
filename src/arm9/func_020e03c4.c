#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 type;
    u8 pad;
    u16 lo;
    u16 hi;
    u8 ch;
    u8 pad7[5];
} Info;

typedef struct {
    u8 hdr[4];
    s16 s1[2];
    s16 s2[2];
    s16 s3[2];
    s16 s4[2];
} G0;
typedef struct {
    u32 ends[13];
    Info info;
    Info info2;
} G1;


extern u32 data_02144a80;
extern void func_0206c9b8(void *a, void *b, s32 c);
extern void func_020dfe88(void *a, s16 *b, s32 c, void *d);
extern void func_020e0cb8(void *a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_020e0114(void *a, s32 b, u8 c, s32 d, s32 e, s32 f);
extern u32 *func_02071978(u32 a);
extern u32 func_02071778(u32 a);
extern void func_0208aba0(u32 a, u32 b, u8 c, Info *d);
extern void func_0208a990(u32 a, u32 b, u8 c, Info *d);

#define ABS(x) ((x) < 0 ? -(x) : (x))

#pragma opt_loop_invariants off
void func_020e03c4(s32 *peak, u8 *src, u32 res, u32 id, u32 count, u8 vol, s32 wide)
{
    u32 split;
    u8 *p;
    u32 ch;
    s32 npk;
    u32 lo2;
    u32 hi2;
    u32 len;
    u32 lo;
    u32 hi;
    s32 n;
    u8 mc;
    u8 cc;
    s32 seg;
    s16 *out16;
    u8 *out8;
    u32 state;
    s32 m;
    u32 k;
    u8 *in;
    u32 end0;
    u8 *in3;
    u32 pos;
    u32 start0;
    u32 pos3;
    u32 pos2;
    u32 q;
    s32 i;
    s32 j;
    s32 max;
    u32 diff;
    u32 sl;
    u32 h;
    u32 *e;
    G0 g0;
    u32 starts[13];
    G1 g1;

    split = 0;
    p = (u8 *)peak + 800;
    starts[0] = 0;
    g1.ends[0] = data_02144a80;
    out16 = (s16 *)(p + 12);
    out8 = p + 12;
    ch = 0;
    pos = 0;
    npk = 0;
    in = src + 12;
    func_0206c9b8(in, g0.hdr, 4);
    in += 4;
    while (pos < (n = data_02144a80)) {
        max = 0;
        for (j = 0; j < 200; j += 2) {
            func_020dfe88(in, g0.s1, 2, g0.hdr);
            in++;
            if (ABS(g0.s1[0]) > max) max = ABS(g0.s1[0]);
            if (ABS(g0.s1[1]) > max) max = ABS(g0.s1[1]);
            pos += 2;
        }
        peak[npk++] = max;
    }
    state = 0;
    k = 0;
    for (i = 0, pos2 = 0; i < 198; i++) {
        if (state == 0) {
            if (peak[i] < 0x3feb && (peak + i)[1] > 0x3feb && (peak + i)[2] > 0x3feb) {
                if (k != count) {
                    starts[k] = pos2;
                }
                state = 1;
            }
        } else if (pos - starts[k] >= 800 && peak[i] < 0x1000 && (peak + i)[1] < 0x1000) {
            state = 0;
            if (k != count) {
                g1.ends[k] = pos2;
                k++;
            } else {
                (g1.ends + k)[-1] = pos2;
            }
        }
        pos2 += 200;
    }
    if (state) {
        if (k >= count) k = count - 1;
        g1.ends[k] = n;
        k++;
    }
    end0 = g1.ends[0];
    if (k == 0) {
        starts[1] = 0;
        k = 1;
    }
    start0 = starts[0];
    diff = end0 - start0;
    if (k == 1 && diff >= 16000) {
        q = diff / 4000;
        if (diff % 4000 > 3999) q++;
        sl = diff / q;
        for (k = 0; k < q; k++) {
            if (k != q - 1) {
                u32 v = (sl * (s32)(k + 1) + start0) & ~1;
                g1.ends[k] = v;
                (starts + k)[1] = v;
            } else {
                g1.ends[k] = end0;
            }
        }
        split = 1;
    }
    pos3 = 0;
    seg = 0;
    in3 = src + 12;
    func_0206c9b8(in3, g0.hdr, 4);
    in3 += 4;
    while (pos3 < starts[0]) {
        func_020dfe88(in3, g0.s2, 2, g0.hdr);
        pos3 += 2;
        in3++;
    }
    seg++;
    j = 0;
    while (pos3 < data_02144a80 && seg < count) {
        m = ch;
        func_020dfe88(in3, g0.s3, 2, g0.hdr);
        in3++;
        if (wide == 1) {
            out16[j++] = g0.s3[0];
            out16[j++] = g0.s3[1];
        } else {
            out8[j++] = g0.s3[0] >> 8;
            out8[j++] = g0.s3[1] >> 8;
        }
        pos3 += 2;
        if (pos3 == starts[seg]) {
            if (split) {
                if (wide == 1) {
                    if (seg != 1) func_020e0cb8(out16, 0, 20, 0, 0x7fff, 1);
                    if (seg != k) func_020e0cb8(out16, (g1.ends + seg)[-1] - (starts + seg)[-1] - 20, (g1.ends + seg)[-1] - (starts + seg)[-1], 0x7fff, 0, 1);
                } else {
                    if (seg != 1) func_020e0cb8(out8, 0, 20, 0, 255, 0);
                    if (seg != k) func_020e0cb8(out8, (g1.ends + seg)[-1] - (starts + seg)[-1] - 20, (g1.ends + seg)[-1] - (starts + seg)[-1], 255, 0, 0);
                }
            }
            if (m < count) {
                len = (g1.ends + seg)[-1] - (starts + seg)[-1];
                lo = (u32)p & 0xffff;
                hi = (u32)p >> 16;
                do {
                    func_020e0114(p, wide, vol, 8000, 0, len);
                    e = func_02071978(res);
                    if (e != NULL && (h = func_02071778(*e)) != 0) {
                        mc = m;
                        func_0208aba0(h, id, mc, &g1.info);
                        g1.info.type = 4;
                        g1.info.lo = lo;
                        g1.info.hi = hi;
                        g1.info.ch = m;
                        func_0208a990(h, id, mc, &g1.info);
                    }
                    m += k;
                } while (m < count);
            }
            ch = (u8)(ch + 1);
            if (wide == 1) {
                p = (u8 *)(out16 + j);
                out16 = (s16 *)(p + 12);
            } else {
                p = out8 + j;
                out8 = p + 12;
            }
            seg++;
            j = 0;
        }
    }
    hi2 = (u32)p >> 16;
    lo2 = (u32)p & 0xffff;
    goto Ltest;
Ltop:
    {
        if (pos3 < data_02144a80) {
            do {
                func_020dfe88(in3, g0.s4, 2, g0.hdr);
                in3++;
                if (wide == 1) {
                    out16[j++] = g0.s4[0];
                    out16[j++] = g0.s4[1];
                } else {
                    out8[j++] = g0.s4[0] >> 8;
                    out8[j++] = g0.s4[1] >> 8;
                }
                pos3 += 2;
            } while (pos3 < data_02144a80);
        }
        if (split) {
            if (wide == 1) {
                func_020e0cb8(out16, 0, 20, 0, 0x7fff, 1);
            } else {
                func_020e0cb8(out8, 0, 20, 0, 255, 1);
            }
        }
        func_020e0114(p, wide, vol, 8000, 0, (g1.ends + seg)[-1] - (starts + seg)[-1]);
        e = func_02071978(res);
        if (e != NULL && (h = func_02071778(*e)) != 0) {
            cc = ch;
            func_0208aba0(h, id, cc, &g1.info2);
            g1.info2.type = 4;
            g1.info2.lo = lo2;
            g1.info2.hi = hi2;
            g1.info2.ch = ch;
            func_0208a990(h, id, cc, &g1.info2);
        }
    }
    ch += k;
Ltest:
    if (ch < count) goto Ltop;
}
