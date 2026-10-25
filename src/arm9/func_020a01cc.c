#include "ctx.h"

extern s16 data_02132404[];
extern u8 data_02159074[];
extern u8 data_02159184[];
extern void func_02071e34(int *a, int b);
extern u32 func_02071f20(int *a);
extern void func_02072cf0(int a, int *b);
extern void func_0207307c(void *a, int b);

void func_020a01cc(int param_1)
{
    u8 *r7;
    u8 *r6;
    int uVar5;
    int *piVar4;
    u32 uVar3;

    r7 = data_02159074;
    r6 = data_02159184;
    uVar5 = data_02132404[param_1];
    piVar4 = *(int **)(r7 + 4);
    if (uVar5 != -1) {
        if (*(s16 *)(r7 + 0x16) != -1) {
            func_02071e34(piVar4, *(s16 *)(r7 + 0x16));
        }
        uVar3 = func_02071f20(piVar4);
        *(s16 *)(r7 + 0x16) = (s16)uVar3;
        func_02072cf0(uVar5, piVar4);
        func_0207307c(r6, uVar5);
        ((int *)r6)[3] = 1;
    }
}
