#include "ctx.h"

extern u32 data_02150f30[];
extern s32 func_0206d034(u32 a);
extern s32 func_0206d7d8(void);

/* Bit fields of the three game words: fields are read with lsl/lsr pairs. */
typedef struct { u32 :8; u32 f:5; } TA8_5;
typedef struct { u32 :16; u32 f:6; } TA16_6;
typedef struct { u32 :24; u32 f:3; } TA24_3;
typedef struct { u32 f:6; } TC0_6;
typedef struct { u32 :8; u32 f:7; } TC8_7;
typedef struct { u32 :16; u32 f:7; } TC16_7;
typedef struct { u32 f:3; } TC0_3;
typedef struct { u32 :8; u32 f:6; } TC8_6;
typedef struct { u32 :7; u32 f:1; } TC7_1;
typedef struct { u32 :15; u32 f:1; } TC15_1;
typedef struct { u32 :23; u32 f:1; } TC23_1;
typedef struct { u16 f:4; } TB0_4;
typedef struct { u16 :6; u16 f:1; } TB6_1;

#define RA8    (*(u8 *)0x027ffde8)
#define RA32   (*(u32 *)0x027ffde8)
#define RB16   (*(u16 *)0x027ffdea)
#define RBF(T) (((T *)0x027ffdea)->f)
#define RAF(T) (((T *)0x027ffde8)->f)
#define RCF(T) (((T *)0x027ffdec)->f)

void func_0206d0b8(u32 param_1, u32 param_2, s32 param_3)
{
    u32 *q;
    u32 uVar8;
    u32 t;
    u32 lo;
    void (*pcVar5)(u32, u32);
    void (*fp)(void);

    if (param_3 != 0) {
        t = data_02150f30[6];
        if (t != 0) data_02150f30[6] = 0;
        if (data_02150f30[0] != 0) data_02150f30[0] = 0;
        pcVar5 = (void (*)(u32, u32))data_02150f30[1];
        if (pcVar5 == NULL) return;
        t = data_02150f30[4];
        data_02150f30[1] = 0;
        pcVar5(6, t);
        return;
    }
    lo = param_2 & 0xff;
    if ((u8)((param_2 & 0x7f00) >> 8) == 0x30) {
        fp = (void (*)(void))data_02150f30[7];
        if (fp == NULL) return;
        fp();
        return;
    }
    if (lo == 0) {
        uVar8 = 0;
        switch (data_02150f30[5]) {
        case 0:
            q = (u32 *)data_02150f30[2];
            q[0] = func_0206d034(RA8);
            q[1] = func_0206d034(RAF(TA8_5));
            q[2] = func_0206d034(RAF(TA16_6));
            q[3] = RAF(TA24_3);
            break;
        case 1:
            q = (u32 *)data_02150f30[2];
            q[0] = func_0206d034(RCF(TC0_6));
            q[1] = func_0206d034(RCF(TC8_7));
            q[2] = func_0206d034(RCF(TC16_7));
            break;
        case 2:
            q = (u32 *)data_02150f30[2];
            q[0] = func_0206d034(RA32 & 0xff);
            q[1] = func_0206d034(RAF(TA8_5));
            q[2] = func_0206d034(RAF(TA16_6));
            q[3] = RAF(TA24_3);
            q = (u32 *)data_02150f30[3];
            q[0] = func_0206d034(RCF(TC0_6));
            q[1] = func_0206d034(RCF(TC8_7));
            q[2] = func_0206d034(RCF(TC16_7));
            break;
        case 3:
        case 4:
        case 5:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            break;
        case 6:
            q = (u32 *)data_02150f30[2];
            switch (RBF(TB0_4)) {
            case 4:
                *q = 1;
                break;
            default:
                *q = uVar8;
                break;
            }
            break;
        case 7:
            q = (u32 *)data_02150f30[2];
            if (RBF(TB6_1)) {
                *q = 1;
            } else {
                *q = uVar8;
            }
            break;
        case 8:
            q = (u32 *)data_02150f30[2];
            q[0] = RCF(TC0_3);
            q[1] = func_0206d034(RCF(TC8_6));
            q[2] = func_0206d034(RCF(TC16_7));
            q[3] = uVar8;
            if (RCF(TC7_1)) { t = q[3]; q[3] = t + 1; }
            if (RCF(TC15_1)) { t = q[3]; q[3] = t + 2; }
            if (RCF(TC23_1)) { t = q[3]; q[3] = t + 4; }
            break;
        case 9:
            t = data_02150f30[6];
            if (t == 0) {
                if (*(u32 *)data_02150f30[2] == 1) {
                    if (RBF(TB0_4) != 4) {
                        data_02150f30[6] = t + 1;
                        RB16 = (RB16 & ~15) | 4;
                        if (func_0206d7d8() == 0) {
                            data_02150f30[6] = uVar8;
                            uVar8 = 3;
                        }
                    }
                } else if (RBF(TB0_4) != 0) {
                    data_02150f30[6] = t + 1;
                    RB16 = RB16 & ~15;
                    if (func_0206d7d8() == 0) {
                        data_02150f30[6] = uVar8;
                        uVar8 = 3;
                    }
                }
            } else {
                data_02150f30[6] = uVar8;
            }
            break;
        case 10:
            t = data_02150f30[6];
            if (t == 0) {
                if (*(u32 *)data_02150f30[2] == 1) {
                    if (RBF(TB6_1) == 0) {
                        data_02150f30[6] = t + 1;
                        RB16 = RB16 | 0x40;
                        if (func_0206d7d8() == 0) {
                            data_02150f30[6] = uVar8;
                            uVar8 = 3;
                        }
                    }
                } else if (RBF(TB6_1) != 0) {
                    data_02150f30[6] = t + 1;
                    RB16 = RB16 & ~0x40;
                    if (func_0206d7d8() == 0) {
                        data_02150f30[6] = uVar8;
                        uVar8 = 3;
                    }
                }
            } else {
                data_02150f30[6] = uVar8;
            }
            break;
        default:
            data_02150f30[6] = 0;
            uVar8 = 4;
            break;
        }
    } else {
        data_02150f30[6] = 0;
        switch (lo) {
        case 1:
            uVar8 = 4;
            break;
        case 2:
            uVar8 = 5;
            break;
        case 3:
            uVar8 = 1;
            break;
        case 4:
        default:
            uVar8 = 6;
            break;
        }
    }
    if (data_02150f30[6] != 0) return;
    t = data_02150f30[0];
    if (t != 0) data_02150f30[0] = 0;
    pcVar5 = (void (*)(u32, u32))data_02150f30[1];
    if (pcVar5 == NULL) return;
    t = data_02150f30[4];
    data_02150f30[1] = 0;
    pcVar5(uVar8, t);
}
