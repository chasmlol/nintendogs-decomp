#include "ctx.h"

extern u32 data_0215942c;
s32 func_0203567c(u8 *p);
s32 func_020385e4(u8 *p);
void func_0203e908(u8 *p, u32 v);

void func_ov003_02180c6c(u8 *param_1)
{
    s32 iVar1;

    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    if (*(u16 *)*(u8 **)&data_0215942c == 1 || *(u16 *)*(u8 **)&data_0215942c == 4) {
        func_0203e908(param_1, 0x3ab);
        return;
    }
    iVar1 = func_020385e4(param_1);
    switch (iVar1) {
    case 0:
        func_0203e908(param_1, 0x3ab);
        return;
    case 1:
        func_0203e908(param_1, 0x3ad);
        return;
    case 2:
        func_0203e908(param_1, 0x3ae);
        return;
    case 3:
        func_0203e908(param_1, 0x3af);
        return;
    }
}
