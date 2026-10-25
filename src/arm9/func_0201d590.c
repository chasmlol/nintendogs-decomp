#pragma avoid_byte strb
#include "ctx.h"

extern void func_02026aac(void *obj);
extern void func_02025bb0(void *obj);
extern void *func_0200c498(s32 a, s32 b);
extern void func_020ec4cc(s32 a);
extern s16 data_02126868[];

typedef struct { u32 a, b, c; } Vec3;

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

void func_0201d590(u8 *param_1)
{
    u8 *iVar3;
    u8 bVar1;

    *(u16 *)(param_1 + 0x152) = 0x13;
    func_02026aac(param_1);
    func_02025bb0(param_1);
    iVar3 = func_0200c498(0xc, 0);
    if (iVar3 != 0) {
        *(Vec3 *)(param_1 + 0x2a0) = *(Vec3 *)(iVar3 + 8);
        *(s32 *)(param_1 + 0x1a4) = data_02126868[((s32)*(u16 *)(iVar3 + 4) >> 4) * 2];
        *(s32 *)(param_1 + 0x1a8) = 0;
        *(s32 *)(param_1 + 0x1ac) = data_02126868[(((s32)*(u16 *)(iVar3 + 4) >> 4) * 2) + 1];
    }
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) & ~1;
    func_020ec4cc((s8)param_1[0x88]);
    bVar1 = param_1[0xb5];
    SwapByte(bVar1 | 7, param_1 + 0xb5); return;
}
