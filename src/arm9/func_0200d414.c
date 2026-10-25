#include "ctx.h"

extern u32 *data_0214f464;
extern void func_02023604(u8 *p, s32 a, s32 b);
extern void func_02035c98(u8 *p, s32 a);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_0202cd10(u8 *p, s32 a);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200d414(u8 *param_1)
{
    u32 uVar6;
    s32 iVar5;
    s32 iVar4;

    func_02023604(param_1, 1, 3);
    func_02035c98(param_1, 1);
    uVar6 = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = uVar6;
    if ((u16)(((u32)(u16)uVar6 * 500u) >> 16) == 0) {
        iVar5 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar5;
        *(s32 *)(param_1 + 0x26c) = FX_Mul((s16)(u16)(iVar5 & 0xfff), 81920) - 40960;
        iVar4 = *(s32 *)data_0214f464 * 0x10dcd + 1;
        *(s32 *)data_0214f464 = iVar4;
        *(s32 *)(param_1 + 0x274) = FX_Mul((s16)(u16)(iVar4 & 0xfff), 81920) - 40960;
    }
    func_0203942c(param_1);
    func_02037450(param_1, 0x302);
    func_0202cd10(param_1, 0);
}
