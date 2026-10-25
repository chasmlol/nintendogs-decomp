#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464[];
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026bac(u8 *p);
extern s32 func_02035164(u8 *p);

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

#define FIX(X, Y, S1, S2) { func_0203e8cc(p, 0, X); func_0203e8cc(p, 3, Y); func_02026bac(p); SwapByte(S1, (vu8 *)(p + 147)); SwapByte(S2, (vu8 *)(p + 151)); return; }
#define VAL(X, S1, S2) { func_0203e8cc(p, 0, X); v = func_02035164(p); func_0203e8cc(p, 3, v); func_02026bac(p); SwapByte(S1, (vu8 *)(p + 147)); SwapByte(S2, (vu8 *)(p + 151)); return; }

void func_ov006_021600a8(u8 *p)
{
    u32 *pc;
    u32 cnt;
    u32 idx;
    s32 v;

    if (func_0203567c(p) == 0) {
        return;
    }
    switch (*(s8 *)(p + 142)) {
    case 0:
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        idx = (u16)((cnt << 16) >> 29);
        switch (idx) {
        case 0: FIX(0, 0, 3, 0)
        case 1: FIX(340, 0, 2, 0)
        case 2: FIX(0x155, 0, 2, 0)
        case 3: VAL(0x111, 0, 1)
        }
        break;
    case 2:
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        idx = (u16)((cnt << 16) >> 29);
        switch (idx) {
        case 0: FIX(0, 0, 3, 2)
        case 1: VAL(0x162, 0, 2)
        case 2: FIX(6, 0, 2, 2)
        case 3: FIX(0x155, 0, 3, 2)
        }
        break;
    case 3:
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        idx = (u16)((cnt << 16) >> 29);
        switch (idx) {
        case 0: FIX(0, 0, 3, 2)
        case 1: VAL(0x162, 0, 2)
        case 2: VAL(0x163, 0, 2)
        case 3: FIX(6, 0, 2, 2)
        }
        break;
    case 1:
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        idx = (u16)((cnt << 16) >> 29);
        switch (idx) {
        case 0: FIX(132, 0, 0, 0)
        case 1: VAL(0x111, 0, 0)
        case 2: FIX(6, 0, 2, 0)
        case 3: FIX(141, 0, 2, 0)
        }
        break;
    case 4:
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        idx = (u16)((cnt << 16) >> 29);
        switch (idx) {
        case 0: FIX(0, 0, 3, 2)
        case 1: FIX(6, 0, 2, 2)
        case 2: FIX(132, 0, 0, 2)
        }
        break;
    }
}
