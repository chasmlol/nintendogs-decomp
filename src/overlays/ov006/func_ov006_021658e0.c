#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } Tri;

extern void func_02025bb0(u8 *p);
extern u8 *func_020364a8(u8 *p);
extern u8 *func_0200c498(u32 a, s32 b);

static inline void SwapByte(u32 v, u8 *p) { *(u8 *)(p) = (u8)(v); }
static inline u8 SwapRet(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_ov006_021658e0(u8 *param_1)
{
    u8 *iVar2;
    s32 v;

    *(u16 *)(param_1 + 0x152) = 0x13e;
    SwapByte(1, param_1 + 171);
    func_02025bb0(param_1);
    iVar2 = func_020364a8(param_1);
    if (iVar2 != NULL) {
        iVar2 = func_0200c498(*(u32 *)(iVar2 + 0x30), (s16)*(u32 *)(iVar2 + 0x2c));
        if (iVar2 != NULL) {
            *(Tri *)(param_1 + 0x26c) = *(Tri *)(iVar2 + 8);
            v = *(s32 *)(param_1 + 0x26c);
            *(s32 *)(param_1 + 0x26c) = (v - *(s32 *)(param_1 + 0x2a0)) * 10 + v;
            v = *(s32 *)(param_1 + 0x274);
            *(s32 *)(param_1 + 0x274) = (v - *(s32 *)(param_1 + 0x2a8)) * 10 + v;
        }
    }
    SwapRet(*(u8 *)(param_1 + 0xb0) & ~4, param_1 + 0xb0); return;
}
