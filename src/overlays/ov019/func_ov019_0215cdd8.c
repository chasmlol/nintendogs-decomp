#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_ov019_021614a8;
extern u32 data_ov019_021614e0;
extern u32 data_ov019_02161518;

extern u8 *func_ov019_0215ccd8(u8 *p);
extern u8 *func_ov019_021611a0(void);

typedef struct {
    u32 w[3];
} T12;

typedef struct {
    u32 w[12];
} T48;

#define CASEV(V)     {         *(u16 *)(q + 0x20) &= ~1;         *(T12 *)(*(u8 **)(param_1 + 0xa8) + 48) = *(T12 *)(param_1 + 60);         *(u32 *)(*(u8 **)(param_1 + 0xa8) + 0x34) = 0;         {             u8 *q3 = *(u8 **)(param_1 + 0xa8);             u8 *q4 = (u8 *)((u32)q3 + 36);             *(u32 *)(q3 + 0x24) = (V);             *(u32 *)(q4 + 4) = (V);             *(u32 *)(q4 + 8) = (V);         }     }

void func_ov019_0215cdd8(u8 *param_1)
{
    s32 i;
    s32 s5;
    s32 s;
    u8 *t;
    u8 *t2;
    u8 *q;
    u8 *e;
    u8 *iv;

    *(s16 *)(param_1 + 0x22) = *(s16 *)(param_1 + 0x20);
    if (*(s16 *)(param_1 + 0x28) == 14) {
        goto S14;
    }
    *(s16 *)(param_1 + 0x24) = *(s16 *)(param_1 + 0x28);
    t = func_ov019_0215ccd8(param_1);
    if (t != 0) {
        u8 *pt = t + 1;
        u32 bv = *pt;
        *pt = (u8)(bv & ~1u);
    }
    s5 = *(s16 *)(param_1 + 0x2c);
    iv = func_ov019_021611a0();
    ((void (*)(u8 *, u32))*(u32 *)((u8 *)&data_ov019_021614a8 + (*(s16 *)(param_1 + 0x24) << 2)))(
        param_1, *(u32 *)(iv + (s5 << 2) + 0xcc));
    ((void (*)(u8 *))*(u32 *)((u8 *)&data_ov019_021614e0 + (*(s16 *)(param_1 + 0x24) << 2)))(param_1);
    *(s16 *)(param_1 + 0x26) = *(s16 *)(param_1 + 0x24);
    *(s16 *)(param_1 + 0x20) = *(s16 *)(param_1 + 0x1e);
    goto B0;
S14:
    if (*(s16 *)(param_1 + 0x1e) != *(s16 *)(param_1 + 0x20)) {
        ((void (*)(u8 *))*(u32 *)((u8 *)&data_ov019_021614e0 + (*(s16 *)(param_1 + 0x24) << 2)))(param_1);
        *(s16 *)(param_1 + 0x20) = *(s16 *)(param_1 + 0x1e);
    }
B0:
    *(s16 *)(param_1 + 0x28) = 14;
    ((void (*)(u8 *))*(u32 *)((u8 *)&data_ov019_02161518 + (*(s16 *)(param_1 + 0x24) << 2)))(param_1);
    t2 = func_ov019_0215ccd8(param_1);
    i = 0;
    do {
        e = *(u8 **)(param_1 + (u32)i * 4 + 0x78);
        i = (s16)(i + 1);
        *(e + 1) = (u8)(*(u8 *)(e + 1) | 1);
    } while (i < 12);
    if (t2 != 0) {
        T12 *src12 = (T12 *)(param_1 + 60);
        *(t2 + 1) = (u8)(*(u8 *)(t2 + 1) & ~1u);
        *(T12 *)(t2 + 48) = *src12;
        *(T48 *)(t2 + 60) = *(T48 *)(param_1 + 72);
    }
    q = *(u8 **)(param_1 + 0xa8);
    if (q == 0) {
        return;
    }
    if (*(s16 *)(param_1 + 0x1e) == 0) {
        *(u16 *)(q + 0x20) |= 1;
        return;
    }
    s = *(s16 *)(param_1 + 0x24);
    if (s == 1) {
        CASEV(2000);
        return;
    }
    if (s == 3) {
        CASEV(2400);
        return;
    }
    if (s == 4) {
        CASEV(200);
        return;
    }
    if (s == 5) {
        CASEV(200);
        return;
    }
    if (s == 6) {
        CASEV(200);
        return;
    }
}
