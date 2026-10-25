#pragma avoid_byte strb
#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

extern u8 data_02126868[];
extern void func_0202675c(u8 *p);
extern void func_02025bb0(u8 *p);
extern u32 func_0200c498(u32 a, u32 b);

void func_ov003_0216e048(u8 *param_1)
{
    u8 *o;
    *(u16 *)(param_1 + 256 + 82) = 18;
    *(u16 *)(param_1 + 256 + 86) = 1;
    *(param_1 + 152) = 1;
    func_0202675c(param_1);
    func_02025bb0(param_1);
    *(vu32 *)(param_1 + 0x948) = *(vu32 *)(param_1 + 0x948) | 1;
    o = (u8 *)func_0200c498(9, 0);
    if (o == 0) {
        return;
    }
    *(T3 *)(param_1 + 0x26c) = *(T3 *)(o + 8);
    *(s32 *)(param_1 + 0x278) = *(s16 *)(data_02126868 + (((s32)(u16)*(u16 *)(o + 4) >> 4) * 4)) * 10 + *(s32 *)(o + 8);
    *(u32 *)(param_1 + 0x27c) = *(u32 *)(o + 0xc);
    *(s32 *)(param_1 + 0x280) = *(s16 *)(data_02126868 + ((((s32)(u16)*(u16 *)(o + 4) >> 4) * 2 + 1) * 2)) * 10 + *(s32 *)(o + 0x10);
}
