#include "ctx.h"
#pragma optimization_level 2

extern u8 data_00001d08[];
extern u8 data_02146544[];
extern u8 data_02146554[];
extern u8 data_02146564[];
extern u8 data_02146580[];
extern u8 data_02146590[];
extern u8 data_02133264[];
extern u8 data_02133270[];
extern u8 data_02133268[];
extern u8 data_0213326c[];
extern u8 data_02159030[];
extern u8 data_0213327c[];
extern u8 data_02133274[];
extern u8 data_0215be48[];
extern u8 data_021465dc[];
extern u8 data_021465a8[];
extern u8 data_021465c0[];
extern u8 data_021465d8[];

extern s32 func_01ffdb08(s32 a);
extern u8 *func_0202817c(void);
extern void func_0210ea40(s32 a);
extern u32 func_0210e968(s32 a, u8 *b);
extern void func_02113090(s32 a, u32 b);
extern void func_021130c4(s32 a, u32 b);
extern void func_02112ed0(s32 a, u32 b);
extern void func_02112e74(s32 a, u32 b);
extern void func_02101cf4(void);
extern void func_02101894(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_02101280(u32 a, u32 b);
extern u32 func_02090cac(u32 a, u32 b, u32 c);
extern void func_02101118(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020fc310(s32 a, u8 *b);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_020fc76c(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_020f88cc(u8 *param_1)
{
    u8 *r10;
    s32 i;
    u8 *r9p;
    u32 selv;
    u8 *arr[3];
    u8 *ptrB;
    s32 j;
    u8 *r8, *r7, *r6, *r5;
    u8 *b;
    u32 sp4;
    s32 sp8;
    u32 sp0c, sp10, sp14, sp18, sp1c, sp20, sp24, sp28, sp2c;
    u32 r4p, r11p;
    u8 *ptrA;
    u32 c10, c11, c4, t;
    u32 ret;
    u8 buf[12];

    func_01ffdb08((s16)*(s32 *)(param_1 + (u32)data_00001d08 + 4));
    b = func_0202817c();
    arr[0] = b + 2000;
    arr[1] = b + 0x7d8;
    arr[2] = b + 2016;
    *(u32 *)(param_1 + 8) = 0;
    *(u32 *)(param_1 + 0) = 0;
    *(u32 *)(param_1 + 4) = *(u32 *)(param_1 + 0);
    *(s32 *)(param_1 + 0x1d08) = -2;
    func_0210ea40(65);
    c4 = func_0210e968(65, data_02146544);
    c10 = func_0210e968(65, data_02146554);
    c11 = func_0210e968(65, data_02146564);
    sp4 = func_0210e968(65, data_02146580);
    t = func_0210e968(65, data_02146590);
    func_02113090(2, c4);
    func_021130c4(2, c10);
    func_02112ed0(2, c11);
    func_02112e74(2, t);
    func_02101cf4();

    i = 0;
    r8 = data_02133264;
    r7 = data_02133270;
    r6 = data_02133268;
    r5 = data_0213326c;
    sp24 = 0; sp1c = 0; sp20 = 0; sp0c = 0; sp10 = 0; sp14 = 0; sp18 = 0;
    do {
        func_02101894(sp0c, c11, c10, *r8, sp0c);
        func_02101894(sp10, c11, c10, *r7, sp10);
        func_02101280(sp14, *r8);
        func_02101280(sp18, *r7);
        ptrA = arr[i];
        selv = 0x586;
        switch (*(s16 *)ptrA) {
        case 1: selv = 0x57b; break;
        case 2: selv = 0x57c; break;
        case 3: selv = 0x57d; break;
        case 4: selv = 0x57e; break;
        case 5: selv = 0x57f; break;
        }
        ret = func_02090cac(*(u32 *)(*(u8 **)data_02159030 + 4), selv, sp1c);
        func_02101118(sp20, sp4, *r8, *r6, ret);
        if (*(s16 *)ptrA == 5 && *(s16 *)(ptrA + 4) > 1) {
            func_020fc310(*(s16 *)(ptrA + 4), buf);
            func_02101118(sp24, sp4, *r7, *r5, (u32)buf);
        }
        r8++;
        r7++;
        r6++;
        r5++;
        i++;
    } while (i < 3);

    r10 = data_0213327c;
    sp8 = 0;
    r4p = 0;
    r11p = 0;
    sp2c = 0;
    sp28 = 0;
    do {
        ptrB = arr[sp8];
        j = sp28;
        do {
            if (*(s16 *)ptrB != -1 && j + 1 == *(s16 *)(ptrB + 2)) {
                func_02112798(2, r10[j], 1);
            } else {
                func_02112798(2, r10[j], r4p);
            }
            j++;
        } while (j < 3);
        r9p = data_02133274 + (u32)sp8 * 2;
        j = sp2c;
        do {
            if (*(s16 *)ptrB != -1 && *(s16 *)ptrB == 5 && *(s16 *)(ptrB + 4) > 1) {
                func_02112798(2, r9p[0], 1);
            } else {
                func_02112798(2, r9p[0], r11p);
            }
            r9p++;
            j++;
        } while (j < 2);
        r10 += 3;
        sp8++;
    } while (sp8 < 3);
    *(u32 *)(*(u8 **)data_0215be48 + 0xc000 + 0x838) = 3;
    *(u32 *)(*(u8 **)data_0215be48 + 0xc000 + 0x83c) = 0;
    func_020fc76c(65, (u32)data_021465a8, (u32)data_021465c0, (u32)data_021465d8, (u32)data_021465dc);
}
