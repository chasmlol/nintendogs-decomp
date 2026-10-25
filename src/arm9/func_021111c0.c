#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];

extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_01ffdb08(s32 a);
extern s32 func_021179b0(u8 *a, s32 b, s32 c);
extern void func_02108e24(s32 a);
extern void func_0210446c(void);

void func_021111c0(u8 *p)
{
    u8 *r4;
    u8 *base;
    s32 a, b, r;

    base = data_0215be48;
    base += 0x4000;
    r4 = p + 0x1c84;
    if (*(u32 *)(base + 0x860) == 0) {
        return;
    }
    if (*(s16 *)(r4 + 4) != -1) {
        return;
    }
    if (*(u32 *)r4 == 0) {
        return;
    }
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        return;
    }
    a = (s16)(s32)*(u8 *)data_0214f004;
    b = (s16)(s32)data_0214f004[1];
    r = func_02112320(2, a, b);
    switch (r) {
    case 0:
        if (func_01ffdb08(0) == 0) {
            return;
        }
        if (func_021179b0(p + 4, a, b) == 0) {
            return;
        }
        func_02108e24(0);
        *(u32 *)r4 = 0;
        func_0210446c();
        return;
    case 1:
        if (func_01ffdb08(1) == 0) {
            return;
        }
        if (func_021179b0(p + 64, a, b) == 0) {
            return;
        }
        func_02108e24(0);
        *(u32 *)r4 = 0;
        func_0210446c();
        return;
    case 2:
        if (func_01ffdb08(2) == 0) {
            return;
        }
        if (func_021179b0(p + 124, a, b) == 0) {
            return;
        }
        func_02108e24(0);
        *(u32 *)r4 = 0;
        func_0210446c();
        return;
    default:
        *(s16 *)(r4 + 4) = -1;
        return;
    }
}
