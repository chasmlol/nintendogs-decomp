#include "ctx.h"

extern u32 *data_0214f464;
extern u8 data_0213b827[];

extern u32 func_02036544(u32 a);
extern u32 func_020364cc(u32 a);
extern void func_02027668(u32 a, void *b);
extern void func_02027690(u32 a, void *b);
extern void func_02036bac(u32 a, void *b, void *c);
extern u32 func_020289d0(u32 a, u32 b, u32 c);
extern u8 func_020274ac(u32 a, u32 b);
extern u32 func_0203592c(u32 a, u32 b);
extern u32 func_ov003_02197dd8(u32 a);
extern u32 func_0203e908(u32 a, u32 b);
extern u32 func_ov003_021987dc(u32 a, u32 b);

u32 func_ov003_02196704(u32 param_1)
{
    u32 iVar3, iVar4, iVar5, uVar6;
    s32 aiStack_40[3];
    s32 aiStack_34[3];
    s32 local_28[6];
    u8 bVar1;

    iVar3 = func_02036544(param_1);
    iVar4 = func_020364cc(param_1);
    if (iVar3 != 0) {
        func_02027668(iVar3, aiStack_40);
        func_02027690(iVar3, aiStack_34);
        func_02036bac(param_1, aiStack_40, aiStack_34);
    } else {
        local_28[0] = 0;
        local_28[1] = 0;
        local_28[2] = 0;
        local_28[3] = 0;
        local_28[4] = 0;
        local_28[5] = 0x1000;
        func_02036bac(param_1, local_28, local_28 + 3);
    }
    iVar5 = func_020289d0(param_1, 0, 1);
    if (iVar5 != 0) {
        bVar1 = func_020274ac(param_1, -1);
        return bVar1;
    }
    if (func_0203592c(param_1, iVar4)) {
        bVar1 = func_020274ac(param_1, -1);
        return bVar1;
    }
    iVar5 = func_ov003_02197dd8(param_1);
    if (iVar5 != 0) {
        bVar1 = func_020274ac(param_1, -1);
        return bVar1;
    }
    if (iVar3 != 0 && *(u32 *)(param_1 + 0x464) == 0) {
        u32 *p = data_0214f464;
        uVar6 = *p * 0x10dcd + 1;
        *p = uVar6;
        if ((u16)((((u32)(u16)uVar6) * 100u) >> 16) == 0) {
            func_020274ac(param_1, -1);
            return func_0203e908(param_1, 0x3d5);
        }
    }
    if (*(u16 *)(param_1 + 0xfc) > data_0213b827[*(s8 *)(param_1 + 0x8d)] * 60) {
        func_020274ac(param_1, -1);
        return func_ov003_021987dc(param_1, iVar4);
    }
    if (*(u32 *)(param_1 + 0x464) != 0) {
        func_020274ac(param_1, -1);
        return func_ov003_021987dc(param_1, iVar4);
    }
    return *(u32 *)(param_1 + 0x464);
}
