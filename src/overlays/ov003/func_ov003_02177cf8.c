#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_ov003_021799c0(void *p);
u32 func_02028124(void *p);
void func_02024f18(void *p, s32 a, s32 b);
s32 func_0203567c(void *p);
void func_0203e8cc(void *p, s32 a, s32 b);
s32 func_02035164(void *p);
void func_ov003_02179bb8(void *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);

extern u32 *data_0214f464;

void func_ov003_02177cf8(void *param_1)
{
    s32 bVar1 = 0;
    s32 iVar2;
    s32 iVar4;
    u32 uVar3;

    func_ov003_021799c0(param_1);
    switch (*(s16 *)((u8 *)param_1 + 0x152)) {
    case 0x168:
        uVar3 = func_02028124(param_1);
        func_02024f18(param_1, 1, FX_Mul((s32)uVar3, 0x1eb));
        break;
    case 0x169:
        uVar3 = func_02028124(param_1);
        func_02024f18(param_1, 1, -FX_Mul((s32)uVar3, 0x1eb));
        break;
    }
    iVar2 = func_0203567c(param_1);
    if (iVar2 != 0) {
        bVar1 = 1;
        {
            u32 t = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = t;
            uVar3 = (u16)((((u16)t) * 5u) >> 16);
        }
        switch (uVar3) {
        case 0:
            func_0203e8cc(param_1, 0, 0x168);
            func_0203e8cc(param_1, 3, 0);
            break;
        case 1:
            func_0203e8cc(param_1, 0, 0x169);
            func_0203e8cc(param_1, 3, 0);
            break;
        case 2:
            func_0203e8cc(param_1, 0, 0x165);
            func_0203e8cc(param_1, 3, 0);
            break;
        default:
            func_0203e8cc(param_1, 0, 0x111);
            iVar2 = func_02035164(param_1);
            func_0203e8cc(param_1, 3, iVar2);
            break;
        }
    }
    iVar2 = 0;
    if (0x3c < *(u16 *)((u8 *)param_1 + 0xfc) && bVar1) {
        u32 t2 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = t2;
        iVar2 = (u16)(((u32)t2 << 16) >> 31) == 0;
    }
    (void)iVar4;
    func_ov003_02179bb8(param_1, 0, 0x1ff, 1, 1, 1, 1, iVar2, 0x30, 0, 3, 0);
}
