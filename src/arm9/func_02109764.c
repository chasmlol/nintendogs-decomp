#include "ctx.h"

extern u32 data_0215be48;
extern u8 data_02147f28[];
extern u8 data_02147f38[];
extern u8 data_02147f48[];
extern u8 data_02147f5c[];
extern u8 data_02147f6c[];
extern u8 data_02147f7c[];
extern u8 data_02147f8c[];
extern u8 data_02147f90[];

extern void func_0210ea40(s32 a);
extern void func_0206c7bc(s32 a, void *b, s32 c);
extern s32 func_0210e968(s32 a, void *b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_02101cf4(void);
extern s32 func_02112e34(s32 a);
extern s32 func_02112e54(s32 a);
extern void func_02101894(s32 a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_02101764(s32 a, s32 b);
extern void func_02101be4(s32 a, s32 b);
extern void func_021017d4(s32 a, s32 b, s32 c);
extern void func_020fc76c(s32 a, void *b, void *c, void *d, void *e);
extern void func_0210a484(void *p);
extern void func_020fc8b0(s32 a, s32 b, s32 c);
extern void func_021088ac(void);
extern void func_0210606c(void *p);
extern void func_021045fc(void *p, s32 v);
extern void func_02109108(s32 a);

#define GP (*(u8 **)&data_0215be48)

void func_02109764(u8 *param_1)
{
    int r8v;
    int r7v;
    u8 *r6;
    s32 r5v;
    s32 r4v;
    vu16 t1;
    vu16 t2;
    u16 flag;

    r6 = 0x1c48 + param_1;
    if (*(s32 *)(0xa8 + GP) == 6) {
        *(s32 *)((u8 *)(GP + 0x4000) + 0x83c) = 0x2000;
    }
    func_0210ea40(9);
    *(s32 *)(param_1 + 0x0) = 0;
    *(s32 *)(param_1 + 0x8) = 0;
    *(s32 *)(param_1 + 0x230) = 0;
    *(s32 *)(param_1 + 0x234) = 0;
    *(s32 *)(param_1 + 0x238) = 0;
    *(s32 *)(param_1 + 0x240) = 0;
    *(s32 *)(param_1 + 0x244) = 0;
    *(s32 *)(param_1 + 0x248) = 0;
    *(s32 *)(param_1 + 0x24c) = 0;
    *(s32 *)(param_1 + 0x250) = 0;
    *(s32 *)(0x23c + param_1) = 0;
    t1 = 0;
    func_0206c7bc(t1, param_1 + 596, 20);
    t2 = 0;
    func_0206c7bc(t2, param_1 + 616, 8);
    flag = 0;
    if (*(s32 *)(0xc + r6) != *(s32 *)(r6 + 0x8)) {
        flag = 1;
    }
    if (0 != flag) {
        func_0210e968(9, data_02147f28);
        asm { mov r8v, r0 }
        func_0210e968(9, data_02147f38);
        asm { mov r7v, r0 }
        r5v = func_0210e968(9, data_02147f48);
        r4v = func_0210e968(9, data_02147f5c);
        func_02113090(2, r8v);
        func_021130c4(2, r7v);
        func_02112ed0(2, r5v);
        func_02112e74(2, r4v);
    }
    func_02112798(2, 3, 0);
    func_02112798(2, 4, 0);
    func_02101cf4();
    r4v = func_02112e34(2);
    r8v = func_02112e54(2);
    func_02101894(0, r4v, r8v, 4, 0);
    r4v = func_02101764(0, 4);
    func_02101be4(r4v, 0);
    func_021017d4(0, r4v, 14);
    flag = 0;
    if (*(s32 *)(r6 + 0xc) != *(s32 *)(0x8 + r6)) {
        flag = 1;
    }
    if (0 != flag) {
        *(s32 *)(GP + 0xc838) = 1;
        *(s32 *)(GP + 0xc83c) = 1;
        func_020fc76c(9, data_02147f6c, data_02147f7c, data_02147f8c, data_02147f90);
    }
    r8v = *(s32 *)(param_1 + 8);
    r7v = 0;
    do {
        func_02112798(2, (u16)(r7v + 5), 0);
        r7v += 1;
    } while (2 > r7v);
    switch (r8v) {
    case 1:
        func_02112798(2, 5, 1);
        break;
    case 2:
        func_02112798(2, 6, 1);
        break;
    }
    func_0210a484(param_1);
    switch (*(s32 *)(r6 + 0x8)) {
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 14:
    case 15:
        func_020fc8b0(2, 2, 4);
        break;
    case 16:
    case 17:
    case 18:
        func_020fc8b0(2, 2, 6);
        break;
    case 19:
        func_020fc8b0(2, 2, 5);
        break;
    case 20:
        func_021088ac();
        break;
    default:
        break;
    }
    func_0210606c(param_1 + 12);
    func_021045fc(param_1, *(s32 *)(r6 + 0x8));
    *(s32 *)(r6 + 0x8) = 0;
    func_02109108(0);
}
