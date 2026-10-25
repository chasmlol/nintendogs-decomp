#include "ctx.h"

extern u8 *data_02159444;
extern u8 *data_02159468;
extern u32 *data_0214f464;
extern u16 data_ov004_0217025c[];

s32 func_020f5220(void);
void func_020f3bdc(s32 a);
void func_ov004_02169ff4(u8 *p);
s32 func_02022dd0(u8 *p);
s16 func_0203bc40(u8 *p);
s32 func_0202dc50(u8 *p, s32 a, s32 b, s32 c, u8 d, s32 e);
void func_02029504(u8 *p);
s32 func_020c1f34(u8 *p);
void func_0203e908(u8 *p, s32 a);
s32 func_0203567c(u8 *p);
s32 func_ov004_0216ea3c(void);
void func_ov004_0216e554(s32 a);
void func_020bbc58(void);
void func_ov004_0216c23c(u8 *p);

struct Blk {
    s32 a;
    s32 b;
    s32 c;
};

s32 func_ov004_02169ae8(u8 *param_1, s32 param_2, s32 param_3)
{
    struct Blk blk;
    u16 A[5];
    u16 B[5];
    u8 *ent;
    s32 iVar5;
    s32 idx;
    s32 bVar3;
    u32 uVar7;
    u16 uVar1;
    u32 *P;
    s16 f0v;
    s32 skipv;

    *(s32 *)(param_1 + 0x484) = 0;
    *(s32 *)(param_1 + 0x2a0) = *(s32 *)(param_1 + 0x2a0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3f0) = *(s32 *)(param_1 + 0x3f0) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x3fc) = *(s32 *)(param_1 + 0x3fc) - *(s32 *)(param_1 + 0x484);
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    if (func_020f5220() != 0) {
        func_020f3bdc(*(s32 *)(param_1 + 0x484));
    }
    func_ov004_02169ff4(param_1);
    if (*(u16 *)(param_1 + 0x112) != 0) {
        iVar5 = 0;
        goto L_f4;
    }
    f0v = *(s16 *)(param_1 + 0xf0);
    if (f0v == 0) {
        goto L_call;
    }
    switch (f0v) {
    case 0x6f:
        iVar5 = 0;
        break;
    default:
    L_call:
        if (func_02022dd0(param_1) != 0) {
            s16 sv = func_0203bc40(param_1);
            iVar5 = func_0202dc50(param_1, 0, (s16)param_2, sv, *(u8 *)(param_1 + 0xa5), 1);
        } else {
            func_02029504(param_1);
            iVar5 = 0;
        }
        break;
    }
L_f4:
    if (iVar5 != 0) {
        return 1;
    }
    idx = *(s16 *)(data_02159444 + 0x7a);
    if (idx < 0 || *(s16 *)(data_02159468 + 0x20) <= idx) {
        ent = 0;
    } else {
        ent = *(u8 **)(data_02159468 + 4 + idx * 4);
    }
    if (ent == 0) {
        goto L_1d4;
    }
    if (*(s16 *)(ent + 0x90) == 0) {
        goto L_s1;
    }
    if (*(s16 *)(ent + 0x90) != 2) {
        goto L_c2;
    }
L_s1:
    skipv = 1;
    goto L_t;
L_c2:
    if (*(s16 *)(ent + 0x94) != 0x35) {
        goto L_s0;
    }
    if (func_020c1f34(ent) == 0) {
        skipv = 1;
        goto L_t;
    }
L_s0:
    skipv = 0;
L_t:
    if (skipv != 0) {
        goto L_1d4;
    }
    if (*(s16 *)(ent + 0x96) != 0x14) {
        goto L_1d4;
    }
    blk = *(struct Blk *)(ent + 0xbc);
    if (blk.a <= 0 || blk.a >= 0x1000) {
        goto L_1d4;
    }
    func_0203e908(param_1, 0x4bd);
    bVar3 = 1;
    goto L_1d8;
L_1d4:
    bVar3 = 0;
L_1d8:
    if (bVar3 != 0) {
        return 1;
    }
    if (param_3 != 0 && func_0203567c(param_1) != 0) {
        A[0] = data_ov004_0217025c[0];
        A[1] = data_ov004_0217025c[1];
        A[2] = data_ov004_0217025c[2];
        A[3] = data_ov004_0217025c[3];
        A[4] = data_ov004_0217025c[4];
        if (func_ov004_0216ea3c() != 0) {
            func_ov004_0216e554(1);
        }
        func_020bbc58();
        P = data_0214f464;
        uVar1 = A[*(s8 *)(param_1 + 0x8e)];
        uVar7 = *P * 0x10dcd;
        uVar7 = uVar7 + 1;
        *P = uVar7;
        if ((u16)(((u32)uVar1 * (u16)uVar7) >> 16) == 0) {
            uVar7 = *data_0214f464;
            uVar7 = uVar7 * 0x10dcd + 1;
            *data_0214f464 = uVar7;
            switch ((u16)(((u32)(u16)uVar7 * 5) >> 16)) {
            case 0:
                func_0203e908(param_1, 0x4ac);
                break;
            case 1:
                func_0203e908(param_1, 0x4ad);
                break;
            case 2:
                func_0203e908(param_1, 0x4ae);
                break;
            case 3:
                func_0203e908(param_1, 0x4af);
                break;
            case 4:
                func_0203e908(param_1, 0x4b0);
                break;
            }
        } else {
            func_ov004_0216c23c(param_1);
        }
        return 1;
    }
    if (*(u16 *)(param_1 + 0xfc) > 60) {
        uVar7 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar7;
        if ((u16)(((u32)(u16)uVar7 * 100) >> 16) == 0) {
            B[0] = data_ov004_0217025c[0];
            B[1] = data_ov004_0217025c[1];
            B[2] = data_ov004_0217025c[2];
            B[3] = data_ov004_0217025c[3];
            B[4] = data_ov004_0217025c[4];
            if (func_ov004_0216ea3c() != 0) {
                func_ov004_0216e554(1);
            }
            func_020bbc58();
            P = data_0214f464;
            uVar1 = B[*(s8 *)(param_1 + 0x8e)];
            uVar7 = *P * 0x10dcd;
            uVar7 = uVar7 + 1;
            *P = uVar7;
            if ((u16)(((u32)uVar1 * (u16)uVar7) >> 16) == 0) {
                uVar7 = *data_0214f464 * 0x10dcd + 1;
                *data_0214f464 = uVar7;
                switch ((u16)(((u32)(u16)uVar7 * 5) >> 16)) {
                case 0:
                    func_0203e908(param_1, 0x4ac);
                    break;
                case 1:
                    func_0203e908(param_1, 0x4ad);
                    break;
                case 2:
                    func_0203e908(param_1, 0x4ae);
                    break;
                case 3:
                    func_0203e908(param_1, 0x4af);
                    break;
                case 4:
                    func_0203e908(param_1, 0x4b0);
                    break;
                }
            } else {
                func_ov004_0216c23c(param_1);
            }
            return 1;
        }
    }
    return 0;
}
