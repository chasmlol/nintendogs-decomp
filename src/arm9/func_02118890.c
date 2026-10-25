#include "ctx.h"

extern void func_02112798(s32 a, s32 b, s32 c);
extern void func_0210a818(void);

void func_02118890(s32 *param_1)
{
    param_1[1] = param_1[1] + 1;
    if (param_1[1] > 120) {
        func_02112798(0, 3, 0);
        func_0210a818();
        return;
    }
}
