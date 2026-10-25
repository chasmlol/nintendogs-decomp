#include "ctx.h"

extern u8 *data_ov007_02160d80;

typedef void (*FP3)(u32, u32, u32);

void func_ov007_0215c248(u8 *p)
{
    u8 *iv;
    FP3 fp;
    s32 sel;
    u16 s;
    if (*(u16 *)(p + 2) != 0) {
        return;
    }
    s = *(u16 *)(p + 4);
    if (s == 7) {
        return;
    }
    if (s == 9) {
        goto nine;
    }
    if (s != 0x15) {
        return;
    }
    iv = data_ov007_02160d80;
    sel = *(s32 *)(iv + 0x28);
    if (sel == 2) {
        goto c2a;
    }
    if (sel == 3) {
        goto c3a;
    }
    return;
c2a:
    fp = *(FP3 *)(iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(*(u16 *)(p + 0x12), *(u32 *)(p + 0xc), *(u16 *)(p + 0x10));
    return;
c3a:
    fp = *(FP3 *)(iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(0, *(u32 *)(p + 0xc), *(u16 *)(p + 0x10));
    return;
nine:
    iv = data_ov007_02160d80;
    sel = *(s32 *)(iv + 0x28);
    if (sel == 2) {
        goto c2b;
    }
    if (sel == 3) {
        goto c3b;
    }
    return;
c2b:
    fp = *(FP3 *)(iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(*(u16 *)(p + 0x12), 0, 0);
    return;
c3b:
    fp = *(FP3 *)(iv + 0x14);
    if (fp == 0) {
        return;
    }
    fp(0, 0, 0);
    return;
}
