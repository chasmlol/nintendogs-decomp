#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159468;

extern void func_020ad7c8(u8 *p, s32 a);
extern void func_020ad6fc(u8 *p, s32 a);
extern void func_02109238(void);
extern s32 func_01ffdb08(s32 a);
extern void func_02026fc8(s32 a);
extern s32 func_020c1f34(u8 *p);
extern void func_020942c0(s16 *p, s32 a);
extern s32 func_020946ac(s32 a, s32 b);
extern s32 func_020bcf08(s32 a);
extern s32 func_020aef1c(u8 *p, s32 a);
extern void func_020ae374(u8 *p);
extern void func_020bca08(s32 a);

#define WAIT3() do { s32 i_ = 0; do { s32 r_ = func_01ffdb08(i_); if (r_ != 0) { func_02026fc8(r_); } i_ = (s16)(i_ + 1); } while (i_ < 3); } while (0)

#define SCAN(p, flag) do { s32 tt_; flag = 0; switch (*(s16 *)((p) + 0x7c)) { \
    case 0x4f: case 0x50: case 0x51: case 0x52: case 0x53: case 0x54: case 0x55: case 0x56: \
    case 0x57: case 0x58: case 0x59: case 0x5a: case 0x5b: case 0x5c: case 0x5d: case 0x5e: \
    case 0x5f: case 0x60: case 0x61: case 0x62: case 99: case 100: tt_ = flag; break; \
    default: tt_ = 1; break; } if (tt_ == 0) flag = 1; } while (0)

void func_020af094(u8 *param_1)
{
    u8 *base;
    s32 iVar2;
    s32 iVar3;
    s32 bVar1;
    s16 sStack_20[2];
    s16 sStack_1c[2];
    s16 sStack_18[2];
    s16 sStack_14[2];

    if (*(s16 *)(param_1 + 0x10e) >= 0) {
        func_020ad7c8(param_1, 0x15);
        func_020ad6fc(param_1, 1);
        func_02109238();
        return;
    }
    base = data_0215be48;
    base += 0x4000;
    iVar3 = *(s32 *)(base + 0x8bc);
    switch (iVar3) {
    case 1:
        SCAN(param_1, bVar1);
        func_020ad7c8(param_1, 2);
        WAIT3();
        if (bVar1 == 0) goto Z1;
        func_020ad6fc(param_1, 2);
        return;
    Z1:
        func_020ad6fc(param_1, 1);
        func_02109238();
        return;
    case 2:
        if (*(s16 *)(param_1 + 0x74) > 0) {
            return;
        }
        if (iVar3 != 2) {
            return;
        }
        *(s16 *)(param_1 + 0x74) = 0x1e;
        if (*(s16 *)(param_1 + 0x7e) == -1) {
            iVar3 = func_020bcf08(*(s16 *)(param_1 + 0x7c));
            *(s16 *)(param_1 + 0x7e) = *(s16 *)(param_1 + 0x7c);
            switch (iVar3) {
            case 0:
            case 1:
                goto X01;
            case 2:
            case 7:
            case 15:
                goto Y1;
            default:
                goto Tail1;
            }
        Y1:
            { s16 vY = *(s16 *)(param_1 + 0x7c); sStack_20[0] = 0; sStack_20[1] = vY; }
            func_020942c0(sStack_20, 1);
            goto Tail1;
        X01:
            iVar2 = *(s16 *)(param_1 + 0x7a);
            if (iVar2 < 0) goto Z2;
            if (*(s16 *)(data_02159468 + 0x20) > iVar2) goto L2;
        Z2:
            iVar2 = 0;
            goto J2;
        L2:
            iVar2 = *(s32 *)(data_02159468 + iVar2 * 4 + 4);
        J2:
            if (iVar2 != 0) {
                iVar2 = func_020c1f34((u8 *)iVar2);
                { s16 vX = *(s16 *)(param_1 + 0x7c); sStack_14[0] = 0; sStack_14[1] = vX; }
                func_020942c0(sStack_14, (s32)(iVar2 << 4) >> 16);
            }
            iVar3 = func_020946ac(0, *(s16 *)(param_1 + 0x7c));
            if (iVar3 <= 0) {
                *(s16 *)(param_1 + 0x7e) = -1;
            }
        Tail1:
            *(s16 *)(param_1 + 0x7c) = -1;
            func_020bca08(0);
            *(s16 *)(param_1 + 0x76) = 0;
            *(s16 *)(param_1 + 0x78) = 0;
            return;
        }
        iVar3 = func_020bcf08(*(s16 *)(param_1 + 0x7e));
        switch (iVar3) {
        case 0:
        case 1:
            goto C01;
        case 2:
        case 7:
        case 15:
            goto C27;
        default:
            goto Tail2;
        }
    C27:
        { s16 vC = *(s16 *)(param_1 + 0x7e); sStack_1c[0] = 0; sStack_1c[1] = vC; }
        func_020942c0(sStack_1c, -1);
        goto Tail2;
    C01:
        iVar3 = func_020aef1c(param_1, *(s16 *)(param_1 + 0x7e));
        { s16 vD = *(s16 *)(param_1 + 0x7e); sStack_18[0] = 0; sStack_18[1] = vD; }
        func_020942c0(sStack_18, (s16)(-iVar3));
    Tail2:
        *(s16 *)(param_1 + 0x7c) = *(s16 *)(param_1 + 0x7e);
        *(s16 *)(param_1 + 0x7e) = -1;
        func_020ae374(param_1);
        *(s32 *)(param_1 + 0x70) = 0;
        WAIT3();
        return;
    case 4:
        SCAN(param_1, bVar1);
        func_020ad7c8(param_1, 5);
        WAIT3();
        if (bVar1 != 0) {
            func_020ad6fc(param_1, 2);
            return;
        }
        func_020ad6fc(param_1, 1);
        func_02109238();
        return;
    default:
        if (*(s32 *)(param_1 + 0xbc) < 0xe10) {
            return;
        }
        SCAN(param_1, bVar1);
        func_020ad7c8(param_1, 2);
        WAIT3();
        if (bVar1 != 0) {
            func_020ad6fc(param_1, 2);
            return;
        }
        func_020ad6fc(param_1, 1);
        func_02109238();
        return;
    }
}
