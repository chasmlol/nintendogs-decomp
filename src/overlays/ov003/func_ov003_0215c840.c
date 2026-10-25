#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0214f464[];
extern u8 data_0215be34[];
extern u32 data_02139ee0[];
extern void func_020264f4(u8 *p);
extern void func_020255a4(u8 *p);
extern void func_0202da00(u8 *p, s32 a);
extern void func_02081198(s32 a, s32 b, void *c);
extern void func_02023590(u8 *p);
extern void func_020a1a40(s32 a);

#pragma opt_propagation off
void func_ov003_0215c840(u8 *param_1)
{
    u32 *pc;
    u32 cnt;
    u32 *piVar2;
    u32 iVar3;

    pc = *(u32 **)data_0214f464;
    cnt = *pc * 0x10dcd + 1;
    *pc = cnt;
    {
        u32 bit = (cnt << 16) >> 31;
        bit = bit << 16;
        *(s16 *)(param_1 + 0x152) = (s16)(0x1ee + (bit >> 16));
    }
    param_1[0x97] = 2;
    func_020264f4(param_1);
    func_020255a4(param_1);
    func_0202da00(param_1, 0);
    piVar2 = *(u32 **)data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 0x73, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = *(u32 **)data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 0x72, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    piVar2 = *(u32 **)data_0215be34;
    iVar3 = (piVar2 != 0) ? *piVar2 : 0;
    func_02081198(iVar3, 0x74, (void *)data_02139ee0[*(s8 *)(param_1 + 0x88)]);
    func_02023590(param_1);
    func_020a1a40(0x51);
}
