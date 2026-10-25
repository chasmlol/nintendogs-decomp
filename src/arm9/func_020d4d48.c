#include "ctx.h"

extern u8 *data_021594d0;
extern void func_020d4d18(void);
extern void func_020d4d14(void);
extern void func_020d4910(void);
extern void func_020d4228(void);

extern s32 func_020d68ec(u8 *p);
extern void func_020d68c8(void *fn, u16 *b);
extern s32 func_02064a34(void *fn);
extern u16 func_020d5e60(void);
extern void func_020d5e70(void *fn, u32 r, u16 *p);
extern u16 func_020d5fa0(u32 v);
extern void func_020d5da4(u32 v);
extern u8 *func_020d6cc0(void);
extern u16 func_020d5f30(void);
extern s32 func_020d64d4(void *fn, u16 *p);

#define STORE_STATE(CODE, TAIL)                                                  \
    {                                                                            \
        if (*(s32 *)(data_021594d0 + 0x2c) != 1) {                               \
            *(s32 *)(data_021594d0 + 0x2c) = 1;                                  \
            *(u16 *)(data_021594d0 + 0x28) = (u16)(CODE);                        \
            *(u16 *)(data_021594d0 + 0x2a) = (TAIL);                             \
        }                                                                        \
    }

void func_020d4d48(u8 *param_1)
{
    u16 buf[4];
    s32 v;
    u32 uVar7;
    u16 code;
    u16 vv;
    u16 hv;
    s32 bflag;

    if (func_020d68ec(param_1) == 0) {
        return;
    }
    switch (*(s32 *)(data_021594d0 + 0x24)) {
    case 1:
        func_020d68c8(func_020d4d18, buf);
        return;
    case 2:
        v = func_02064a34(func_020d4d14);
        if (v != 0) {
            hv = (u16)v;
            STORE_STATE(hv, 128);
            bflag = 0;
        } else {
            bflag = 1;
        }
        if (bflag == 0) {
            return;
        }
        *(u16 *)(data_021594d0 + 0x3c) = 0;
        uVar7 = 1;
        *(u16 *)(data_021594d0 + 0x3e) = 101;
        vv = func_020d5e60();
        if (vv == 0x8000) {
            code = 3;
        } else if (vv == 0) {
            code = 21;
        } else {
            if ((vv & 1) == 0) {
                do {
                    uVar7 = (u16)(uVar7 + 1);
                    if (uVar7 > 16) {
                        code = 22;
                        goto store_b;
                    }
                } while (((1u << (uVar7 - 1)) & vv) == 0);
            }
            func_020d5e70(func_020d4910, uVar7, &buf[2]);
            code = buf[2];
        }
    store_b:
        if (code != 22) {
            goto L198;
        }
        STORE_STATE(code, 30);
        return;
    L198:
        if (code == 2) {
            return;
        }
        STORE_STATE(code, 30);
        return;
    case 3:
        v = func_02064a34(func_020d4d14);
        if (v != 0) {
            hv = (u16)v;
            STORE_STATE(hv, 128);
            bflag = 0;
        } else {
            bflag = 1;
        }
        if (bflag == 0) {
            return;
        }
        *(u16 *)(data_021594d0 + 0x3c) = func_020d5fa0(*(u16 *)(data_021594d0 + 0x3c));
        func_020d5da4(*(u16 *)(data_021594d0 + 0x3c));
        if (*(s32 *)(data_021594d0 + 0x40) == 1) {
            u8 *t = func_020d6cc0();
            *(u16 *)(t + 6) = func_020d5f30();
        }
        if (func_020d64d4(func_020d4228, &buf[1]) != 0) {
            return;
        }
        hv = buf[1];
        STORE_STATE(hv, 10);
        return;
    default:
        return;
    }
}
