#include "ctx.h"

extern void func_0206c9b8(u16 *a, u8 *b, s32 c);
extern s32 func_0206fbf0(void);
extern void func_0206fd1c(s32 a);
extern void func_0206fd2c(s32 a);
extern void func_0206e668(s32 *p, s32 a, s32 b, s32 c);
extern void func_0206e58c(s32 *p, s32 a, s32 b);
extern s32 func_0206e8e8(u8 *a, s32 b);
extern s32 func_0206e788(u8 *a, s32 b, s32 c);
extern void func_0206e8b8(u8 *a, s32 b);

s32 func_0206dfc4(s32 *param_1, u32 param_2, u16 *param_3, s32 param_4)
{
    s32 a[15];
    s32 count;
    s32 st;
    s32 v;
    s32 w;
    u16 hv;
    u8 *q;
    u16 *pu;
    s32 *dummy;

    dummy = a;
    a[0] = param_4;
    st = 1;
    q = (u8 *)param_1 + 468 + param_2 * 104;
    a[1] = (s32)((u8 *)param_1 + 504 + param_2 * 104);
    count = 0;
    pu = param_3;
    *q = 1;
    if (a[0] == 0) {
        return count;
    }
    if (a[0] <= 0) {
        goto fin;
    }
    a[14] = 15;
    a[6] = 3;
    a[13] = 8;
    a[8] = 5;
    a[12] = 9;
    a[10] = 7;
    a[4] = 1;
    a[5] = 0;
    a[3] = 0;
    a[7] = 1;
    a[11] = 1;
    a[2] = 1;
    a[9] = 10;

    do {
        switch (st) {
        case 1:
            func_0206c9b8(pu, q + 1, a[2]);
            pu = (u16 *)((u8 *)pu + 1);
            count += 1;
            st = 2;
            break;
        case 2:
            func_0206c9b8(pu, q + 8, 2);
            pu += 1;
            count += 2;
            hv = *(u16 *)(q + 8);
            v = func_0206fbf0();
            if (v == -1) {
                w = a[3];
            } else {
                v = func_0206fbf0();
                if ((hv & (a[4] << v)) != 0) {
                    w = a[4];
                } else {
                    w = a[5];
                }
            }
            if (w == 0) {
                return count;
            }
            st = a[6];
            break;
        case 3:
            func_0206c9b8(pu, q + 2, a[7]);
            pu = (u16 *)((u8 *)pu + 1);
            count += 1;
            v = *(u8 *)(q + 1);
            switch (v) {
            case 1:
                return count;
            case 2:
                st = a[8];
                goto next;
            case 3:
                st = 4;
                goto next;
            case 11:
                if (param_1[0] == 10) {
                    func_0206e58c(param_1, v, param_2);
                }
                return count;
            case 10:
                st = a[9];
                goto next;
            default:
                break;
            }
            st = a[10];
            break;
        case 10:
            func_0206c9b8(pu, q + 13, a[11]);
            pu = (u16 *)((u8 *)pu + 1);
            count += 1;
            st = a[12];
            break;
        case 9:
            ((s32 *)q)[8] = (s32)pu;
            v = *(u8 *)(q + 1);
            func_0206e668(param_1, v, param_2, 0);
            *q = 2;
            return count + 9;
        case 4:
            func_0206c9b8(pu, q + 10, 2);
            pu += 1;
            count += 2;
            if (*(u8 *)(q + 1) == 3) {
                st = a[8];
            }
            break;
        case 5:
            func_0206c9b8(pu, q + 6, 2);
            func_0206c9b8(pu + 1, q + 4, 2);
            if (func_0206fbf0() != 0) {
                func_0206fd1c(*(s16 *)(q + 4));
                func_0206fd2c(*(s16 *)(q + 6));
            }
            v = *(u8 *)(q + 1);
            switch (v) {
            case 2:
                func_0206e668(param_1, v, param_2, 0);
                *q = 2;
                return count + 4;
            case 3:
                if (param_1[0] == 2) {
                    func_0206e58c(param_1, v, param_2);
                }
                return count + 4;
            default:
                func_0206e668(param_1, 15, param_2, 3);
                return count + 4;
            }
        case 7:
            func_0206c9b8(pu, q + 16, 4);
            pu += 2;
            count += 4;
            v = *(u8 *)(q + 1);
            switch (v) {
            case 8:
                func_0206e668(param_1, v, param_2, 0);
                *q = 2;
                return count;
            case 9:
                if (param_1[0] == 4) {
                    if (param_1[5] == ((s32 *)q)[4]) {
                        func_0206e58c(param_1, 5, param_2);
                    }
                } else if (param_1[0] == 6) {
                    if (param_1[5] == ((s32 *)q)[4]) {
                        func_0206e58c(param_1, 7, param_2);
                    }
                }
                return count;
            case 4:
            case 5:
            case 6:
            case 7:
                st = a[13];
                goto next;
            default:
                break;
            }
            func_0206e668(param_1, a[14], param_2, a[6]);
            break;
        case 8:
            func_0206c9b8(pu, q + 20, 4);
            pu += 2;
            count += 4;
            v = *(u8 *)(q + 1);
            switch (v) {
            case 4:
            case 6:
                *q = 2;
                return count;
            case 5:
            case 7:
                ((s32 *)q)[8] = (s32)pu;
                if (param_1[0] == 4 || param_1[0] == 6) {
                    if (((s32 *)q)[4] == param_1[5]) {
                        if ((*(u16 *)((u8 *)param_1 + 8) & (u16)(1u << param_2)) != 0) {
                            if (func_0206e8e8((u8 *)a[1], ((s32 *)q)[5]) == 0) {
                                if (func_0206e788((u8 *)a[1], ((s32 *)q)[5], ((s32 *)q)[8]) == 1) {
                                    func_0206e8b8((u8 *)a[1], ((s32 *)q)[5]);
                                } else {
                                    func_0206e668(param_1, 15, param_2, 6);
                                }
                            }
                        }
                    }
                }
                return count;
            default:
                break;
            }
            func_0206e668(param_1, a[14], param_2, a[6]);
            break;
        default:
        case 0:
        case 6:
            func_0206e668(param_1, a[14], param_2, 4);
            break;
        }
    next: ;
    } while (count < a[0]);
fin:
    func_0206e668(param_1, 15, param_2, 5);
    return count;
}
