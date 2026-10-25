#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_02152cd8[];
extern u8 *data_0214f460;
extern u8 *data_02159444;
extern u8 *data_02159468;
extern s32 func_020ab02c(u8 *a, u32 *b, u32 *c);
extern void func_02067e34(u32 *a, u32 *b, u32 *c);
extern void func_01ff832c(u32 a, u32 *b, u32 *c, u32 *d);
extern s32 func_02067df0(u32 *a, u32 *b);
extern s32 func_02009dfc(u32 *a, u32 *b, u32 *c);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_ov005_0215d198(u8 *p, u32 *q, s32 r);

typedef struct { u32 a, b, c; } Trio;

static inline u32 SwapByteR(u32 v, vu8 *p)
{
    u32 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov005_0215ccbc(u8 *param_1)
{
    u32 la[6];
    u32 aiStack_20[3];
    u32 local_14[3];
    u8 *iVar2;
    s32 idx;
    u8 *entry;
    s32 bVar1;
    s32 uVar3;
    s32 r;

    la[0] = *(u32 *)(data_02152cd8 + 0x4c);
    la[1] = *(u32 *)(data_02152cd8 + 0x58);
    la[2] = *(u32 *)(data_02152cd8 + 0x64);
    func_020ab02c(data_0214f460, aiStack_20, (u32 *)(param_1 + 0x2c4));
    func_02067e34(aiStack_20, (u32 *)(param_1 + 0x2c4), aiStack_20);
    iVar2 = *(u8 **)(data_02159444 + 0x1c);
    *(Trio *)local_14 = *(Trio *)(iVar2 + 0x30);
    func_01ff832c(0x3000, aiStack_20, local_14, (u32 *)(param_1 + 0x3b4));
    *(u32 *)(param_1 + 0x3b8) += 0xa000;
    uVar3 = func_02067df0(aiStack_20, la);
    if (uVar3 > 0) {
        *(u16 *)(param_1 + 0x12e) = 0x1000;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xf000;
    }
    la[3] = *(u32 *)(data_02152cd8 + 0x54);
    la[4] = *(u32 *)(data_02152cd8 + 0x60);
    la[5] = *(u32 *)(data_02152cd8 + 0x6c);
    idx = *(s16 *)(data_02159444 + 0x7a);
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        entry = 0;
    } else {
        entry = *(u8 **)(data_02159468 + idx * 4 + 4);
    }
    if (entry == 0) goto zero;
    if (*(s16 *)(entry + 0x96) != 9) goto zero;
    if (*(s16 *)(entry + 0x90) == 3) {
        bVar1 = 1;
        goto test;
    }
zero:
    bVar1 = 0;
test:
    if (bVar1 && *(u16 *)(param_1 + 0xfc) > 100) {
        r = func_02009dfc(&la[3], (u32 *)(param_1 + 0x1a4), (u32 *)(param_1 + 0x18c));
        switch (r) {
        case 1: goto arm1;
        case 2: goto arm2;
        }
        goto dflt;
arm1:
        func_0203e8cc(param_1, 0, 481);
        func_0203e8cc(param_1, 1, 0);
        {
            u16 zz = 0;
            SwapByteR(zz, (vu8 *)(param_1 + 147));
            *(u16 *)(param_1 + 0x12e) = zz;
        }
        goto fin;
arm2:
        func_0203e8cc(param_1, 0, 482);
        func_0203e8cc(param_1, 1, 0);
        {
            u16 zz = 0;
            SwapByteR(zz, (vu8 *)(param_1 + 147));
            *(u16 *)(param_1 + 0x12e) = zz;
        }
        goto fin;
dflt:
        func_0203e8cc(param_1, 0, 0);
fin:
        ;
    }
    func_ov005_0215d198(param_1, (u32 *)(param_1 + 0x348), 5330);
}
