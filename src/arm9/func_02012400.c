#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0215be34;
extern u32 data_02139ef8;
extern u32 data_02139f04;

extern void func_02022b7c(u8 *p);
extern s32 func_02027f78(u8 *p, u32 a);
extern s32 func_0203579c(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern s32 func_02022dec(u8 *p, u32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 a);

static inline void SwapByte(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

#define GP_BE34() (*(u8 **)&data_0215be34)

void func_02012400(u8 *param_1)
{
    s32 iVar3;
    s32 iVar4;
    s32 bVar2;
    s32 s;
    u8 *P1;
    u32 v;
    u32 v2;
    u32 t;
    u8 *r6;

    func_02022b7c(param_1);
    iVar3 = func_02027f78(param_1, 7);
    iVar3 = iVar3 >> 9;
    if (iVar3 >= 5) {
        goto C1C8;
    }
    s = *(s16 *)(param_1 + 0x162);
    if (s > 61) {
        goto HI61;
    }
    if (s >= 61) {
        goto B8C;
    }
    if (s > 13) {
        goto M60;
    }
    if (s < 12) {
        goto C1C8;
    }
    switch (s) {
    case 12:
        goto B12C;
    case 13:
        goto B8C;
    }
    goto C1C8;
M60:
    if (s != 60) {
        goto C1C8;
    }
    goto B12C;
HI61:
    if (s > 94) {
        goto HI95;
    }
    if (s != 94) {
        goto C1C8;
    }
    goto B8C;
HI95:
    if (s != 95) {
        goto C1C8;
    }
    goto B12C;
B8C:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 == 0) {
        iVar4 = func_0203579c(param_1, 13);
        if (iVar4 == 0) {
            goto C1C8;
        }
    }
    goto B4;
B4:
    P1 = *(u8 **)&data_0214f464;
    v = *(u32 *)P1;
    v2 = v * 0x10dcd + 1;
    *(u32 *)P1 = v2;
    t = (u16)((((u16)v2) * 100u) >> 16);
    if ((s32)t >= 100 - iVar3 * 15) {
        goto C1C8;
    }
    {
        u8 *G = GP_BE34();
        func_02081198(G != 0 ? *(u32 *)G : 0, 50, ((u32 *)&data_02139ef8)[*(s8 *)(param_1 + 136)]);
    }
    goto C1C8;
B12C:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 == 0) {
        iVar4 = func_0203579c(param_1, 13);
        if (iVar4 == 0) {
            goto C1C8;
        }
    }
C154:
    P1 = *(u8 **)&data_0214f464;
    v = *(u32 *)P1;
    v2 = v * 0x10dcd + 1;
    *(u32 *)P1 = v2;
    t = (u16)((((u16)v2) * 100u) >> 16);
    if ((s32)t >= 100 - iVar3 * 15) {
        goto C1C8;
    }
    {
        u8 *G = GP_BE34();
        func_02081198(G != 0 ? *(u32 *)G : 0, 50, ((u32 *)&data_02139f04)[*(s8 *)(param_1 + 136)]);
    }
C1C8:
    bVar2 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bVar2 != 0) {
        iVar4 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6));
        bVar2 = (iVar4 != 0);
    }
    r6 = func_0203541c(param_1);
    if (r6 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(r6 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar4 = func_ov003_02198298(param_1);
    } else {
        iVar4 = 0;
    }
    if (iVar4 != 0) {
        iVar4 = 1;
        goto END;
    }
    iVar4 = func_020289d0(param_1, 2, 0);
    if (iVar4 != 0) {
        iVar4 = 1;
        goto END;
    }
    if (bVar2 != 0) {
        goto ZERO;
    }
    iVar4 = func_0202cd10(param_1, 2);
    if (iVar4 != 0) {
        iVar4 = 1;
        goto END;
    }
ZERO:
    iVar4 = 0;
END:
    if (iVar4 != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 0xfc) <= 100) {
        return;
    }
    P1 = *(u8 **)&data_0214f464;
    v = *(u32 *)P1;
    v2 = v * 0x10dcd + 1;
    *(u32 *)P1 = v2;
    if ((u16)((((u16)v2) * 100u) >> 16) == 0) {
        func_0203e908(param_1, 109);
    }
}
