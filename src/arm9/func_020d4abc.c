#include "ctx.h"

extern u8 *data_021594d0;
extern u8 func_020d4d18[];
extern u8 func_020d4910[];
extern u8 func_020d4228[];
extern s32 func_020d6228(u8 *p);
extern void func_020d68c8(u8 *a, u16 *b);
extern u32 func_020d5e60(void);
extern s32 func_020d5e70(u8 *a, u32 b, u16 *c);
extern u32 func_020d5fa0(u32 a);
extern void func_020d5da4(u32 a);
extern u8 *func_020d6cc0(void);
extern u32 func_020d5f30(void);
extern s32 func_020d64d4(u8 *a, u16 *b);

void func_020d4abc(u8 *param_1)
{
    u16 arr[4];
    s32 iVar5;
    u32 uVar7;
    u32 uVar3;
    u32 r3;
    u8 *q;

    iVar5 = func_020d6228(param_1);
    if (iVar5 == 0) {
        return;
    }
    if (*(void (**)(u8 *))(data_021594d0 + 0x18) != 0) {
        (*(void (**)(u8 *))(data_021594d0 + 0x18))(param_1);
    }
    iVar5 = *(s32 *)(data_021594d0 + 0x24);
    if (iVar5 == 1) goto S1;
    if (iVar5 == 2) goto S2;
    if (iVar5 == 3) goto S3;
    return;

S1:
    func_020d68c8(func_020d4d18, arr);
    return;

S2:
    *(u16 *)(data_021594d0 + 0x3c) = 0;
    *(u16 *)(data_021594d0 + 0x3e) = 101;
    uVar7 = 1;
    uVar3 = func_020d5e60();
    if (uVar3 == 0x8000) {
        r3 = 3;
        goto L100;
    }
    if (uVar3 == 0) {
        r3 = 21;
        goto L100;
    }
    if ((uVar3 & 1) == 0) {
        do {
            uVar7 = (u16)(uVar7 + 1);
            if (uVar7 > 16) {
                r3 = 22;
                goto L100;
            }
        } while (((1u << (uVar7 - 1)) & uVar3) == 0);
    }
    func_020d5e70(func_020d4910, uVar7, arr + 2);
    r3 = arr[2];

L100:
    if (r3 != 22) {
        goto L14c;
    }
    if (*(s32 *)(data_021594d0 + 0x2c) == 1) {
        return;
    }
    *(s32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 40) = (u16)r3;
    *(u16 *)(data_021594d0 + 42) = 30;
    return;

L14c:
    if (r3 == 2) {
        return;
    }
    if (*(s32 *)(data_021594d0 + 0x2c) == 1) {
        return;
    }
    *(s32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 40) = (u16)r3;
    *(u16 *)(data_021594d0 + 42) = 30;
    return;

S3:
    *(u16 *)(data_021594d0 + 0x3c) = (u16)func_020d5fa0(*(u16 *)(data_021594d0 + 0x3c));
    func_020d5da4(*(u16 *)(data_021594d0 + 0x3c));
    if (*(s32 *)(data_021594d0 + 0x40) == 1) {
        q = func_020d6cc0();
        *(u16 *)(q + 6) = (u16)func_020d5f30();
    }
    iVar5 = func_020d64d4(func_020d4228, arr + 1);
    if (iVar5 != 0) {
        return;
    }
    r3 = arr[1];
    if (*(s32 *)(data_021594d0 + 0x2c) == 1) {
        return;
    }
    *(s32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 40) = (u16)r3;
    *(u16 *)(data_021594d0 + 42) = 10;
    return;
}
