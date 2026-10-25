#include "ctx.h"
extern u8 data_ov005_02167e74[];
extern u8 data_ov005_02167e78[];
extern u8 data_0215be34[];
extern void func_ov005_02165ff0(void);
extern void func_020bd868(u8 *p);
extern s32 func_020d9024(s32 a);
extern s32 func_01ffdb08(s32 a);
extern s32 func_02028130(s32 a);
extern s32 func_020d8fa0(s32 a);
extern void *func_0208122c(s32 a, s32 b, void *c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov005_02165e1c(u8 *param_1)
{
    s16 *psVar6;
    s32 iVar3;
    u32 uVar5;
    u32 *q;

    psVar6 = *(s16 **)(param_1 + 0x214);
    func_020bd868(param_1);
    iVar3 = func_020d9024(-1);
    *psVar6 = (s16)iVar3;
    iVar3 = func_01ffdb08((s32)**(s16 **)(param_1 + 0x214));
    iVar3 = func_02028130(iVar3);
    *(s32 *)(param_1 + 0x120) = FX_Mul(*(s32 *)data_ov005_02167e74, iVar3);
    iVar3 = func_01ffdb08((s32)*psVar6);
    *(s32 *)(psVar6 + 4) = func_020d8fa0(iVar3);
    iVar3 = func_02028130(iVar3);
    uVar5 = FX_Mul(iVar3, *(s32 *)data_ov005_02167e78);
    iVar3 = 0;
    *(u32 *)(param_1 + 0x24) = uVar5;
    *(u32 *)(param_1 + 0x28) = uVar5;
    *(u32 *)(param_1 + 0x2c) = uVar5;
    {
        u32 local_20[3] = {0, 0, 0};
        q = *(u32 **)data_0215be34;
        if (q != NULL) {
            iVar3 = *(s32 *)q;
        }
        *(void **)(psVar6 + 2) = func_0208122c(iVar3, 0x28, local_20);
    }
    *(u32 *)(*(u8 **)(psVar6 + 2) + 0x6c) = (u32)func_ov005_02165ff0;
    *(u32 *)(*(u8 **)(psVar6 + 2) + 0x1c) = *(u32 *)(*(u8 **)(psVar6 + 2) + 0x1c) | 2;
}
