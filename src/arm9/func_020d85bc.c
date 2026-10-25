#include "ctx.h"
#pragma opt_propagation off
#pragma opt_lifetimes off

extern u8 *data_02159444;
extern u8 *data_02159468;
extern s32 data_021449ac[4];

extern s32 func_020c8cd0(void);
extern void func_02044ca0(s32 a);
extern void func_020be1d8(s32 a);
extern void func_020cf9c8(u8 *a, s32 b, s32 c, s32 d);
extern void func_020cf9bc(u8 *a);
extern s32 func_020c8d1c(void);
extern s32 func_020c466c(u8 *a);
extern s32 func_020c8db4(s32 a);

void func_020d85bc(u8 *param_1)
{
    s32 sv;
    s32 bv;
    s32 iVar4;
    s32 m;
    u8 *e;
    s32 s1;
    s32 iVar5;

    iVar4 = func_020c8cd0();
    func_02044ca0(0);
    iVar5 = *(s16 *)(data_02159444 + 0x7a);
    if (iVar5 < 0) goto L40;
    if (*(s16 *)(data_02159468 + 0x20) > iVar5) goto L48;
L40:
    e = 0;
    goto L50;
L48:
    e = *(u8 **)(data_02159468 + iVar5 * 4 + 4);
L50:
    func_020be1d8(1);
    if (e == 0) {
        return;
    }
    sv = *(s16 *)(e + 0x90);
    if (sv == 2) goto L80;
    if (sv == 3) goto L80;
    if (sv != 6) goto La8;
L80:
    func_020cf9c8(param_1, 16, -1, 0);
    data_021449ac[0] = -1;
    return;
La8:
    if (iVar4 == -1) goto Ldc;
    iVar5 = *(s16 *)(e + 0x98);
    if (iVar4 != iVar5) {
        return;
    }
    func_020cf9c8(param_1, 18, iVar5, 0);
    return;
Ldc:
    m = *(s32 *)(param_1 + 0x34);
    if (m != 0x17) goto L14c;
    sv = data_021449ac[1];
    if (sv == -1) {
        data_021449ac[1] = 60;
        return;
    }
    if (sv != 0) {
        data_021449ac[1] = sv - 1;
        return;
    }
    data_021449ac[1] = -2;
    func_020cf9c8(param_1, 21, -1, 0);
    func_020cf9bc(param_1);
    data_021449ac[0] = 30;
    return;
L14c:
    if (m != 0x16) goto L28c;
    iVar4 = func_020c8d1c();
    if (iVar4 == -1) goto G198;
    func_020cf9c8(param_1, 23, iVar4, 0);
    func_020cf9bc(param_1);
    data_021449ac[1] = -1;
    return;
G198:
    sv = data_021449ac[2];
    if (sv == -2) goto H1f8;
    if (sv == -1) {
        data_021449ac[2] = 200;
        return;
    }
    if (sv != 0) {
        data_021449ac[2] = sv - 1;
        return;
    }
    func_020cf9c8(param_1, 2, iVar4, 0);
    func_020cf9bc(param_1);
    return;
H1f8:
    if ((u16)(s16)(*(s16 *)(e + 0x90) - 4) <= 1) {
        data_021449ac[2] = -1;
    }
    sv = data_021449ac[3];
    if (sv == -1) {
        data_021449ac[3] = 200;
        return;
    }
    if (sv != 0) goto L274;
    if (func_020c466c(e) != 0) goto L274;
    func_020cf9c8(param_1, 2, iVar4, 0);
    func_020cf9bc(param_1);
    return;
L274:
    data_021449ac[3] = data_021449ac[3] - 1;
    return;
L28c:
    iVar5 = func_020c8d1c();
    if (iVar5 == -1) goto L2cc;
    func_020cf9c8(param_1, 23, iVar5, 0);
    func_020cf9bc(param_1);
    data_021449ac[1] = -1;
    return;
L2cc:
    if (func_020c466c(e) == 0) goto L31c;
    iVar5 = func_020c8db4(-1);
    func_020cf9c8(param_1, 22, iVar5, 0);
    func_020cf9bc(param_1);
    data_021449ac[2] = -2;
    data_021449ac[3] = -1;
    return;
L31c:
    sv = data_021449ac[0];
    if (sv != -1) goto L3e8;
    s1 = *(s16 *)(e + 0x92);
    if (s1 != 3) goto L34c;
    if (*(s16 *)(e + 0x90) == 1) {
        bv = 1;
        goto L350;
    }
L34c:
    bv = 0;
L350:
    if (bv != 0) goto L3c0;
    if (s1 == 3) goto L370;
    if (s1 == 6) goto L370;
    if (s1 != 8) goto L380;
L370:
    if (*(s16 *)(e + 0x90) == 4) {
        bv = 1;
        goto L3b4;
    }
L380:
    if (s1 != 5) goto L398;
    if (*(s16 *)(e + 0x90) == 7) {
        bv = 1;
        goto L3b4;
    }
L398:
    if (s1 != 5) goto L3b0;
    if (*(s16 *)(e + 0x90) == 1) {
        bv = 1;
        goto L3b4;
    }
L3b0:
    bv = 0;
L3b4:
    if (bv == 0) {
        return;
    }
L3c0:
    func_020cf9c8(param_1, 21, -1, 3);
    data_021449ac[0] = 200;
    return;
L3e8:
    if (sv == 0) goto L3fc;
    data_021449ac[0] = sv - 1;
    return;
L3fc:
    func_020cf9c8(param_1, 2, -1, 3);
    data_021449ac[0] = -1;
    return;
}
