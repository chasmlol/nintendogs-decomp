#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
#pragma opt_lifetimes off

extern u32 data_0215b664;
extern u32 data_02144a80;
extern u32 data_02144a7c;
extern u32 data_0215b658;
extern u32 data_0215b654;
extern u32 data_0215b65c;

extern void func_020e1c2c(u32 a);
extern void func_020e0240(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020e0114(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 *func_02071978(u32 a);
extern u32 func_02071778(u32 a);
extern void func_0208aba0(u32 a, u32 b, u32 c, u8 *d);
extern void func_0208a990(u32 a, u32 b, u32 c, u8 *d);

void func_020e1348(u32 p1, u32 p2, u32 p3, u32 p4, u32 p5)
{
    u32 pos;
    u32 cnt;
    u32 unit;
    u32 total;
    u32 start;
    s32 start2;
    u32 lim;
    u32 len;
    u32 *pp;
    u32 v;
    u32 id;
    u8 st[12];

    pos = p5;
    data_0215b664 = 0;
    func_020e1c2c(p2);
    total = data_02144a80;
    pos = (pos * total) / 127u;
    unit = total / 40u;
    start = pos & ~1u;
    cnt = start / unit;
    len = (cnt + 2) * unit;
    if (len >= total) {
        len = total;
    }
    func_020e0240(p2, p1, start, len, 0);
    v = cnt + 2;
    data_02144a7c = v;
    if (v >= 40) {
        v = 40;
        data_02144a7c = v;
    }
    lim = data_02144a7c;
    len = data_02144a80;
    start2 = (s32)pos & ~1;
    data_0215b658 = p2;
    data_0215b654 = p1;
    data_0215b65c = lim * (len / 40u) - start2;
    func_020e0114(p1, 0, 0, 8000, 0, (len / 100u) * 100 - start2);
    pp = func_02071978(p3);
    if (pp == 0) {
        return;
    }
    id = func_02071778(*pp);
    if (id == 0) {
        return;
    }
    func_0208aba0(id, p4, 60, st);
    st[0] = 4;
    *(u16 *)(st + 4) = (u16)(p1 >> 16);
    *(u16 *)(st + 2) = (u16)p1;
    st[6] = 60;
    func_0208a990(id, p4, 60, st);
}
