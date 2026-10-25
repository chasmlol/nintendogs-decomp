#include "ctx.h"
extern u8 data_0214f464[];
extern void func_0203e908(u8 *p, u32 a);
u32 func_0204cf50(u8 *param_1)
{
    u32 cnt;
    u32 *pc;
    if ((*(u16 *)(param_1 + 0xfc) > 10 && *(u16 *)(param_1 + 0xfc) < 30) &&
        *(s16 *)(param_1 + 0x152) >= 20 && *(s16 *)(param_1 + 0x152) <= 22 &&
        (*(s16 *)(param_1 + 0xee) < 0x25e || *(s16 *)(param_1 + 0xee) > 0x25f)) {
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        if ((u16)(((u32)(u16)cnt * 120u) >> 16) == 0) {
            func_0203e908(param_1, 0x25e);
            return 1;
        }
    }
    if (*(u16 *)(param_1 + 0xfc) > 100 && *(s16 *)(param_1 + 0x152) >= 20 &&
        *(s16 *)(param_1 + 0x152) <= 22 &&
        *(s8 *)(param_1 + 0xa1) >= 1 && *(s8 *)(param_1 + 0xa1) <= 2 &&
        *(s32 *)(param_1 + 0x468) >= 3 && *(s32 *)(param_1 + 0x468) <= 4) {
        pc = *(u32 **)data_0214f464;
        cnt = *pc * 0x10dcd + 1;
        *pc = cnt;
        if ((u16)(((u32)(u16)cnt * 6u) >> 16) == 0) {
            func_0203e908(param_1, 0x25f);
            return 1;
        }
    }
    *(s32 *)(param_1 + 0x468) = (s32)*(s8 *)(param_1 + 0xa1);
    return 0;
}
