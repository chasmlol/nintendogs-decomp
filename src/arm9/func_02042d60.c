#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f464;
extern u16 data_0213b4cc[];
extern void func_0202944c(u8 *p, u32 a, u32 b, u32 c);

#define PRED(res, s_, o_) do { \
    if ((s_) >= 4 && (s_) <= 8) res = 1; \
    else if ((s_) == 0x57) res = 1; \
    else { \
        s32 w_ = *(s16 *)((u8 *)(o_) + 0xea); \
        if (w_ >= 15 && w_ <= 75) res = 1; \
        else if (w_ >= 0x119 && w_ <= 0x13c) res = 1; \
        else res = 0; \
    } \
} while (0)

#define QRED(res, s_, o_) do { \
    s32 w_ = *(s16 *)((u8 *)(o_) + 0xea); \
    if (w_ >= 0x478 && w_ <= 0x47e) res = 0; \
    else if (w_ >= 0x4c7 && w_ <= 0x4ca) res = 0; \
    else if ((s_) == 0x53) res = 0; \
    else if ((s_) == 0x54) res = 0; \
    else res = 1; \
} while (0)

#define QRED1(res, s_, o_) do { \
    (o_) = *(s16 *)((u8 *)(o_) + 0xea); \
    if ((o_) >= 0x478 && (o_) <= 0x47e) res = 0; \
    else if ((o_) >= 0x4c7 && (o_) <= 0x4ca) res = 0; \
    else if ((s_) == 0x53) res = 0; \
    else if ((s_) == 0x54) res = 0; \
    else res = 1; \
} while (0)

void func_02042d60(void)
{
    s8 i;
    u8 *obj;
    s32 o;
    u8 *o2;
    u8 *ct;
    s32 s;
    s32 pr;
    s32 pq;
    s32 flag;
    s32 t;
    s32 t8;
    u32 k;
    u32 one;
    u32 uv;

    ct = data_0214f464;
    if (*(u16 *)(ct + 0x26) == 0) return;
    *(u16 *)(ct + 0x26) = *(u16 *)(ct + 0x26) - 1;
    if (*(u16 *)(ct + 0x26) != 0) return;
    obj = data_0214f464;

    flag = 0;
    i = 0;
    do {
        if (i < 0 || i >= 3) o = 0;
        else o = (s32)*(u8 **)(obj + i * 4 + 0x54);
        if (o != 0) {
            s = *(s16 *)((u8 *)o + 0xf0);
            PRED(pr, s, o);
            if (pr) pq = 0;
            else QRED1(pq, s, o);
            if (pq == 0) {
                flag = 0;
                goto L16c;
            }
        }
        i = i + 1;
    } while (i < 3);
    flag = 1;
L16c:
    if (flag == 0) return;

    one = 1;
    k = 0x10dcd;
    i = 0;
    do {
        if (i < 0 || i >= 3) o2 = 0;
        else o2 = *(u8 **)(data_0214f464 + i * 4 + 0x54);
        if (o2 != 0) {
            s32 s2;
            s32 pr2;
            s32 pq2;
            ct = *(u8 **)(o2 + 0x9e8);
            if (*(u8 *)(ct + 0x72) != 0 && *(s16 *)(ct + 0x1c) <= data_0213b4cc[*(u8 *)(ct + 0x11) - 1] + 1000) {
                s2 = *(s16 *)(o2 + 0xf0);
                PRED(pr2, s2, o2);
                if (pr2) pq2 = 0;
                else QRED(pq2, s2, o2);
                if (pq2 != 0) {
                    *(u8 *)(o2 + 0xaa) = (u8)one;
                    *(u8 *)(o2 + 0xd2) = (u8)one;
                    *(s16 *)(*(u8 **)(o2 + 0x9e8) + 0x24) = 10000;
                    t8 = *(s8 *)(o2 + 0x8d);
                    if (t8 == 3) goto C3;
                    if (t8 == 4) goto C4;
                    uv = *(u32 *)data_0214f464 * k + 1;
                    *(u32 *)data_0214f464 = uv;
                    t = (s16)(u16)(((u32)(u16)uv * 5) >> 16);
                    goto JOIN;
C3:
                    uv = *(u32 *)data_0214f464 * k + 1;
                    *(u32 *)data_0214f464 = uv;
                    t = (s16)((u16)(((u32)(u16)uv * 5) >> 16) + 10);
                    goto JOIN;
C4:
                    uv = *(u32 *)data_0214f464 * k + 1;
                    *(u32 *)data_0214f464 = uv;
                    t = (s16)((u16)(((u32)(u16)uv * 5) >> 16) + 20);
JOIN:
                    {
                        s32 s3;
                        s32 pr3;
                        s32 pq3;
                        s3 = *(s16 *)(o2 + 0xf0);
                        PRED(pr3, s3, o2);
                        if (pr3) pq3 = 0;
                        else QRED(pq3, s3, o2);
                        if (pq3 != 0) func_0202944c(o2, one, 0, t);
                    }
                }
            }
        }
        i = i + 1;
    } while (i < 3);
}
