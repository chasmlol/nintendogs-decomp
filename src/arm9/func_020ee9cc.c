#include "ctx.h"

extern void func_020eea24(u8 *p);
extern void func_020eec10(u8 *p);

void func_020ee9cc(u8 *param_1)
{
    s16 sVar1;

    sVar1 = *(s16 *)(param_1 + 0x90);
    if (sVar1 == 0) {
        return;
    }
    switch (sVar1) {
    case 2:
        func_020eec10(param_1);
        return;
    case 3:
        func_020eea24(param_1);
        return;
    }
}
