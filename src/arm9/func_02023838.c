#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213a8d4[];
extern u8 data_021369a8[][5];
extern u8 *data_0214f464;

extern void func_0202406c(u8 *p);
extern void func_020230fc(u8 *p);

static inline u32 SwapByte(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline u32 SwapP(vu8 *p, u32 v)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_02023838(u8 *p)
{
    s16 s;
    u8 *ptr;
    u32 cVar2;
    u32 u;
    s32 v1;
    u8 *base;
    u32 iVar4;
    u32 r;
    u32 z;
    u32 ta;
    u32 tb;

    s = *(s16 *)(p + 0xf6);
    if (s < 0 || s >= 20) {
        ptr = 0;
    } else {
        base = *(u8 **)(p + 0x9e8);
        ptr = base + 144 + s * 60;
    }
    SwapByte(1, (vu8 *)(p + 210));
    if (ptr == 0) {
        cVar2 = 0;
    } else if ((u = *(u16 *)ptr) == 0) {
        cVar2 = 0;
    } else if ((v1 = *(u16 *)(ptr + 2)) == 0) {
        cVar2 = 0;
    } else {
        if (u >= 79 && u < 99) {
            iVar4 = *(u32 *)(data_0213a8d4 + 0x13c);
        } else {
            iVar4 = *(u32 *)(data_0213a8d4 + u * 4);
        }
        if (v1 < data_021369a8[((u8 *)iVar4)[2] - 1][((u8 *)*(vu32 *)(p + 0x9e8))[0x13] - 1]) {
            cVar2 = 1;
        } else {
            cVar2 = 2;
        }
    }
    if (cVar2 != 1) {
        return;
    }
    *(vu16 *)(ptr + 2) = *(vu16 *)(ptr + 2) - 1;
    if (*(vu16 *)(ptr + 2) == 0) {
        func_0202406c(p);
        func_020230fc(p);
        ta = (__typeof__(ta))((u32)(p) + (168));
        z = (__typeof__(z))(0);
        r = SwapP((vu8 *)ta, z);
        tb = (__typeof__(tb))((u32)(p) + (165));
        *(u16 *)(p + 256 + 18) = z;
        *(u16 *)(p + 240) = 5;
        r = SwapP((vu8 *)tb, z);
        r = SwapP((vu8 *)(data_0214f464 + 15), 3);
    } else {
        ta = (__typeof__(ta))((u32)(p) + (168));
        z = (__typeof__(z))(0);
        r = SwapP((vu8 *)ta, z);
        *(u16 *)(p + 256 + 18) = z;
        *(u16 *)(p + 240) = 6;
        tb = (__typeof__(tb))((u32)(p) + (165));
        r = SwapP((vu8 *)tb, z);
        r = SwapP((vu8 *)(data_0214f464 + 15), 4);
    }
    return;
}
