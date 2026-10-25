#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026578(u8 *p);
extern void func_02025bb0(u8 *p);
extern s32 func_02036484(u8 *p);

typedef struct { u32 w[3]; } T3;

static inline void SwapByte(u32 v, vu8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_0201d798(u8 *param_1)
{
    s32 iVar1;

    *(u16 *)((u32)(param_1 + 256) + 82) = 144;
    SwapByte(2, (vu8 *)(param_1 + 147));
    func_02026578(param_1);
    func_02025bb0(param_1);
    iVar1 = func_02036484(param_1);
    if (iVar1 != 0) {
        *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar1 + 8);
    }
}
