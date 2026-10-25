#include "ctx.h"

extern u8 data_0214f464[];
extern s32 func_0202775c(u8 *p, u8 *q);
extern u32 func_02036578(u8 *p);
extern u32 func_020449bc(u32 a);
extern s32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern void func_020362ec(u8 *p, s16 n);
extern void func_0202707c(u8 *p, u32 n);
extern s32 func_02057a84(u8 *p, u8 *q, u32 r);

s32 func_02056724(u8 *param_1, u8 *param_2)
{
    s32 iVar1;
    s32 t;
    u16 uVar4;
    u32 uVar5;

    iVar1 = func_0202775c(param_1, param_2);
    if (iVar1 == 0) goto caseZ;
    if (iVar1 == 1) goto case1;
    if (iVar1 != 2) goto ret0;
    {
        u8 *Q = *(u8 **)data_0214f464;
        u32 nv = *(u32 *)Q * 0x10dcd + 1;
        *(u32 *)Q = nv;
        uVar4 = ((u16)nv * 3u) >> 16;
    }
    switch (uVar4) {
    case 0: goto b0A;
    case 1: goto b1A;
    case 2: goto b2A;
    }
    goto ret0;
b0A:
    iVar1 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar1);
    if ((uVar5 & 2) == 0) return func_0202fd7c(param_1);
    if (iVar1 == 0) return 0;
    func_0203e908(param_1, 0x282);
    return 1;
b1A:
    iVar1 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar1);
    if ((uVar5 & 0x20) == 0) return func_0202fd7c(param_1);
    if (iVar1 == 0) return 0;
    {
        u8 *Q2 = *(u8 **)data_0214f464;
        u32 nv2 = *(u32 *)Q2 * 0x10dcd + 1;
        u16 bit;
        *(u32 *)Q2 = nv2;
        bit = (nv2 << 16) >> 31;
        switch (bit) {
        case 0:
            func_0203e908(param_1, 0x2cd);
            return 1;
        case 1:
            func_0203e908(param_1, 0x2ce);
            return 1;
        }
    }
    return 0;
b2A:
    uVar5 = func_020449bc(uVar4);
    if ((uVar5 & 0x100) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) goto r2A;
    if ((u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4) > 1) goto body2A;
r2A:
    return 0;
body2A:
    t = *(s8 *)(param_2 + 0x88);
    func_020362ec(param_1, (s16)t);
    func_0203e908(param_1, 0x26f);
    t = *(s8 *)(param_1 + 0x88);
    func_020362ec(param_2, (s16)t);
    func_0202707c(param_2, 0x18);
    return 1;
case1:
    return func_02057a84(param_1, param_2, 0);
caseZ:
    {
        u8 *Q = *(u8 **)data_0214f464;
        u32 nv = *(u32 *)Q * 0x10dcd + 1;
        *(u32 *)Q = nv;
        uVar4 = ((u16)nv * 3u) >> 16;
    }
    switch (uVar4) {
    case 0: goto b0B;
    case 1: goto b1B;
    case 2: goto b2B;
    }
    goto ret0;
b0B:
    iVar1 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar1);
    if ((uVar5 & 2) == 0) return func_0202fd7c(param_1);
    if (iVar1 == 0) return 0;
    func_0203e908(param_1, 0x282);
    return 1;
b1B:
    iVar1 = (s32)func_02036578(param_1);
    uVar5 = func_020449bc((u32)iVar1);
    if ((uVar5 & 0x20) == 0) return func_0202fd7c(param_1);
    if (iVar1 == 0) return 0;
    {
        u8 *Q2 = *(u8 **)data_0214f464;
        u32 nv2 = *(u32 *)Q2 * 0x10dcd + 1;
        u16 bit;
        *(u32 *)Q2 = nv2;
        bit = (nv2 << 16) >> 31;
        switch (bit) {
        case 0:
            func_0203e908(param_1, 0x2cd);
            return 1;
        case 1:
            func_0203e908(param_1, 0x2ce);
            return 1;
        }
    }
    return 0;
b2B:
    uVar5 = func_020449bc(uVar4);
    if ((uVar5 & 0x100) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4) <= 1) goto r2B;
    if ((u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4) > 1) goto body2B;
r2B:
    return 0;
body2B:
    t = *(s8 *)(param_2 + 0x88);
    func_020362ec(param_1, (s16)t);
    func_0203e908(param_1, 0x26f);
    t = *(s8 *)(param_1 + 0x88);
    func_020362ec(param_2, (s16)t);
    func_0202707c(param_2, 0x18);
    return 1;
ret0:
    return 0;
}
