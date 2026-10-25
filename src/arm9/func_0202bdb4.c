#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } V3;

extern void func_01ff8980(s32 *p);
extern u32 func_02009f38(s32 *p, s32 *q);

static inline void SwapOld(vu8 *p, u32 v)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0202bdb4(u8 *param_1)
{
    V3 loc;
    s32 t0;
    s32 t2;
    s32 iVar3;
    u32 bVar2;

    loc = *(V3 *)(param_1 + 1168);
    *(s32 *)(param_1 + 0x260) = *(s32 *)(param_1 + 0x2a0) - loc.w[0];
    *(u32 *)(param_1 + 0x264) = 0;
    *(s32 *)(param_1 + 0x268) = *(s32 *)(param_1 + 0x2a8) - loc.w[2];
    func_01ff8980((s32 *)(param_1 + 0x260));
    t0 = *(s32 *)(param_1 + 0x260) >> 3;
    *(s32 *)(param_1 + 0x260) = t0;
    *(u32 *)(param_1 + 0x264) = 0x668;
    t2 = *(s32 *)(param_1 + 0x268) >> 3;
    *(s32 *)(param_1 + 0x268) = t2;
    bVar2 = func_02009f38((s32 *)(param_1 + 0x260), (s32 *)(param_1 + 0x18c));
    if (bVar2 != 0) {
        iVar3 = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) + -3000);
        SwapOld((vu8 *)(param_1 + 210), 1);
        if (iVar3 < 0) {
            iVar3 = 0;
        }
        if (iVar3 > 10000) {
            iVar3 = 10000;
        }
        *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) = (s16)iVar3;
        *(u16 *)(param_1 + 234) = 0x410;
        *(u16 *)(param_1 + 250) = 0;
        return;
    }
    iVar3 = (s16)(*(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) + -3000);
    SwapOld((vu8 *)(param_1 + 210), 1);
    if (iVar3 < 0) {
        iVar3 = 0;
    }
    if (iVar3 > 10000) {
        iVar3 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1c) = (s16)iVar3;
    *(u16 *)(param_1 + 234) = 0x411;
    *(u16 *)(param_1 + 250) = 0;
}
