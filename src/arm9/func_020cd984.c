#include "ctx.h"

extern s64 data_02126728;
extern void func_02067e34(int *a, int *b, int *c);
extern void func_02067d04(int *a, int *b, int *c);
extern void func_02006a30(int *a, int *b);

#define SUMSQ(v) ((s64)(v)[0] * (v)[0] + (s64)(v)[1] * (v)[1] + (s64)(v)[2] * (v)[2])

void func_020cd984(int *param_1, int *param_2, int *param_3, int *param_4, int *param_5, int *param_6)
{
    s64 k;

    func_02067e34(param_5, param_4, param_3);
    k = data_02126728;
    if (SUMSQ(param_3) >= k) {
        func_02006a30(param_3, param_3);
    }
    func_02067d04(param_6, param_3, param_1);
    if (SUMSQ(param_1) >= k) {
        func_02006a30(param_1, param_1);
    }
    func_02067d04(param_3, param_1, param_2);
    if (SUMSQ(param_2) >= k) {
        func_02006a30(param_2, param_2);
    }
}
