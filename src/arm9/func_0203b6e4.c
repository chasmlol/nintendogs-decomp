#include "ctx.h"

typedef struct { u32 w[3]; } Triple;

void func_02033fb8(u8 *p);

void func_0203b6e4(u8 *param_1)
{
    if (*(s8 *)(param_1 + 160) == 1) {
        *(Triple *)(param_1 + 948) = *(Triple *)(param_1 + 620);
    } else {
        *(Triple *)(param_1 + 948) = *(Triple *)(param_1 + 632);
    }
    func_02033fb8(param_1);
}
