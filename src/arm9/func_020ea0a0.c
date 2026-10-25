#include "ctx.h"

extern void func_01ffdb08(s32 a);
extern s32 func_020c736c(u8 *p, s32 a);
extern void func_020c5f4c(u8 *p, s32 a);

void func_020ea0a0(u8 *param_1, s32 param_2)
{
    s32 iVar1;

    func_01ffdb08(param_2);
    iVar1 = func_020c736c(param_1, param_2);
    if (iVar1 == 0) {
        return;
    }
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        return;
    case 1:
        func_020c5f4c(param_1, param_2);
        return;
    case 4:
        return;
    }
}
