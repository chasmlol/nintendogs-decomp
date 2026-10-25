#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_0213b7d0[];
extern int *data_0215be34;
extern u32 data_02139ee0[];
extern u32 data_02139ec8[];
extern u32 data_02139eb0[];
extern void func_02026c24(int a);
extern void func_02025a84(int a);
extern void func_0202da00(int a, int b);
extern void func_02081198(int a, int b, int c);
extern void func_02023590(int a);
extern void func_020a1a40(int a);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_ov003_021619cc(int param_1)
{
    u32 iVar2;
    u8 *q;

    iVar2 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar2;
    q = (u8 *)param_1 + 0x100;
    *(u16 *)(q + 82) = 0x1f0 + (u16)(((u32)iVar2 << 16) >> 31);
    SwapByte(4, (vu8 *)(param_1 + 151));
    func_02026c24(param_1);
    func_02025a84(param_1);
    func_0202da00(param_1, *(s32 *)(data_0213b7d0 + 4));
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x3f, data_02139ee0[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x40, data_02139ee0[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x41, data_02139ee0[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x42, data_02139ec8[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x43, data_02139ec8[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x44, data_02139ec8[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x45, data_02139eb0[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x46, data_02139eb0[*(s8 *)(param_1 + 136)]);
    func_02081198(data_0215be34 != 0 ? *data_0215be34 : 0, 0x47, data_02139eb0[*(s8 *)(param_1 + 136)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
