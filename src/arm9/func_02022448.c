#pragma avoid_byte strb
#include "ctx.h"

typedef struct { s32 w[3]; } V3w;
typedef struct { u16 a[9]; } Tab9;

extern s32 data_0213b4f0[];
extern s32 data_0213b4e4[];
extern u16 data_0213b620[];
extern u8 *data_0214f464;
extern u8 *data_0215be34;
extern u8 data_02152cd8[];
extern void func_02022a90(void);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_0208122c(s32 a, s32 b, s32 *c);

#define fxm(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_02022448(u8 *p1)
{
    s32 A[3];
    s32 B[3];
    V3w l78;
    V3w l6c;
    u16 l60[10];
    s32 V1[3];
    s32 V2[3];
    s32 V3[3];
    s32 iv7;
    s32 *q;
    s32 sc;
    s32 *pv;
    s32 *bev;
    s32 k;

    l78 = *(V3w *)data_0213b4f0;
    l6c = *(V3w *)data_0213b4e4;
    *(Tab9 *)l60 = *(Tab9 *)data_0213b620;
    func_02022a90();
    {
        s32 s1 = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);
        q = (s32 *)((u8 *)data_0214f464 + 0x73c8);
        q[0] = fxm(l78.w[0], s1);
        q[1] = fxm(l78.w[1], s1);
        q[2] = fxm(l78.w[2], s1);
    }
    {
        s32 s2 = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);
        q = (s32 *)((u8 *)data_0214f464 + 0x73d4);
        q[0] = fxm(l6c.w[0], s2);
        q[1] = fxm(l6c.w[1], s2);
        q[2] = fxm(l6c.w[2], s2);
    }
    V1[0] = *(s32 *)(data_02152cd8 + 0x4c);
    V1[1] = *(s32 *)(data_02152cd8 + 0x58);
    V1[2] = *(s32 *)(data_02152cd8 + 0x64);
    V2[0] = *(s32 *)(data_02152cd8 + 0x50);
    V2[1] = *(s32 *)(data_02152cd8 + 0x5c);
    V2[2] = *(s32 *)(data_02152cd8 + 0x68);
    V3[0] = *(s32 *)(data_02152cd8 + 0x54);
    V3[1] = *(s32 *)(data_02152cd8 + 0x60);
    V3[2] = *(s32 *)(data_02152cd8 + 0x6c);
    *(V3w *)A = *(V3w *)(p1 + 0x2dc);
    *(V3w *)B = *(V3w *)A;
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73c8), V1, A, A);
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73cc), V2, A, A);
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73d0), V3, A, A);
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73d4), V1, B, B);
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73d8), V2, B, B);
    func_01ff832c(*(s32 *)((u8 *)data_0214f464 + 0x73dc), V3, B, B);
    k = 0;
    do {
        u8 *g = data_0214f464;
        bev = (s32 *)data_0215be34;
        iv7 = func_0208122c(bev != 0 ? *bev : 0, (s16)l60[k], A);
        *(s32 *)(g + 0x73e0 + k * 4) = iv7;
        pv = *(s32 **)((u8 *)data_0214f464 + 0x73e0 + k * 4);
        if (pv != 0) {
            sc = (s16)*(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);
            pv[0x54 / 4] = sc;
            if (k == 2) {
                pv = *(s32 **)((u8 *)data_0214f464 + 0x73e0 + k * 4);
                pv[0x20 / 4] = B[0] + *(s32 *)(*(s32 *)pv[0x18 / 4] + 4);
                pv[0x24 / 4] = B[1] + *(s32 *)(*(s32 *)pv[0x18 / 4] + 8);
                pv[0x28 / 4] = B[2] + *(s32 *)(*(s32 *)pv[0x18 / 4] + 12);
                sc = *(s32 *)(*(u8 **)(p1 + 0x9e8) + 8);
                (*(s32 **)((u8 *)data_0214f464 + 0x73e0 + k * 4))[0x50 / 4] = (s16)fxm(sc, 25);
            }
        }
        k = (s16)(k + 1);
    } while (k < 9);
    data_0214f464[12] = 1;
}
