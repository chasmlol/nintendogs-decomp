#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_02152cd8[];
extern void func_01ff832c(s32 mul, s32 *loc, s32 *a, s32 *b);

void func_ov003_0216de00(u8 *p)
{
    u32 u;
    u32 iv;
    s32 idx;
    s32 loc[3];
    u = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = u;
    idx = (u16)((((u32)(u16)u) * 20) >> 16) + 50;
    iv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iv;
    if ((u16)(((u32)iv << 16) >> 31) != 0) {
        idx = -idx;
    }
    loc[0] = *(s32 *)(data_02152cd8 + 0x4c);
    loc[1] = *(s32 *)(data_02152cd8 + 0x58);
    loc[2] = *(s32 *)(data_02152cd8 + 0x64);
    func_01ff832c(idx * 41, loc, (s32 *)(p + 0x2a0), (s32 *)(p + 0x26c));
    func_01ff832c(idx * -410, loc, (s32 *)(p + 0x2a0), (s32 *)(p + 0x278));
    loc[0] = *(s32 *)(data_02152cd8 + 0x54);
    loc[1] = *(s32 *)(data_02152cd8 + 0x60);
    loc[2] = *(s32 *)(data_02152cd8 + 0x6c);
    func_01ff832c(-6150, loc, (s32 *)(p + 0x26c), (s32 *)(p + 0x26c));
    func_01ff832c(-61500, loc, (s32 *)(p + 0x278), (s32 *)(p + 0x278));
}
