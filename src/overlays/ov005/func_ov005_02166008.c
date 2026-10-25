#include "ctx.h"

extern void func_ov005_02166060(int p);
extern void func_ov005_02166628(int p);

void func_ov005_02166008(int param_1)
{
    s16 sVar1;

    sVar1 = *(s16 *)(param_1 + 0x90);
    switch (sVar1) {
    case 0:
        return;
    case 2:
        func_ov005_02166628(param_1);
        return;
    case 3:
        func_ov005_02166060(param_1);
        return;
    }
}
