#include "ctx.h"

typedef struct { u16 a; } S2;

extern void func_0208fe04(s16 *a, int *b, int *c, S2 d, S2 e, int f, int g, s16 *h, u32 i, void *j, int k);

void func_0208fd90(s16 *param_1, int *param_2, int *param_3, u16 param_4, u16 param_5,
                   int param_6, int param_7, s16 *param_8, u32 param_9, void *param_10, ...)
{
    func_0208fe04(param_1, param_2, param_3, *(S2 *)&param_4, *(S2 *)&param_5, param_6, param_7, param_8, param_9, param_10, 0);
}
