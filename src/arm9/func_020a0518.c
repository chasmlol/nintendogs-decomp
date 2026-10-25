#include "ctx.h"

extern u8 data_021592b4[];
extern u8 data_021592bc[];

void func_02070838(u8 *a, s32 b, s16 *c);
s32 func_02070888(u8 *p);
void func_020a02d8(void);
void func_020a37d0(s32 a, s32 b, s32 c);
void func_020a3798(void);

void func_020a0518(void)
{
    s16 aStack[4];
    u8 *base;
    u8 *ptr;
    s16 *p6;
    s32 old;
    s32 r;

    base = data_021592b4;
    if (*(s32 *)(base + 0x14) == -1) {
        return;
    }
    {
        s32 i = 0;
        u32 mask;
        do {
            mask = (u16)(1 << i);
            if (*(s32 *)(base + i * 4 + 0xc) == 0) {
                if (*(u16 *)(base + 4) & mask) {
                    u16 *q = (u16 *)(base + 4);
                    *q = *q & ~mask;
                }
            }
            i = (s16)(i + 1);
        } while (i < 2);
    }
    p6 = (s16 *)data_021592b4;
    if (*(u32 *)data_021592bc != 0) {
        old = p6[1];
        func_02070838(data_021592bc, 0, &p6[1]);
        if (p6[1] != old && p6[1] > 0) {
            func_020a02d8();
        }
    }
    if (*(s32 *)(base + 0x1c) == 0) goto L_13c;
    ptr = *(u8 **)(base + 0x24);
    if (ptr == 0) goto L_12c;
    if (*(u32 *)ptr == 0) goto L_12c;
    r = func_02070888(ptr);
    if (r == 1) goto L_f0;
    if ((u32)(r - 40) > 1) goto L_13c;
L_f0:
    *(u16 *)(base + 32) = *(u16 *)(base + 32) + 1;
    if (*(u16 *)(base + 32) <= 60) goto L_13c;
    func_020a37d0(53, 1, 0);
    *(s32 *)(base + 0x1c) = 0;
    *(u16 *)(base + 32) = 0;
    *(s32 *)(base + 0x24) = 0;
    goto L_13c;
L_12c:
    *(s32 *)(base + 0x1c) = 0;
    *(u16 *)(base + 32) = 0;
    *(s32 *)(base + 0x24) = 0;
L_13c:
    if (*(s32 *)(base + 0x28) == 0) {
        return;
    }
    ptr = *(u8 **)(base + 0x2c);
    if (ptr == 0) goto L_240;
    if (*(u32 *)ptr == 0) goto L_240;
    r = func_02070888(ptr);
    if (r > 2) goto L_188;
    if (r == 2) goto L_200;
    return;
L_188:
    switch (r) {
    case 30:
    case 31:
    case 32:
    case 42:
    case 48:
    case 49:
    case 50:
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
        goto L_200;
    default:
        goto L_24c;
    }
L_200:
    func_02070838(*(u8 **)(base + 0x2c), 0, aStack);
    if (aStack[0] != 5) {
        return;
    }
    func_020a3798();
    *(s32 *)(base + 0x28) = 0;
    *(s32 *)(base + 0x2c) = 0;
    return;
L_240:
    *(s32 *)(base + 0x28) = 0;
    *(s32 *)(base + 0x2c) = 0;
L_24c:
    return;
}
