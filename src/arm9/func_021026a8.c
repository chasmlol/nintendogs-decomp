#include "ctx.h"

typedef struct { u16 a; } S2;
typedef struct { u16 lo; u16 hi; } Rng;

typedef struct {
    u32 a0;
    u16 *t2;
    Rng *t1;
    u8 *wd;
    u16 a10;
    u16 dflt;
    u8 a14[3];
    u8 sp;
    u16 cnt2;
    u16 cnt1;
} Font;

extern s32 func_02085e98(Font *p, u16 *q, s32 r);
extern s32 func_02085e6c(Font *p, u16 *q, s32 r);
extern s32 func_02086688(S2 a, s32 b);
extern s32 func_02086640(S2 a, s32 b);
extern void func_02085ef4(Font *p, u16 *q, s32 *r, s32 s);
extern void func_020861b4(Font *p, s32 q, s32 r, s32 s, u16 t, s32 u);

void func_021026a8(Font *param_1, s32 param_2, S2 param_3, S2 param_4, s32 param_5, s32 param_6,
                   u16 *param_7, s32 param_8, s32 param_9)
{
    u16 n;
    s32 p9c;
    s32 iVar5;
    Font *p;
    u16 *txt;
    s32 iVar2;
    s32 iVar6;
    s32 iVar4;
    u16 gg;
    s32 width;
    s32 local_44;
    s32 i;
    u32 acc;
    u32 g;
    u32 v;
    u32 ch;
    s32 lo;
    s32 hi;
    Rng *t;
    u32 align;
    u16 *t2;
    s32 mid;

    p9c = param_9;
    p = param_1;
    txt = param_7;
    iVar2 = func_02085e98(p, txt, param_5);
    iVar5 = func_02085e6c(p, txt, param_6);
    iVar4 = func_02086688(param_3, iVar2);
    local_44 = func_02086640(param_4, iVar5);
    align = ((u32)param_3.a << 16) >> 30;
    if (align != 1) {
        if (align == 2) {
            iVar4 = iVar4 + iVar2;
        }
    } else {
        iVar4 = iVar4 + (iVar2 + 1) / 2;
    }
    iVar6 = iVar4;
    func_02085ef4(p, txt, &width, param_5);
    if (align != 1) {
        if (align == 2) {
            iVar4 = iVar4 - width;
        }
    } else {
        iVar4 = iVar4 - (width + 1) / 2;
    }
    ch = txt[0];
    if (ch == 0) {
        return;
    }
    do {
        p9c = p9c - 1;
        if (ch == 10) {
            iVar4 = iVar6;
            func_02085ef4(p, txt + 1, &width, param_5);
            if (align != 1) {
                if (align == 2) {
                    iVar4 = iVar6 - width;
                }
            } else {
                iVar4 = iVar6 - (width + 1) / 2;
            }
            local_44 = local_44 + (p->sp + param_6);
        } else if (ch != 13) {
            acc = 0;
            i = acc;
            n = p->cnt1;
            if ((s32)n > 0) {
                t = p->t1;
                do {
                    if (t[i].lo <= ch && ch <= *(u16 *)((u32)t + (u32)i * 4 + 2)) {
                        g = acc + ch - t[i].lo;
                        goto found;
                    }
                    acc = acc + ((t[i].hi - *(u16 *)((u32)t + (u32)i * 4)) + 1);
                    i = i + 1;
                } while (i < n);
            }
            acc = (u16)acc;
            g = p->dflt;
            t2 = p->t2;
            lo = i - i;
            hi = p->cnt2 - 1;
            while (lo <= hi) {
                mid = lo + ((hi - lo) >> 1);
                v = t2[mid];
                if (v > ch) {
                    hi = mid - 1;
                } else if (v < ch) {
                    lo = mid + 1;
                } else {
                    g = acc + mid;
                    break;
                }
            }
        found:
            gg = g;
            if (p9c == 0) {
                func_020861b4(p, param_2, iVar4 - p->wd[gg * 2], local_44, gg, param_8);
            }
            iVar4 = iVar4 + (param_5 + (p->wd + gg * 2)[1]);
        }
        txt = txt + 1;
        ch = txt[0];
    } while (ch != 0);
}
