#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02036578(s32 a);
extern s32 func_0202de0c(s32 a);
extern s32 func_0202e304(s32 a);
extern void func_0203e908(s32 a, s32 b);
extern s32 func_02027894(s32 a, s32 b);
extern s32 func_02027708(s32 a);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(s32 a);

u32 func_02053150(s32 param_1)
{
    s32 bVar1;
    s32 iVar2;
    s32 iVar3;
    u32 uVar5;
    s32 f;
    s32 g;

    iVar2 = func_02036578(param_1);
    if (iVar2 == 0) {
        return 0;
    }
    iVar3 = func_0202de0c(param_1);
    if (iVar3 >= 13) {
        return 0;
    }
    bVar1 = func_0202e304(param_1);
    if (bVar1) {
        func_0203e908(param_1, 0x28c);
        return 1;
    }
    iVar3 = func_02027894(param_1, iVar2);
    if (iVar3 == 0) goto c0;
    if (iVar3 == 1) goto c1;
    if (iVar3 != 2) goto ret0;
    iVar3 = *(s32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
    uVar5 = (u16)((u32)(iVar3 << 16) >> 31);
    *(s32 *)*(u32 *)&data_0214f464 = iVar3;
    switch (uVar5) {
    case 0:
        goto k0;
    case 1:
        goto neg;
    }
    goto ret0;
k0:
    func_0203e908(param_1, 0x28d);
    return 1;
neg:
    iVar2 = func_02036578(param_1);
    uVar5 = func_020449bc();
    if ((uVar5 & 8) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar2 == 0) {
        return 0;
    }
    func_0203e908(param_1, 0x28f);
    return 1;
c1:
    iVar2 = func_02027708(iVar2);
    iVar3 = (s32)*(s16 *)(param_1 + 0xea);
    if (iVar3 < 0x26c) goto a1;
    if (iVar3 > 0x26f) goto a1;
    if (*(s16 *)(param_1 + 0x13e) == iVar2) {
        f = 1;
        goto af;
    }
a1:
    f = 0;
af:
    if (f != 0) {
        bVar1 = 1;
        goto join;
    }
    if (iVar3 < 0x259) goto b1;
    if (iVar3 > 0x25f) goto b1;
    f = 1;
    goto bf;
b1:
    f = 0;
bf:
    bVar1 = f;
    if (bVar1 == 0) goto zr;
    iVar3 = (s32)*(s16 *)(param_1 + 0xee);
    if (iVar3 < 0x26c) goto c1x;
    if (iVar3 > 0x26f) goto c1x;
    if (*(s16 *)(param_1 + 0x13e) == iVar2) {
        g = 1;
        goto cf;
    }
c1x:
    g = 0;
cf:
    if (g != 0) {
        bVar1 = 1;
        goto join;
    }
zr:
    bVar1 = 0;
join:
    if (bVar1) {
        func_0203e908(param_1, 0x28b);
        return 1;
    }
    iVar2 = *(s32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
    uVar5 = (u16)(((u32)iVar2 << 16) >> 31);
    *(s32 *)*(u32 *)&data_0214f464 = iVar2;
    if (uVar5 == 0) return 0;
    func_0203e908(param_1, 0x28c);
    return 1;
c0:
    func_0203e908(param_1, 0x28e);
    return 1;
ret0:
    return 0;
}
