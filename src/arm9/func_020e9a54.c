#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f130;
extern u8 data_027c0bb4[];
extern u8 data_027c0bc4[];
extern u8 data_027c0bc0[];
extern u8 data_027c0bb8[];
extern u8 data_027c0bb0[];
extern void func_020a0948(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

static inline u32 SwapByteU(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020e9a54(void)
{
    u8 cVar1;
    u32 uVar4;
    u32 uVar6;
    s32 iVar5;

    iVar5 = (s32)data_0214f130;
    cVar1 = *(u8 *)data_027c0bb4;
    uVar6 = *(u32 *)(iVar5 + 0x2c);
    *(u32 *)data_027c0bc4 = uVar6;
    uVar4 = *(u32 *)(iVar5 + 0x30);
    *(u32 *)data_027c0bc0 = uVar4;
    if (cVar1 == 0) goto c0;
    if (cVar1 == 1) goto c1;
    if (cVar1 == 2) {
        SwapByte(1, (vu8 *)data_027c0bb8);
    }
    goto tail;
c0:
    if (uVar6 < 6) {
        SwapByte(3, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 7) {
        SwapByte(0, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 0x12) {
        SwapByte(1, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 0x13) {
        SwapByte(2, (vu8 *)data_027c0bb8);
    } else {
        SwapByte(3, (vu8 *)data_027c0bb8);
    }
    goto tail;
c1:
    if (uVar6 < 6) {
        SwapByte(3, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 7 && uVar4 < 0x1e) {
        SwapByte(3, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 0x12) {
        SwapByte(1, (vu8 *)data_027c0bb8);
    } else if (uVar6 < 0x13 && *(u32 *)data_027c0bc0 < 0x1e) {
        SwapByte(1, (vu8 *)data_027c0bb8);
    } else {
        SwapByte(3, (vu8 *)data_027c0bb8);
    }
tail:
    if (*(s8 *)data_027c0bb8 == *(s8 *)data_027c0bb0) {
        (u32)(s32)*(s8 *)data_027c0bb0; return;
    }
    func_020a0948((s32)(u16)(s32)*(s8 *)data_027c0bb8);
    SwapByteU(*(s8 *)data_027c0bb8, (vu8 *)data_027c0bb0); return;
}
