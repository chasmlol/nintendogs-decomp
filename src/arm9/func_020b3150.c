#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215942c;
extern u8 data_02159010[];
extern void func_020b38a0(void);
extern void func_020b3394(u8 *obj);
extern void func_02097b94(int a, int b, int c, int d, int e);
extern void func_02096c20(int a, int b, int c);
extern void func_02095a0c(void);
extern void func_02095d6c(int a, int b, int c, int d);
extern void func_020959ec(void);
extern void func_02097b68(void);
extern BOOL func_020d5aa0(void);
extern void func_020d6f98(void);

void func_020b3150(u8 *obj)
{
    s32 st = *(u16 *)(obj + 4);

    switch (st) {
    case 0:
        *(u16 *)(obj + 4) = 0x900;
        *(u16 *)(obj + 6) = 0;
        return;
    case 0x900:
        func_020b3394(obj);
        return;
    case 0x901:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            *(u16 *)(obj + 4) = 0x903;
            func_02097b94(0, 0x4b0, 0, (int)func_020b38a0, 0);
        }
        return;
    case 0x902:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            *(u16 *)(obj + 4) = 0x904;
            *(u16 *)(obj + 6) = 0;
            *(s32 *)(obj + 0x18) = 9;
        }
        return;
    case 0x903:
        if (*(s16 *)(data_02159060 + 108) == 2) {
            func_02096c20(0, 0, 0);
            func_02096c20(1, *(u16 *)(data_0215942c + 14), 0);
            func_02096c20(6, 0, 0);
            func_02095a0c();
            func_02095d6c(0, 0, 0, 1);
            func_02095d6c(1, *(u16 *)(data_0215942c + 14), 0, 1);
            func_02095d6c(6, 0, 0, 1);
            func_020959ec();
            *(u16 *)(obj + 4) = 0x904;
            *(u16 *)(obj + 6) = 0;
            *(s32 *)(obj + 0x18) = 12;
            func_02097b68();
        }
        return;
    case 0x904:
        *(s16 *)(obj + 6) = *(s16 *)(obj + 6) + 1;
        if (!func_020d5aa0() && *(s16 *)(obj + 6) < 180) {
            return;
        }
        *(u16 *)(obj + 4) = 1;
        *(s32 *)(obj + 0xc) = 1;
        if (*(s16 *)(data_02159010 + 2) == 0) {
            return;
        }
        func_020d6f98();
        return;
    }
    return;
}
