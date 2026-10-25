#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 type;        /* 0 */
    u8 pad1;
    u16 addrLo;     /* 2 */
    u16 addrHi;     /* 4 */
    u8 seq;         /* 6 */
    u8 pad7;
    u32 pad8;
} PacketHdr;

typedef struct {
    u8 header[12];
    s8 data[1];     /* 0x0c */
} Packet;

#define ABS(x) ((x) < 0 ? -(x) : (x))

extern u32 data_02144a80;
extern void func_0206c9b8(const void *src, void *dst, u32 size);          /* MI_CpuCopy8 */
extern void func_020dfe88(const u8 *src, s16 *out, u32 n, u16 *state);
extern void func_020e0114(Packet *buf, u32 a, u32 b, u32 rate, u32 c, u32 size);
extern void func_0206c924(void *dest, u8 data, u32 size);                 /* MI_CpuFill8 */
extern u32 *func_02071978(u32 id);
extern void *func_02071778(u32 a);
extern void func_0208aba0(void *h, u32 a, u32 seq, PacketHdr *hdr);
extern void func_0208a990(void *h, u32 a, u32 seq, PacketHdr *hdr);

void func_020e0db0(Packet *dst, const u8 *src, u32 id, u32 page, u32 count)
{
    u16 state[2];
    s16 out[2];
    s16 out2[2];
    PacketHdr hdr;
    PacketHdr hdr2;
    const u8 *p;
    u32 chunk;
    u32 seq;
    u32 held;
    u32 lim;
    u32 pos;
    u32 n;
    u32 extra;
    s32 cur;

    chunk = (data_02144a80 / count) & ~1;
    p = src + 12;
    seq = 0;
    pos = 0;
    n = 0;
    extra = 0;
    func_0206c9b8(p, state, 4);
    p += 4;
    lim = chunk >> 3;
    while (pos < data_02144a80 && data_02144a80 - pos >= chunk) {
        func_020dfe88(p, out, 2, state);
        p++;
        pos += 2;
        dst->data[n] = out[0] >> 8;
        dst->data[n + 1] = out[1] >> 8;
        n += 2;
        if (n >= chunk - extra) {
            u32 cross;
            s32 prev;
            extra = 0;
            held = 0;
            cross = 0;
            prev = *(dst->data + n - 1);
            while (extra < lim && cross == 0 && data_02144a80 - pos >= chunk) {
                func_020dfe88(p, out, 2, state);
                p++;
                cur = (s8)(out[0] >> 8);
                dst->data[n] = cur;
                n++;
                if ((prev >= 0 && cur < 0) || (prev < 0 && cur >= 0)) {
                    cross = 1;
                }
                prev = cur;
                cur = (s8)(out[1] >> 8);
                if (cross == 0) {
                    dst->data[n] = cur;
                    n++;
                    if ((prev >= 0 && cur < 0) || (prev < 0 && cur >= 0)) {
                        cross = 1;
                    }
                } else {
                    held++;
                }
                prev = cur;
                extra += 2;
                pos += 2;
            }
            func_020e0114(dst, 0, 1, 8000, 0, n);
            {
                s32 k;
                s32 best = 0;
                for (k = 0; k < (s32)n; k++) {
                    if (best < ABS(dst->data[k])) {
                        best = (s8)ABS(dst->data[k]);
                    }
                }
                if (best <= 32) {
                    func_0206c924(dst->data, 0, n);
                }
            }
            {
                u32 s = seq;
                u32 *ptr;
                void *h;
                seq = (s + 1) & 0xff;
                ptr = func_02071978(id);
                if (ptr != NULL && (h = func_02071778(*ptr)) != NULL) {
                    func_0208aba0(h, page, s, &hdr);
                    hdr.type = 4;
                    hdr.seq = s;
                    hdr.addrHi = (u32)dst >> 16;
                    hdr.addrLo = (u32)dst;
                    func_0208a990(h, page, s, &hdr);
                }
            }
            {
                u8 *q = (u8 *)dst->data + n;
                u32 pad = 4 - ((u32)q & 3);
                if (pad == 4) {
                    pad = 0;
                }
                dst = (Packet *)(pad + (u32)q);
            }
            n = 0;
            if (held != 0) {
                dst->data[n++] = cur;
                extra--;
            }
            if (seq >= 100) {
                seq = 0;
                page++;
            }
        }
    }
    while (pos < data_02144a80) {
        func_020dfe88(p, out2, 2, state);
        dst->data[n] = out2[0] >> 8;
        dst->data[n + 1] = out2[1] >> 8;
        pos += 2;
        p++;
        n += 2;
    }
    {
        u32 lo;
        u32 hi;
        u32 base;
        base = page * 100;
        if (seq + base >= count) {
            return;
        }
        hi = (u32)dst >> 16;
        lo = (u32)dst & 0xffff;
        do {
            u32 *ptr;
            void *h;
            func_020e0114(dst, 0, 1, 8000, 0, n);
            ptr = func_02071978(id);
            if (ptr != NULL && (h = func_02071778(*ptr)) != NULL) {
                func_0208aba0(h, page, seq, &hdr2);
                hdr2.type = 4;
                hdr2.seq = seq;
                hdr2.addrLo = lo;
                hdr2.addrHi = hi;
                func_0208a990(h, page, seq, &hdr2);
            }
            seq = (seq + 2) & 0xff;
        } while (seq + base < count);
    }
}
