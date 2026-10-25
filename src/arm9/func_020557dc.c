#pragma avoid_byte strb
#include "ctx.h"

extern s32 *data_0214f464;


s32 func_02027708(u8 *a);
void func_0203e908(u8 *a, s32 b);
s32 func_020449bc(void);
s32 func_0202fd7c(u8 *a);
void func_020362ec(u8 *a, s32 b);
s32 func_02036578(u8 *a);
s32 func_02027894(u8 *a, s32 b);
void func_0202707c(u8 *a, s32 b);
void func_02027668(u8 *a, s32 *b);
s32 func_0203945c(u8 *a, s32 *b, s32 c);
s32 func_0202de0c(u8 *a);
s32 func_020385e4(u8 *a);
s32 func_02056e6c(u8 *a, u8 *b);
s32 func_02056be4(u8 *a, u8 *b);
s32 func_02056724(u8 *a, u8 *b);
s32 func_02056430(u8 *a, u8 *b);

s32 func_020557dc(u8 *param_1, u8 *param_2)
{
    u32 uVar5;
    s32 cnt;
    u8 *pp1;
    u8 *pp2;
    s32 iVar1;
    s32 iVar2;
    s32 bVar7;
    s32 v;
    u32 ns;
    s32 *piVar3;
    s32 buf[3];

    pp1 = param_1;
    pp2 = param_2;
    if (pp2 == 0) {
        return 0;
    }
    iVar1 = *(s16 *)(pp2 + 0xea);
    if (iVar1 < 0x295) goto F1;
    if (iVar1 <= 0x299) {
        bVar7 = 1;
        goto J1;
    }
F1:
    bVar7 = 0;
J1:
    if (bVar7) goto L_e8;
    if (iVar1 == 0x2ab) goto L_70;
    if (iVar1 == 0x2b5) goto L_70;
    if (iVar1 != 0x2bf) goto L_78;
L_70:
    bVar7 = 0;
    goto L_94;
L_78:
    if (iVar1 < 0x2a1) goto F3;
    if (iVar1 <= 0x2cc) {
        bVar7 = 1;
        goto L_94;
    }
F3:
    bVar7 = 0;
L_94:
    if (bVar7) goto L_e8;
    if (iVar1 < 0x2cd) goto F4;
    if (iVar1 <= 0x2d7) {
        bVar7 = 1;
        goto J4;
    }
F4:
    bVar7 = 0;
J4:
    if (bVar7) goto L_e8;
    if (iVar1 < 0x2d9) goto F5;
    if (iVar1 <= 0x2fc) {
        bVar7 = 1;
        goto J5;
    }
F5:
    bVar7 = 0;
J5:
    if (!bVar7) goto L_f0;
L_e8:
    bVar7 = 1;
    goto L_f4;
L_f0:
    bVar7 = 0;
L_f4:
    if (!bVar7) goto L_13c;
    if (pp2 == 0) {
        return 0;
    }
    iVar1 = func_02027708(pp2);
    *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
    func_0203e908(pp1, 0x302);
    return 1;
L_13c:
    if (iVar1 < 0x278) goto F13;
    if (iVar1 <= 0x27b) {
        bVar7 = 1;
        goto J13;
    }
F13:
    bVar7 = 0;
J13:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    if (iVar1 < 0x282) goto F14;
    if (iVar1 <= 0x284) {
        bVar7 = 1;
        goto J14;
    }
F14:
    bVar7 = 0;
J14:
    if (bVar7) {
        bVar7 = 1;
        goto L_1e4;
    }
    if (iVar1 < 0x259) goto F15;
    if (iVar1 <= 0x25f) {
        bVar7 = 1;
        goto J15;
    }
F15:
    bVar7 = 0;
J15:
    if (!bVar7) goto L_1e0;
    iVar2 = *(s16 *)(pp2 + 0xee);
    if (iVar2 < 0x282) goto F16;
    if (iVar2 <= 0x284) {
        bVar7 = 1;
        goto J16;
    }
F16:
    bVar7 = 0;
J16:
    if (bVar7) {
        bVar7 = 1;
        goto L_1e4;
    }
L_1e0:
    bVar7 = 0;
L_1e4:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    if (iVar1 < 0x289) goto F17;
    if (iVar1 <= 0x28a) {
        bVar7 = 1;
        goto J17;
    }
F17:
    bVar7 = 0;
J17:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    if (iVar1 < 0x28f) goto F18;
    if (iVar1 <= 0x290) {
        bVar7 = 1;
        goto J18;
    }
F18:
    bVar7 = 0;
J18:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    if (iVar1 < 0x295) goto F19;
    if (iVar1 <= 0x299) {
        bVar7 = 1;
        goto J19;
    }
F19:
    bVar7 = 0;
J19:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    if (iVar1 < 0x2cd) goto F20;
    if (iVar1 <= 0x2d7) {
        bVar7 = 1;
        goto J20;
    }
F20:
    bVar7 = 0;
J20:
    if (bVar7) {
        iVar1 = 1;
        goto L_2ac;
    }
    iVar1 = (iVar1 == 0x2fd);
L_2ac:
    if (iVar1 != 0) {
        return 0;
    }
    iVar1 = func_020449bc();
    if (iVar1 == -1) goto L_b28;
    cnt = 0;
    uVar5 = 1;
    do {
        v = func_020449bc();
        if ((uVar5 & v) != 0) {
            cnt = (s16)(cnt + 1);
        }
        uVar5 <<= 1;
    } while (uVar5 < 0x8000);
    piVar3 = data_0214f464;
    ns = *piVar3 * 0x10dcd + 1;
    *piVar3 = ns;
    cnt = (s16)(u16)(((u32)(u16)cnt * (u16)ns) >> 16);
    uVar5 = 1;
    do {
        v = func_020449bc();
        if ((uVar5 & v) != 0) {
            cnt = (s16)(cnt - 1);
            if (cnt <= 0) {
                switch (uVar5) {
                case 1:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 1) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    piVar3 = data_0214f464;
                    ns = *piVar3 * 0x10dcd + 1;
                    *piVar3 = ns;
                    switch ((u16)((ns << 16) >> 31)) {
                    case 0:
                        func_0203e908(pp1, 0x278);
                        return 1;
                    case 1:
                        func_0203e908(pp1, 0x279);
                        return 1;
                    default:
                        return 0;
                    }
                case 2:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 2) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    func_0203e908(pp1, 0x282);
                    return 1;
                case 4:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 4) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    func_0203e908(pp1, 0x289);
                    return 1;
                case 8:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 8) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    func_0203e908(pp1, 0x28f);
                    return 1;
                case 16:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 16) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    *(s32 *)(pp1 + 0x484) = func_02027894(pp1, uVar5);
                    func_0203e908(pp1, 0x295);
                    return 1;
                case 32:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 32) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    piVar3 = data_0214f464;
                    ns = *piVar3 * 0x10dcd + 1;
                    *piVar3 = ns;
                    switch ((u16)((ns << 16) >> 31)) {
                    case 0:
                        func_0203e908(pp1, 0x2cd);
                        return 1;
                    case 1:
                        func_0203e908(pp1, 0x2ce);
                        return 1;
                    default:
                        return 0;
                    }
                case 64:
                    uVar5 = func_02036578(pp1);
                    v = func_020449bc();
                    if ((v & 64) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if (uVar5 == 0) {
                        return 0;
                    }
                    func_0203e908(pp1, 0x2fd);
                    return 1;
                case 128:
                    v = func_020449bc();
                    if ((v & 128) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if ((u8)(s8)(*(s8 *)(pp1 + 0x8b) - 4) <= 1) goto R128;
                    if ((u8)(s8)(*(s8 *)(pp2 + 0x8b) - 4) > 1) goto B128;
R128:
                    return 0;
B128:
                    iVar2 = *(s8 *)(pp2 + 0x88);
                    func_020362ec(pp1, (s16)iVar2);
                    func_0203e908(pp1, 0x26e);
                    iVar2 = *(s8 *)(pp1 + 0x88);
                    func_020362ec(pp2, (s16)iVar2);
                    func_0202707c(pp2, 23);
                    return 1;
                case 256:
                    v = func_020449bc();
                    if ((v & 256) == 0) {
                        return func_0202fd7c(pp1);
                    }
                    if ((u8)(s8)(*(s8 *)(pp1 + 0x8b) - 4) <= 1) goto R256;
                    if ((u8)(s8)(*(s8 *)(pp2 + 0x8b) - 4) > 1) goto B256;
R256:
                    return 0;
B256:
                    iVar2 = *(s8 *)(pp2 + 0x88);
                    func_020362ec(pp1, (s16)iVar2);
                    func_0203e908(pp1, 0x26f);
                    iVar2 = *(s8 *)(pp1 + 0x88);
                    func_020362ec(pp2, (s16)iVar2);
                    func_0202707c(pp2, 24);
                    return 1;
                case 512:
                    if (pp2 == 0) {
                        return 0;
                    }
                    iVar1 = func_02027708(pp2);
                    *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
                    func_0203e908(pp1, 0x304);
                    return 1;
                case 1024:
                    if (pp2 == 0) goto R1024;
                    iVar1 = func_02027708(pp2);
                    *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
                    switch (func_020385e4(pp1)) {
                    case 0:
                        func_0203e908(pp1, 0x274);
                        return 1;
                    case 1:
                        func_0203e908(pp1, 0x275);
                        return 1;
                    case 2:
                        func_0203e908(pp1, 0x276);
                        return 1;
                    case 3:
                        func_0203e908(pp1, 0x277);
                        return 1;
                    default:
                        goto R1024;
                    }
R1024:
                    return 0;
                case 2048:
                    if (pp2 == 0) {
                        return 0;
                    }
                    func_02027668(pp2, buf);
                    return func_0203945c(pp1, buf, func_02027708(pp2));
                case 4096:
                    if (pp2 != 0) {
                        if (func_0202de0c(pp1) == 0) {
                            iVar1 = func_02027708(pp2);
                            *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
                            func_0203e908(pp1, 0x305);
                            return 1;
                        }
                    }
                    return 0;
                case 8192:
                    if (pp2 == 0) {
                        return 0;
                    }
                    iVar1 = func_02027708(pp2);
                    *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
                    func_0203e908(pp1, 0x306);
                    return 1;
                case 16384:
                    if (pp2 == 0) {
                        return 0;
                    }
                    iVar1 = func_02027708(pp2);
                    *(vu8 *)(pp1 + 0x8a) = (u8)iVar1;
                    func_0203e908(pp1, 0x307);
                    return 1;
                default:
                    break;
                }
            }
        }
        uVar5 <<= 1;
    } while (uVar5 < 0x8000);
L_b28:
    piVar3 = data_0214f464;
    *piVar3 = *piVar3 * 0x10dcd + 1;
    switch (*(s8 *)(pp1 + 0x8b)) {
    case 0:
        return func_02056e6c(pp1, pp2);
    case 1:
        return func_02056be4(pp1, pp2);
    case 2:
        return func_02056724(pp1, pp2);
    case 3:
    case 4:
    case 5:
        return func_02056430(pp1, pp2);
    default:
        return 0;
    }
}
