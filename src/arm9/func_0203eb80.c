#pragma avoid_byte strb
#include "ctx.h"

#define XP(p) (*(u8 **)((p) + 0x9e8))

extern u8 *data_0215942c;
extern u8 *data_02159424;
extern void func_0203ee90(u8 *p);

static inline u32 SwapByte(u8 *p, u32 v)
{
    u32 r;
    *(u8 *)(p) = (u8)(v);
    return r;
}

void func_0203eb80(u8 *param_1)
{
    s32 t;

    switch (*(u16 *)data_0215942c) {
    case 3:
        if (*(s16 *)data_02159424 != 0) {
            goto c3call;
        }
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        return;
    c3call:
        func_0203ee90(param_1);
        return;
    case 1:
        func_0203ee90(param_1);
        return;
    case 4:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x18) = 5000;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1c) = 2000;
        t = (s16)(*(s16 *)(XP(param_1) + 0x1e) + 100);
        SwapByte(param_1 + 0xd2, 1);
        if (t < 0) {
            t = 0;
        }
        if (t > 10000) {
            t = 10000;
        }
        *(s16 *)(XP(param_1) + 0x1e) = (s16)t;
        t = (s16)(*(s16 *)(XP(param_1) + 0x20) + 100);
        SwapByte(param_1 + 0xd2, 1);
        if (t < 0) {
            t = 0;
        }
        if (t > 10000) {
            t = 10000;
        }
        *(s16 *)(XP(param_1) + 0x20) = (s16)t;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 10000;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x24) = 0;
        t = (s16)(*(s16 *)(XP(param_1) + 0x26) - 200);
        SwapByte(param_1 + 0xd2, 1);
        if (t < 0) {
            t = 0;
        }
        if (t > 10000) {
            t = 10000;
        }
        *(s16 *)(XP(param_1) + 0x26) = (s16)t;
        return;
    case 8:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x18) = 10000;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x24) = 0;
        return;
    case 16:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        return;
    case 12:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        return;
    case 10:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        return;
    case 11:
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x18) = 5000;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1c) = 2000;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x1a) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x22) = 0;
        SwapByte(param_1 + 0xd2, 1);
        *(s16 *)(XP(param_1) + 0x24) = 0;
        return;
    }
}
