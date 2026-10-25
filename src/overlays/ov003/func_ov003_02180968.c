#include "ctx.h"

extern u16 *data_0215942c;
extern s32 func_0203567c(u8 *p);
extern s32 func_020385e4(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_02180968(u8 *p)
{
    s32 iVar1;
    u16 v;

    iVar1 = func_0203567c(p);
    if (iVar1 == 0) {
        return;
    }
    v = *data_0215942c;
    if (v == 1 || v == 4) {
        func_0203e908(p, 0x3ab);
        return;
    }
    iVar1 = func_020385e4(p);
    switch (iVar1) {
    case 0:
        func_0203e908(p, 0x3ab);
        return;
    case 1:
        func_0203e908(p, 0x3ad);
        return;
    case 2:
        func_0203e908(p, 0x3ae);
        return;
    case 3:
        func_0203e908(p, 0x3af);
        return;
    }
    return;
}
