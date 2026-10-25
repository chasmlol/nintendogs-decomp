#pragma avoid_byte strb
#include "ctx.h"

extern u8 *func_ov019_0215ccd8(u8 *obj);
extern void func_02066b80(u8 *obj);
extern s16 data_02126868[];

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov019_0215f9d4(u8 *param_1)
{
    u8 *iVar3;
    s32 t1;
    s32 n;

    iVar3 = func_ov019_0215ccd8(param_1);
    if (iVar3 != 0) {
        *(u32 *)(iVar3 + 0x24) = 0x29;
        *(u32 *)(iVar3 + 0x28) = 0x29;
        *(u32 *)(iVar3 + 0x2c) = 0x29;
    }
    iVar3 = func_ov019_0215ccd8(param_1);
    if (iVar3 != 0) {
        *(u16 *)(iVar3 + 0x20) = *(u16 *)(iVar3 + 0x20) & ~1;
        SwapByte(iVar3[1] & ~1, iVar3 + 1);
    }
    n = ((s32)*(s16 *)(param_1 + 0x1c) - 3) * 0x1000 >> 4;
    t1 = *(s16 *)((u8 *)data_02126868 + n * 4);
    *(s32 *)(param_1 + 0x3c) = FX_Mul(t1, 0x1405);
    *(s32 *)(param_1 + 0x40) = 0x6000;
    n = ((s32)*(s16 *)(param_1 + 0x1c) - 3) * 0x1000 >> 4;
    *(s32 *)(param_1 + 0x44) = FX_Mul(data_02126868[n * 2 + 1], 0x1405) + 0xfffe159f;
    func_02066b80(param_1 + 0x48);
}
