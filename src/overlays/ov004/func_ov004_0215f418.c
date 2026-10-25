#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u8 p0[8];
    s32 cnt;
    u8 p1[6];
    s16 f12;
    s16 f14;
    s16 f16;
    s16 f18;
    u8 p2[2];
    u8 b1c;
    u8 b1d;
    u8 p3[2];
    s32 f20;
    u8 p4[0x12f0 - 0x24];
    u32 f12f0;
    u8 p5[0x36c4 - 0x12f4];
    u8 *f36c4;
} GS;

extern u32 data_ov004_02170320;
extern u32 func_02067898(u32 a, u32 b);

void func_ov004_0215f418(void)
{
    GS *G;
    GS *pb;
    s32 x;
    s32 fl;
    s32 iVar7;
    s32 sVar1;
    s32 d3;
    s32 d2;
    s16 t12;
    s32 cn;
    s64 l3;
    s64 l4;
    s32 m3;
    s32 m4;
    u32 zero;

    G = *(GS **)&data_ov004_02170320;
    cn = G->cnt;
    cn = cn + 1;
    G->cnt = cn;
    G = *(GS **)&data_ov004_02170320;
    x = G->cnt;
    if (x >= 30) {
        *(s16 *)(G->f36c4 + 2) = G->f16;
        G = *(GS **)&data_ov004_02170320;
        *(s16 *)(G->f36c4 + 4) = G->f18;
        fl = 1;
    } else {
        iVar7 = func_02067898(x << 12, 0x1e000);
        G = *(GS **)&data_ov004_02170320;
        sVar1 = G->f14;
        d3 = G->f18 - sVar1;
        t12 = G->f12;
        d2 = G->f16 - t12;
        l3 = (s64)iVar7 * (s64)(d3 * 0x1000) + 0x800;
        l4 = (s64)iVar7 * (s64)(d2 * 0x1000) + 0x800;
        m3 = (s32)(l3 >> 12);
        m4 = (s32)(l4 >> 12);
        fl = 0;
        *(s16 *)(G->f36c4 + 2) = (s16)((m4 + t12 * 0x1000 + 0x800) >> 12);
        G = *(GS **)&data_ov004_02170320;
        *(s16 *)(G->f36c4 + 4) = (s16)((m3 + sVar1 * 0x1000 + 0x800) >> 12);
    }
    if (fl == 0) {
        return;
    }
    zero = 0;
    G = *(GS **)&data_ov004_02170320;
    G->f20 = zero;
    G = *(GS **)&data_ov004_02170320;
    pb = (GS *)G->f36c4;
    if (pb->cnt > 0 && *(u8 *)pb == G->b1c && *((u8 *)pb + 1) == G->b1d) {
        G->f12f0 = zero;
        *(u8 *)*(GS **)&data_ov004_02170320 = 2;
        G = *(GS **)&data_ov004_02170320;
        *(u8 *)((u8 *)G + 0x3000 + 0x6cc) = (u8)zero;
        return;
    }
    *(u8 *)G = 0;
}
