#include "ctx.h"

extern u8 *data_021594d0;
extern void func_020d404c(void);
extern void func_020d4228(u8 *p);
extern u32 func_020d6484(u8 *p);
extern void func_020d6460(u32 a, u16 *b);
extern u8 *func_020d6cb4(void);
extern u32 func_02080e64(u8 *p);
extern u32 func_02080f74(u32 a, u8 *b, u16 *c, u32 d, u16 *e);
extern u16 func_020d5fa0(u32 a);
extern void func_020d5da4(u32 a);
extern u8 *func_020d6cc0(void);
extern u32 func_020d5f30(void);
extern u32 func_020d64d4(u32 a, u16 *b);
extern u32 func_020d5d78(u32 a);
extern void func_020800d4(u8 *p, u32 n);

void func_020d4228(u8 *param_1)
{
    u16 hb[12];
    u8 *q;
    s32 r;
    s32 flag;
    u16 hv;

    if (func_020d6484(param_1) == 0) {
        return;
    }
    if (*(u32 *)(data_021594d0 + 0x24) == 1) {
        goto ST1;
    }
    if (*(u32 *)(data_021594d0 + 0x24) == 2) {
        goto ST2;
    }
    if (*(u32 *)(data_021594d0 + 0x24) == 3) {
        goto ST3;
    }
    return;
ST1:
    if (*(s16 *)(data_021594d0 + 0x30) == 0) {
        *(s16 *)(data_021594d0 + 0x30) = 1;
    }
    return;
ST2:
    func_020d6460((u32)func_020d404c, &hb[0]);
    return;
ST3:
    if (*(u16 *)(param_1 + 8) == 4) {
        goto S4;
    }
    if (*(u16 *)(param_1 + 8) != 5) {
        return;
    }
    q = func_020d6cb4();
    if (func_02080e64(q) != 0) {
        if (*(u32 *)(data_021594d0 + 0x1c) != 0) {
            ((void (*)(u8 *))*(u32 *)(data_021594d0 + 0x1c))(func_020d6cb4());
        }
    }
    q = func_020d6cb4();
    r = func_02080f74(0x00400058, q, (u16 *)(data_021594d0 + 0x58), 5, &hb[7]);
    if (r == 0) {
        *(u32 *)(data_021594d0 + 0x54) = 1;
        func_020d6460((u32)func_020d404c, &hb[1]);
        goto L294;
    }
    if (*(s16 *)(data_021594d0 + 0x50) > 0) {
        goto L17c;
    }
    if (func_020d5d78(0x00400058) == 0) {
        goto L17c;
    }
    if ((*(u8 *)(func_020d6cb4() + 0x4b) & 1) == 0) {
        goto L17c;
    }
    *(u32 *)(data_021594d0 + 0x54) = 0;
    func_020d6460((u32)func_020d404c, &hb[2]);
    goto L294;
L17c:
    if (*(u32 *)(data_021594d0 + 0x40) == 0) {
        goto L1ec;
    }
    if (*(s16 *)(data_021594d0 + 0x50) > 0) {
        goto L1ec;
    }
    *(s16 *)(data_021594d0 + 0x48) = *(s16 *)(data_021594d0 + 0x48) + 1;
    if (*(s16 *)(data_021594d0 + 0x48) <= *(s16 *)(data_021594d0 + 0x4a)) {
        goto L1ec;
    }
    *(s16 *)(data_021594d0 + 0x48) = 0;
    *(u32 *)(data_021594d0 + 0x24) = 2;
    *(u32 *)(data_021594d0 + 0x54) = 0;
    func_020d6460((u32)func_020d404c, &hb[5]);
    flag = 1;
    goto L1f0;
L1ec:
    flag = 0;
L1f0:
    if (flag != 0) {
        return;
    }
    *(u16 *)(data_021594d0 + 0x3c) = func_020d5fa0(*(u16 *)(data_021594d0 + 0x3c));
    func_020d5da4(*(u16 *)(data_021594d0 + 0x3c));
    if (*(u32 *)(data_021594d0 + 0x40) == 1) {
        q = func_020d6cc0();
        *(u16 *)(q + 6) = (u16)func_020d5f30();
    }
    if (func_020d64d4((u32)func_020d4228, &hb[3]) != 0) {
        goto L294;
    }
    hv = hb[3];
    if (*(u32 *)(data_021594d0 + 0x2c) == 1) {
        goto L294;
    }
    *(u32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 0x28) = hv;
    *(u16 *)(data_021594d0 + 0x2a) = 10;
L294:
    func_020800d4(func_020d6cb4(), 0xc0);
    return;
S4:
    if (*(u32 *)(data_021594d0 + 0x40) == 0) {
        goto L314;
    }
    if (*(s16 *)(data_021594d0 + 0x50) > 0) {
        goto L314;
    }
    *(s16 *)(data_021594d0 + 0x48) = *(s16 *)(data_021594d0 + 0x48) + 1;
    if (*(s16 *)(data_021594d0 + 0x48) <= *(s16 *)(data_021594d0 + 0x4a)) {
        goto L314;
    }
    *(s16 *)(data_021594d0 + 0x48) = 0;
    *(u32 *)(data_021594d0 + 0x24) = 2;
    *(u32 *)(data_021594d0 + 0x54) = 0;
    func_020d6460((u32)func_020d404c, &hb[6]);
    flag = 1;
    goto L318;
L314:
    flag = 0;
L318:
    if (flag != 0) {
        return;
    }
    *(u16 *)(data_021594d0 + 0x3c) = func_020d5fa0(*(u16 *)(data_021594d0 + 0x3c));
    func_020d5da4(*(u16 *)(data_021594d0 + 0x3c));
    if (*(u32 *)(data_021594d0 + 0x40) == 1) {
        q = func_020d6cc0();
        *(u16 *)(q + 6) = (u16)func_020d5f30();
    }
    if (func_020d64d4((u32)func_020d4228, &hb[4]) != 0) {
        return;
    }
    hv = hb[4];
    if (*(u32 *)(data_021594d0 + 0x2c) == 1) {
        return;
    }
    *(u32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 0x28) = hv;
    *(u16 *)(data_021594d0 + 0x2a) = 10;
}
