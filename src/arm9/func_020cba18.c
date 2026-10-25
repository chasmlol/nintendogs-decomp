#include "ctx.h"

typedef struct { s32 w[3]; } T3;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u32 data_02142d74;
extern u32 data_02142d78;
extern u32 data_02142d7c;
extern u32 data_02142d68;
extern u32 data_02142d6c;
extern u32 data_02142d70;

extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

void func_020cba18(s32 *p1, s32 *p2, s32 p3)
{
    s32 k3;
    s32 iv3;
    s32 iv4;
    s32 iv6;
    s16 sVar2;
    s32 k2;
    s32 k1;

    iv3 = func_01ffdb08(p3);
    if (func_02027468(iv3) == 0) {
        k1 = data_02142d74;
        k2 = data_02142d78;
        k3 = data_02142d7c;
        iv3 = func_01ffdb08(p3);
        *(T3 *)p1 = *(T3 *)p2;
        p1[1] = k3;
        func_020c8e4c(iv3, p1 + 3);
        iv4 = func_02028130(iv3);
        p1[4] = FX_Mul(k2, iv4);
        p1[6] = 0;
        p1[7] = 0x1000;
        p1[8] = 0;
        iv3 = func_02028130(iv3);
        iv4 = func_020678b4(p1 + 3, p1);
        iv6 = FX_Mul(k1, iv3);
        iv3 = func_02067898(iv6, iv4);
        sVar2 = func_0206824c(iv3);
        p1[9] = (s32)((((s64)(s32)sVar2 * 0x1680000) + 0x80000) >> 20);
        return;
    }
    if (func_02027468(iv3) != 1) {
        return;
    }
    k2 = data_02142d68;
    k1 = data_02142d6c;
    k3 = data_02142d70;
    iv3 = func_01ffdb08(p3);
    *(T3 *)p1 = *(T3 *)p2;
    p1[1] = k3;
    func_020c8e4c(iv3, p1 + 3);
    iv4 = func_02028130(iv3);
    p1[4] = FX_Mul(k1, iv4);
    p1[6] = 0;
    p1[7] = 0x1000;
    p1[8] = 0;
    iv3 = func_02028130(iv3);
    iv4 = func_020678b4(p1 + 3, p1);
    iv6 = FX_Mul(k2, iv3);
    iv3 = func_02067898(iv6, iv4);
    sVar2 = func_0206824c(iv3);
    p1[9] = (s32)((((s64)(s32)sVar2 * 0x1680000) + 0x80000) >> 20);
}
