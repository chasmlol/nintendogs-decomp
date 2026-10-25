#pragma avoid_byte strb
#include "ctx.h"

extern u32 *data_0214f464;
extern s32 func_02027710(u8 *p, u8 *q);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, s32 code);
extern void func_020362ec(u8 *p, s16 v);
extern void func_0202707c(u8 *p, s32 v);
extern void func_020362f8(u8 *p);
extern u8 func_02027708(u8 *p);

/* State machine on the s16 word at p2+0xea; one case per target block, in address order. */
u32 func_0204ec20(u8 *param_1, u8 *param_2)
{
    s32 st;
    s32 r4;
    s32 idx;
    u32 nv;
    u32 b;

    st = *(s16 *)(param_2 + 234);
    if (st == 0x2fe) goto A_one;
    if (st == 0x2ff) goto B_block;
    if (st != 0x300) goto DEF;
    goto C_block;

A_one:
    r4 = func_02027710(param_1, param_2);
    if (r4 == -1) goto A_zero;
    if (r4 == 0) goto A_zero;
    if (r4 != 1) goto DEF;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    idx = (u16)(((u32)(u16)nv * 3) >> 16);
    if (idx == 0) goto A1_0;
    if (idx == 1) goto A1_1;
    if (idx != 2) goto DEF;
    goto A1_2;

A1_0:
    r4 = func_02036578(param_1);
    if ((func_020449bc() & 2) == 0) return func_0202fd7c(param_1);
    if (r4 == 0) return 0;
    func_0203e908(param_1, 0x282);
    return 1;

A1_1:
    r4 = func_02036578(param_1);
    if ((func_020449bc() & 32) == 0) return func_0202fd7c(param_1);
    if (r4 == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    b = (u16)((nv << 16) >> 31);
    if (b == 0) goto A1_1a;
    if (b != 1) goto A1_1r0;
    goto A1_1b;
A1_1a:
    func_0203e908(param_1, 0x2cd);
    return 1;
A1_1b:
    func_0203e908(param_1, 0x2ce);
    return 1;
A1_1r0:
    return 0;

A1_2:
    if ((func_020449bc() & 256) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 139) - 4) <= 1) goto R0_X_block;
    if ((u8)(s8)(*(s8 *)(param_2 + 139) - 4) > 1) goto X_block;
R0_X_block:
    return 0;

X_block:
    { s32 tv = *(s8 *)(param_2 + 136); func_020362ec(param_1, (s16)tv); }
    func_0203e908(param_1, 0x26f);
    { s32 tw = *(s8 *)(param_1 + 136); func_020362ec(param_2, (s16)tw); }
    func_0202707c(param_2, 24);
    return 1;

A_zero:
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    idx = (u16)(((u32)(u16)nv * 3) >> 16);
    if (idx == 0) goto A0_0;
    if (idx == 1) goto A0_1;
    if (idx != 2) goto DEF;
    goto A0_2;

A0_0:
    r4 = func_02036578(param_1);
    if ((func_020449bc() & 2) == 0) return func_0202fd7c(param_1);
    if (r4 == 0) return 0;
    func_0203e908(param_1, 0x282);
    return 1;

A0_1:
    r4 = func_02036578(param_1);
    if ((func_020449bc() & 32) == 0) return func_0202fd7c(param_1);
    if (r4 == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    b = (u16)((nv << 16) >> 31);
    if (b == 0) goto A0_1a;
    if (b != 1) goto A0_1r0;
    goto A0_1b;
A0_1a:
    func_0203e908(param_1, 0x2cd);
    return 1;
A0_1b:
    func_0203e908(param_1, 0x2ce);
    return 1;
A0_1r0:
    return 0;

A0_2:
    if ((func_020449bc() & 256) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 139) - 4) <= 1) goto R0_X2_block;
    if ((u8)(s8)(*(s8 *)(param_2 + 139) - 4) > 1) goto X2_block;
R0_X2_block:
    return 0;

X2_block:
    { s32 tv = *(s8 *)(param_2 + 136); func_020362ec(param_1, (s16)tv); }
    func_0203e908(param_1, 0x26f);
    { s32 tw = *(s8 *)(param_1 + 136); func_020362ec(param_2, (s16)tw); }
    func_0202707c(param_2, 24);
    return 1;

B_block:
    func_020362f8(param_1);
    if (param_2 == 0) return 0;
    param_1[138] = func_02027708(param_2);
    func_0203e908(param_1, 0x302);
    return 1;

C_block:
    r4 = func_02027710(param_1, param_2);
    if (r4 == -1) goto C_neg;
    if (r4 == 0) goto C_zero;
    if (r4 != 1) goto DEF;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    b = (u16)((nv << 16) >> 31);
    if (b == 0) goto C1_0;
    if (b != 1) goto DEF;
    goto C1_1;

C1_0:
    r4 = func_02036578(param_1);
    if ((func_020449bc() & 32) == 0) return func_0202fd7c(param_1);
    if (r4 == 0) return 0;
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    b = (u16)((nv << 16) >> 31);
    if (b == 0) goto C1_0a;
    if (b != 1) goto C1_0r0;
    goto C1_0b;
C1_0a:
    func_0203e908(param_1, 0x2cd);
    return 1;
C1_0b:
    func_0203e908(param_1, 0x2ce);
    return 1;
C1_0r0:
    return 0;

C1_1:
    if ((func_020449bc() & 256) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 139) - 4) <= 1) goto R0_X3_block;
    if ((u8)(s8)(*(s8 *)(param_2 + 139) - 4) > 1) goto X3_block;
R0_X3_block:
    return 0;

X3_block:
    { s32 tv = *(s8 *)(param_2 + 136); func_020362ec(param_1, (s16)tv); }
    func_0203e908(param_1, 0x26f);
    { s32 tw = *(s8 *)(param_1 + 136); func_020362ec(param_2, (s16)tw); }
    func_0202707c(param_2, 24);
    return 1;

C_zero:
    func_020362f8(param_1);
    if (param_2 == 0) return 0;
    param_1[138] = func_02027708(param_2);
    func_0203e908(param_1, 0x302);
    return 1;

C_neg:
    nv = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = nv;
    b = (u16)((nv << 16) >> 31);
    if (b == 0) goto C2_0;
    if (b != 1) goto DEF;
    goto C2_1;

C2_0:
    { s32 tw = *(s8 *)(param_1 + 136); func_020362ec(param_2, (s16)tw); }
    func_0202707c(param_2, 17);
    return 1;

C2_1:
    if ((func_020449bc() & 256) == 0) return func_0202fd7c(param_1);
    if ((u8)(s8)(*(s8 *)(param_1 + 139) - 4) <= 1) goto R0_Y_block;
    if ((u8)(s8)(*(s8 *)(param_2 + 139) - 4) > 1) goto Y_block;
R0_Y_block:
    return 0;

Y_block:
    { s32 tv = *(s8 *)(param_2 + 136); func_020362ec(param_1, (s16)tv); }
    func_0203e908(param_1, 0x273);
    { s32 tw = *(s8 *)(param_1 + 136); func_020362ec(param_2, (s16)tw); }
    func_0202707c(param_2, 22);
    return 1;

DEF:
    return 0;
}
