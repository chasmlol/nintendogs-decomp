#include "ctx.h"

extern u8 *data_0215be48;
extern int data_02159468;
extern int func_020ab144(int a);
extern BOOL func_02103ea4(void);
extern void func_02112798(int a, int b, int c);
extern void func_021177ac(void *p);
extern void func_02117700(void *p, int v);

#define F(off) (*(s32 *)(obj + (off)))

void func_02103c34(u8 *obj)
{
    s32 r4 = 0;
    s32 v;
    s32 r6;
    s32 r2;

    if (F(0xc) != 0) {
        if (*(s32 *)(data_0215be48 + 0xb8) == 1) {
            return;
        }
        func_02112798(1, 26, 0);
        func_02112798(1, 27, 0);
        func_02112798(1, 28, 0);
        func_02112798(1, 30, 0);
        func_02112798(3, 30, 0);
        func_021177ac(obj + 288);
        func_021177ac(obj + 228);
        return;
    }
    v = r4;
    if (data_02159468 != 0) {
        v = func_020ab144(0);
    }
    switch (v) {
    case 0:
        r4 = 0;
        break;
    case 1:
        F(0x50) = 0;
        r4 = 1;
        break;
    case 2:
        r4 = 2;
        if (F(0x14) != 0) {
            F(0x50) = 1;
            if (F(0x54) == 0) {
                F(0x58) = 1;
            }
        } else {
            F(0x50) = 0;
        }
        break;
    }
    if (F(0x58) != 0) {
        if (func_02103ea4()) {
            F(0x58) = 0;
        }
    }
    r2 = 0;
    r6 = r2;
    if (r4 != 1) {
        if (r4 == 2) {
            r2 = 1;
        }
    } else {
        r6 = 1;
    }
    if (F(0x14) == 0) {
        r6 = 0;
        r2 = r6;
    }
    func_02112798(1, 26, r2);
    func_02112798(1, 27, r6);
    func_02112798(1, 28, F(0x50));
    F(0x54) = F(0x50);
    r4 = (F(0x14) == 0);
    if (F(0x13c) == 4) {
        func_02112798(1, 29, F(0x14));
    } else {
        func_02117700(obj + 288, F(0x14));
    }
    if (F(0x100) == 4) {
        func_02112798(3, 29, r4);
    } else {
        func_02117700(obj + 228, r4);
    }
    if (*(s32 *)(data_0215be48 + 0xb8) == 3) {
        func_02112798(1, 30, 0);
        func_02112798(3, 30, 0);
        return;
    }
    func_02112798(1, 30, F(0x14));
    func_02112798(3, 30, F(0x14) == 0);
}
