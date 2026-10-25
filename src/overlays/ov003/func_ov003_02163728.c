#pragma avoid_byte strb
#include "ctx.h"
extern u8 data_0213b7d0[];
extern u8 data_0215be34[];
extern u8 data_02139f10[];
extern u8 data_02139ea4[];
extern void func_02026c24(u8 *p);
extern void func_02025548(u8 *p);
extern void func_0202da00(u8 *p, u32 a);
extern void func_02081198(u32 a, u32 b, u32 c);
extern void func_0209eeec(u32 a, u32 b);
extern void func_02023590(u8 *p);
static inline void SwapB(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}
void func_ov003_02163728(u8 *param_1)
{
    u32 *piVar1;
    u32 iVar2;
    *(s16 *)(param_1 + 0x152) = 0x6c;
    *(s16 *)(param_1 + 0x154) = 7;
    SwapB(4, param_1 + 0x97);
    func_02026c24(param_1);
    func_02025548(param_1);
    func_0202da00(param_1, *(u32 *)(data_0213b7d0 + 0x2c));
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0xf, *(u32 *)(data_02139f10 + *(s8 *)(param_1 + 0x88) * 4));
    piVar1 = *(u32 **)data_0215be34;
    iVar2 = (piVar1 != 0) ? *piVar1 : 0;
    func_02081198(iVar2, 0x10, *(u32 *)(data_02139ea4 + *(s8 *)(param_1 + 0x88) * 4));
    func_0209eeec(0x1e, 0x7f);
    func_02023590(param_1);
}
