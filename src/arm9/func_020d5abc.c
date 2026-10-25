#include "ctx.h"

extern s32 data_021594e8;
extern u16 data_021594dc;
extern s32 data_021594ec;

extern void func_020d5c18(void);
extern void func_020d5c80(void);
extern void func_020d5c4c(void);

extern s32 func_02064334(s32 a, u32 b, s32 c, u32 d);
extern s32 func_020650a0(u32 a, u32 b, s32 c, u32 d);
extern s32 func_02064f68(u32 a, u32 b, s32 c, u32 d);
extern s32 func_02064fb0(u32 a, u32 b, s32 c, u32 d);

u32 func_020d5abc(u32 p0, u32 p1, u32 p2, u32 p4)
{
    u32 st;
    s32 r;

    st = data_021594e8;
    if (st != 0) {
        data_021594dc = 1;
        p1 = 1;
    }
    if (data_021594ec == 1) {
        return 0;
    }
    switch (st) {
    case 0:
        return 1;
    case 1:
        r = func_02064334(data_021594ec, p1, st, p4);
        if (r != 0) {
            goto ret0;
        }
        data_021594dc = 0;
        data_021594ec = 0;
        data_021594e8 = 0;
        return 1;
    case 2:
        r = func_020650a0((u32)func_020d5c18, p1, st, p4);
        if (2 != r) {
            goto ret0;
        }
        data_021594ec = 1;
        return 1;
    case 3:
        r = func_02064f68((u32)func_020d5c80, p1, st, p4);
        if (r != 2) {
            goto ret0;
        }
        data_021594ec = 1;
        return 1;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
        r = func_02064fb0((u32)func_020d5c4c, p1, st, p4);
        if (2 == r) {
            data_021594ec = 1;
            return 1;
        }
        goto ret0;
    default:
        goto ret0;
    }
ret0:
    return 0;
}
