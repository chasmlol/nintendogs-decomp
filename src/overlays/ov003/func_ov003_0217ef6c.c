#include "ctx.h"

extern u32 data_0215942c;
extern s32 func_02035770(u8 *p, s32 a);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0217ef6c(u8 *param_1)
{
    s32 iVar1;
    u16 v;

    iVar1 = func_02035770(param_1, 0x32);
    if (iVar1 == 0) {
        return;
    }
    v = *(u16 *)*(u8 **)&data_0215942c;
    if (v == 1 || v == 4) {
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
    }
}
