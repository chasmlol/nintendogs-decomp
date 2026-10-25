#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159060;
extern u8 *data_02159430;
extern u32 *data_02159444;
extern u8 *data_0215be48;
extern void func_020b7d20(void);
extern void func_0211a094(void);
extern BOOL func_020ad77c(u8 *obj);
extern void func_02097b94(s32 a, u32 b, s32 c, void *d, s32 e);
extern s32 func_01ffdb08(s32 x);
extern void func_0211a79c(u16 *out, s32 a, s32 b);
extern void func_02109084(void);
extern void func_02109010(void);
extern BOOL func_0204499c(void);
extern s32 func_0204496c(void);
extern void func_0209f59c(s32 x);
extern void func_ov004_0215c938(s32 x);

void func_020b78a4(u8 *obj)
{
    u16 buf[2];
    s32 idx;
    s16 i;
    u16 *p;
    s16 sVar1;
    s32 iv6;
    s32 bflag;

    p = (u16 *)(data_0215942c + 0x20);
    idx = -1;
    i = 0;
    do {
        if ((*p & 1) != 0 && (*p & 2) != 0) {
            idx = i;
            break;
        }
        i = (s16)(i + 1);
        p += 10;
    } while (i < 3);

    switch (*(s16 *)(obj + 0x2e)) {
    case 0:
        if (func_020ad77c(obj)) {
            func_02097b94(2, 0xd48, 0, func_020b7d20, 0);
        }
        return;
    case 1:
        switch (*(s16 *)(obj + 0x108)) {
        case 0:
            if (*(s32 *)(data_02159060 + 0xa4) != 0) {
                func_01ffdb08(idx);
                sVar1 = *(s16 *)(data_0215942c + (s16)idx * 20 + 0x30);
                if (sVar1 == 0) goto EA;
                if (sVar1 == 1) goto EB;
                if (sVar1 != 2) goto EEND;
                func_02097b94(2, 0xd49, 0, func_020b7d20, 0);
                goto EEND;
EB:
                func_02097b94(2, 0xd4a, 0, func_020b7d20, 0);
                goto EEND;
EA:
                func_02097b94(2, 0xd4b, 0, func_020b7d20, 0);
EEND:
                *(u16 *)(obj + 0x108) = 1;
                *(u16 *)(obj + 0x30) = 0;
                sVar1 = *(s16 *)(data_02159430 + 4);
                iv6 = func_01ffdb08(*(s16 *)(data_0215942c + 0xe));
                func_0211a79c(buf, sVar1, iv6);
                func_02097b94(7, buf[0], buf[1], func_0211a094, 0);
                return;
            }
            return;
        case 1:
            if (*(s32 *)(data_02159060 + 0xa4) != 0) {
                *(u16 *)(obj + 0x108) = 2;
                *(u16 *)(obj + 0x30) = 0;
                data_02159444[8] |= 1;
                data_02159444[8] |= 2;
                return;
            }
            return;
        case 2:
            *(u16 *)(obj + 0x108) = 3;
            *(u16 *)(obj + 0x30) = 0;
            *(u32 *)(data_0215be48 + 0x5030) = 0;
            func_02109084();
            return;
        case 3:
            goto LAB_020b7b10;
        case 4:
            goto LAB_020b7d88;
        default:
            goto LEND;
        }
    case 2:
        break;
    }
    return;

LAB_020b7b10:
    bflag = 0;
    iv6 = *(s32 *)(data_0215be48 + 0x48bc);
    if (!func_0204499c() && *(s16 *)(obj + 0x10a) == 3) {
        *(s16 *)(obj + 0x10a) = (s16)func_0204496c();
        sVar1 = *(s16 *)(obj + 0x10a);
        if (sVar1 == 0) goto FA;
        if (sVar1 == 1) goto FEND;
        if (sVar1 != 2) goto FEND;
        func_0209f59c(7);
        goto FEND;
FA:
        func_0209f59c(8);
FEND:;
    }
    *(s16 *)(obj + 0x30) = *(s16 *)(obj + 0x30) + 1;
    if (*(s16 *)(obj + 0x30) >= 0x708) {
        bflag = 1;
    } else if (iv6 == 1) {
        bflag = 1;
    }
    if (!bflag) {
        return;
    }
    *(u16 *)(obj + 0x108) = 4;
    *(u16 *)(obj + 0x30) = 0;
    if (*(s16 *)(obj + 0x10a) == 3) {
        *(s16 *)(obj + 0x10a) = (s16)func_0204496c();
        sVar1 = *(s16 *)(obj + 0x10a);
        if (sVar1 == 0) goto GA;
        if (sVar1 == 1) goto GEND;
        if (sVar1 != 2) goto GEND;
        func_0209f59c(7);
        goto GEND;
GA:
        func_0209f59c(8);
GEND:;
    }
    func_02109010();
    func_ov004_0215c938(*(s16 *)(obj + 0x10a));
    sVar1 = *(s16 *)(obj + 0x10a);
    if (sVar1 == 0) goto HA;
    if (sVar1 == 1) goto HB;
    if (sVar1 != 2) return;
    func_02097b94(2, 0xd4c, 0, func_020b7d20, 0);
    return;
HB:
    func_02097b94(2, 0xd4d, 0, func_020b7d20, 0);
    return;
HA:
    func_02097b94(2, 0xd4e, 0, func_020b7d20, 0);
    return;

LAB_020b7d88:
    if (*(s32 *)(data_02159060 + 0xa4) != 0) {
        *(u16 *)(obj + 0x2e) = 2;
        *(u16 *)(obj + 0x30) = 0;
        *(u16 *)(obj + 0x100) = 2;
    }
LEND:
    return;
}
