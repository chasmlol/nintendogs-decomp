#pragma avoid_byte strb
#include "ctx.h"
extern u8 *data_0214f464;
extern u8 data_0213b842[];
extern void func_02035aa0(u8 *p);
extern void func_02036138(u8 *p, s32 *a, s32 b, s32 c);
extern void func_02035fbc(u8 *p, s32 *a, s32 b, s32 c);
extern void func_02035e64(u8 *p, s32 *a, s32 b, s32 c);
extern s32 func_0200c0fc(s32 a);
extern void func_0200c0e8(s32 a, s32 *b);
extern s32 func_02009bd0(s32 *a, s32 *b);

static inline u32 SwapRet(u32 v, u8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

typedef struct { s32 w[3]; } T3;

void func_02035c98(u8 *param_1, s32 param_2)
{
    s32 iVar5;
    u32 uVar3;
    u8 *p;
    s32 pe;
    s32 st[4];
    s32 iVar4;
    s32 iVar2;
    s32 bVar2;
    s32 x;
    u32 r;

    p = param_1;
    pe = param_2;
    if (*(s8 *)(p + 0x88) != *(u16 *)(data_0214f464 + 0x38)) {
        return;
    }
    x = *(s16 *)(p + 0xf0);
    if (x < 10) goto zero;
    if (x < 111) {
        bVar2 = 1;
        goto range_done;
    }
zero:
    bVar2 = 0;
range_done:
    if (bVar2) {
        func_02035aa0(p);
        return;
    }
    st[0] = 0;
    *(s16 *)(p + 0x13e) = -1;
    if (*(s8 *)(p + 0x8b) != 5) {
        func_02036138(p, &st[0], 1, pe);
        func_02035fbc(p, &st[0], 1, pe);
        func_02035e64(p, &st[0], 1, pe);
        iVar5 = *(s32 *)(data_0214f464 + 0x60);
        if (iVar5 != 0 && func_0200c0fc(iVar5) == 1) {
            uVar3 = data_0213b842[*(s8 *)(p + 0x8d)];
            func_0200c0e8(iVar5, &st[1]);
            iVar4 = func_02009bd0(&st[1], (s32 *)(p + 0x2a0));
            iVar2 = iVar4 - uVar3 * (uVar3 << 14);
            if (iVar2 < st[0]) {
                iVar4 = 0;
                do {
                    if (*(s16 *)(p + iVar4 * 2 + 0x140) == 0xb) {
                        bVar2 = 0;
                        goto found;
                    }
                    iVar4 = (s16)(iVar4 + 1);
                } while (iVar4 < 2);
                bVar2 = 1;
found:
                if (bVar2) {
                    st[0] = iVar2;
                    *(s16 *)(p + 0x13e) = 0xb;
                }
                if (pe != 0) {
                    *(T3 *)(p + 0x3b4) = *(T3 *)&st[1];
                }
            }
        }
    }
    if (pe == 0) {
        return;
    }
    if (*(s16 *)(p + 0x13e) != -1) {
        r = SwapRet(*(s8 *)(p + 0x94), p + 0x93);
    } else {
        r = SwapRet(0, p + 0x93);
    }
    return;
}
