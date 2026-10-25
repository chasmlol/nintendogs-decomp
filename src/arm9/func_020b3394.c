#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_02159424;
extern u8 *data_02159068;
extern void func_020b38a0(void);
extern s32 func_020d7dfc(void);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern s32 func_020d5abc(u8 *p, s32 a, s32 b, s32 c);
extern void func_020942c0(s16 *p, s32 v);
extern void func_020b369c(u8 *p);
extern void func_0209a5d8(s32 a, s32 b);
extern void func_0209f59c(s32 a);
extern void func_0209a710(void);

void func_020b3394(u8 *p1, s32 p2, s32 p3, s32 p4)
{
    s16 s;

    switch (*(s16 *)(p1 + 32)) {
    case 0:
        *(s16 *)(p1 + 6) = *(s16 *)(p1 + 6) + 1;
        if (!func_020d7dfc()) {
            return;
        }
        if (*(s16 *)(p1 + 6) < 20) {
            return;
        }
        *(s16 *)(p1 + 6) = 0;
        *(s16 *)(p1 + 32) = 1;
        func_02097b94(9, 0x27d8, 0, (int)func_020b38a0, 0);
        return;
    case 1:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        s = *(s16 *)(data_02159060 + 0x9a);
        if (s == 0) {
            goto c1a;
        }
        if (s == 1) {
            goto c1b;
        }
        return;
    c1a:
        *(s16 *)(p1 + 32) = 4;
        func_02097b94(9, 0x27da, 0, (int)func_020b38a0, 0);
        func_0209a5d8(*(s32 *)(data_02159424 + 0x18), 0x74f8);
        func_0209f59c(1);
        return;
    c1b:
        *(s16 *)(p1 + 32) = 2;
        func_02097b94(9, 0x27d9, 0, (int)func_020b38a0, 0);
        return;
    case 2:
        if (func_020d5abc(p1, *(s16 *)(p1 + 32), p3, p4) != 0) {
            *(s16 *)(p1 + 32) = 3;
        }
        return;
    case 3:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        *(s16 *)(p1 + 4) = 0x904;
        *(s16 *)(p1 + 6) = 0;
        *(s32 *)(p1 + 0x18) = 9;
        {
            u8 *q = *(u8 **)(p1 + 0x1c);
            u8 *qa = q + 8;
            if (*(s16 *)(q + 8) == -1) {
                return;
            }
            func_020942c0((s16 *)qa, 1);
        }
        return;
    case 4:
        if (((s16 *)data_02159068)[2] != 0) {
            *(s16 *)(p1 + 32) = 5;
            return;
        }
        if (*(s16 *)data_02159068 == 4) {
            *(s16 *)(p1 + 32) = 2;
            func_02097b94(9, 0x27d9, 0, (int)func_020b38a0, 0);
            return;
        }
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        if (*(s16 *)(data_02159060 + 0x9a) < 0) {
            return;
        }
        func_0209a710();
        return;
    case 5:
        if (*(s16 *)data_02159068 != 3) {
            return;
        }
        if (*(s16 *)(*(u8 **)(data_02159424 + 0x1c) + 0x74f0) != 2000) {
            func_020b369c(p1);
            return;
        }
        *(s16 *)(p1 + 4) = 0x902;
        *(s16 *)(p1 + 6) = 0;
        func_02097b94(9, 0x27d9, 0, (int)func_020b38a0, 0);
        goto Lend;
    default:
        goto Lend;
    }
Lend:
    return;
}
