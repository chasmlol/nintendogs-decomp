#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u32 *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, u32 c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

#define VAL_OR_ZERO(q) ((q) != 0 ? *(u32 *)(q) : 0)

void func_ov003_0215d948(u8 *param_1)
{
    u32 iVar3;
    s16 sVar1;

    iVar3 = *(s32 *)data_0214f464 * 0x10dcd + 1;
    *(s32 *)data_0214f464 = iVar3;
    sVar1 = (s16)0x1ee;
    *(s16 *)(param_1 + 0x152) = sVar1 + (u16)(0x10000 * iVar3 >> 0x1f);
    SwapByte(2, param_1 + 0x97);
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 0);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x3f, data_02139ee0[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x40, data_02139ee0[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x41, data_02139ee0[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x42, data_02139ec8[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x43, data_02139ec8[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x44, data_02139ec8[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x45, data_02139eb0[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x46, data_02139eb0[(s8)param_1[0x88]]);
    func_02081198(VAL_OR_ZERO(data_0215be34), 0x47, data_02139eb0[(s8)param_1[0x88]]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
