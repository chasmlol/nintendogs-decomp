#include "ctx.h"

extern s32 data_02142de8[];
extern s32 data_02142dec[];
extern s32 data_02142df0[];
extern s32 data_02142ddc[];
extern s32 data_02142de0[];
extern s32 data_02142de4[];
extern s32 func_01ffdb08(s32 a);
extern s32 func_02027468(s32 a);
extern void func_020c8e4c(s32 a, s32 *b);
extern s32 func_02028130(s32 a);
extern s32 func_020678b4(s32 *a, s32 *b);
extern s32 func_02067898(s32 a, s32 b);
extern s16 func_0206824c(s32 a);

typedef struct { s32 w[3]; } T3;
#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

#define BODY(A6, A7, A9)                                                   \
    {                                                                      \
        s32 iVar3b;                                                        \
        s32 iVar4b;                                                        \
        s32 iVar3c;                                                        \
        s16 sVar2b;                                                        \
        iVar3b = func_01ffdb08(param_3);                                   \
        *(T3 *)param_1 = *(T3 *)param_2;                                    \
        param_1[1] = (A9);                                                 \
        func_020c8e4c(iVar3b, param_1 + 3);                                \
        iVar4b = func_02028130(iVar3b);                                    \
        param_1[4] = FX_Mul((A7), iVar4b);                                 \
        param_1[6] = 0;                                                    \
        param_1[7] = 0x1000;                                               \
        param_1[8] = 0;                                                    \
        iVar3b = func_02028130(iVar3b);                                    \
        iVar4b = func_020678b4(param_1 + 3, param_1);                      \
        iVar3c = func_02067898(FX_Mul((A6), iVar3b), iVar4b);              \
        sVar2b = func_0206824c(iVar3c);                                    \
        param_1[9] = (s32)(((s64)sVar2b * 0x1680000 + 0x80000) >> 20);     \
    }

void func_020cc4cc(s32 *param_1, s32 *param_2, s32 param_3)
{
    s32 iVar3;
    s32 iVar4;

    iVar3 = func_01ffdb08(param_3);
    iVar4 = func_02027468(iVar3);
    if (iVar4 == 0) {
        {
            s32 gb;
            s32 ga;
            s32 gc;
            ga = data_02142de8[0];
            gb = data_02142dec[0];
            gc = data_02142df0[0];
            BODY(ga, gb, gc);
        }
        return;
    }
    iVar3 = func_02027468(iVar3);
    if (iVar3 == 1) {
        {
            s32 gb;
            s32 ga;
            s32 gc;
            ga = data_02142ddc[0];
            gb = data_02142de0[0];
            gc = data_02142de4[0];
            BODY(ga, gb, gc);
        }
    }
}
