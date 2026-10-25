#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_02159444;
extern u32 data_0214f464;
extern u32 data_02152cd8;

typedef struct { u32 w[3]; } T3;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

static inline u8 SwapRet(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_0200c6a0(u8 *param_1)
{
    s32 iVar3;
    u32 uVar2;
    u32 uVar6;
    s32 local[3];
    u8 *o;
    u8 *q2;
    u8 *dst;
    u8 *pa;
    u32 two;

    iVar3 = *(s32 *)(param_1 + 0x464);
    if (iVar3 == 1) {
        goto C1;
    }
    if (iVar3 == 2) {
        goto C2;
    }
    if (iVar3 == 3) {
        goto C3;
    }
    return;
C1:
    if (*(u16 *)(param_1 + 0xfc) <= 200) {
        return;
    }
    *(u8 *)(param_1 + 0x93) = 3;
    { SwapRet(2, param_1 + 0x97); return; }
C2:
    *(u8 *)(param_1 + 0x93) = 7;
    dst = param_1 + 948;
    o = *(u8 **)((u8 *)data_02159444 + 0x1c);
    q2 = param_1 + 256;
    *(T3 *)dst = *(T3 *)(o + 0x30);
    *(u8 *)(param_1 + 0x98) = 1;
    if (*(s16 *)(q2 + 84) != 0x61) {
        goto CNT2;
    }
    iVar3 = func_02035584(param_1, 1);
    if (iVar3 != 0) {
        { func_0203e8cc(param_1, 1, 0); return; }
    }
    return;
CNT2:
    uVar6 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    uVar2 = (u16)((((u32)(u16)uVar6) * 100u) >> 16);
    *(u32 *)data_0214f464 = uVar6;
    if (uVar2 == 0) {
        { func_0203e8cc(param_1, 1, 0x61); return; }
    }
    return;
C3:
    if (*(u16 *)(param_1 + 0xfc) >= 200) {
        goto BIG3;
    }
    *(u8 *)(param_1 + 0x93) = 5;
    dst = param_1 + 948;
    o = *(u8 **)((u8 *)data_02159444 + 0x1c);
    two = 2;
    pa = param_1 + 0x97;
    *(T3 *)dst = *(T3 *)(o + 0x30);
    {
        u8 r = SwapRet(two, pa);
        return;
    }
BIG3:
    *(u8 *)(param_1 + 0x93) = 9;
    local[0] = *(s32 *)((u8 *)&data_02152cd8 + 0x54);
    local[1] = *(s32 *)((u8 *)&data_02152cd8 + 0x60);
    local[2] = *(s32 *)((u8 *)&data_02152cd8 + 0x6c);
    iVar3 = func_02028130(param_1);
    func_01ff832c(iVar3 * 10, (s32 *)(param_1 + 420), (s32 *)(param_1 + 672), (s32 *)(param_1 + 948));
    iVar3 = func_02028130(param_1);
    func_01ff832c(iVar3 * -7, local, (s32 *)(param_1 + 948), (s32 *)(param_1 + 948));
    iVar3 = func_02028130(param_1);
    *(s32 *)(param_1 + 0x3b8) = iVar3 * -5;
    { SwapRet(5, param_1 + 0x97); return; }
}
