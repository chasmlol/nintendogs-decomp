#include "ctx.h"

#define FX_Mul(a, b) ((s32)((((s64)(a) * (s64)(b)) + 0x800) >> 12))

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} T3;

extern s32 data_02142e00;
extern s32 data_02142e04;
extern s32 data_02142e08;
extern s32 data_02142df4;
extern s32 data_02142df8;
extern s32 data_02142dfc;

extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s32 func_0206824c(s32 a);

void func_020cc6f0(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 i0;
    s32 i1;
    s32 i4;
    s32 i5;
    s32 sv;
    s64 t;

    i0 = func_01ffdb08(param_3);
    if (func_02027468(i0) == 0) {
        s32 b;
        s32 a;
        s32 c;

        a = data_02142e00;
        b = data_02142e04;
        c = data_02142e08;
        i1 = func_01ffdb08(param_3);
        *(T3 *)param_1 = *(T3 *)param_2;
        param_1[1] = c;
        func_020c8e4c(i1, param_1 + 3);
        i4 = func_02028130(i1);
        param_1[4] = FX_Mul(b, i4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        i5 = func_02028130(i1);
        i4 = func_020678b4(param_1 + 3, param_1);
        i5 = func_02067898(FX_Mul(a, i5), i4);
        sv = func_0206824c(i5);
        t = (s64)sv * 0x1680000;
        param_1[9] = (s32)((t + 0x80000) >> 20);
        return;
    }
    if (func_02027468(i0) == 1) {
        s32 b;
        s32 a;
        s32 c;

        a = data_02142df4;
        b = data_02142df8;
        c = data_02142dfc;
        i1 = func_01ffdb08(param_3);
        *(T3 *)param_1 = *(T3 *)param_2;
        param_1[1] = c;
        func_020c8e4c(i1, param_1 + 3);
        i4 = func_02028130(i1);
        param_1[4] = FX_Mul(b, i4);
        param_1[6] = 0;
        param_1[7] = 0x1000;
        param_1[8] = 0;
        i5 = func_02028130(i1);
        i4 = func_020678b4(param_1 + 3, param_1);
        i5 = func_02067898(FX_Mul(a, i5), i4);
        sv = func_0206824c(i5);
        t = (s64)sv * 0x1680000;
        param_1[9] = (s32)((t + 0x80000) >> 20);
    }
}
