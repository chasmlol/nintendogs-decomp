#include "ctx.h"

extern s32 func_0203567c(u8 *p);
extern s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 v);

void func_ov003_0217f284(u8 *p)
{
    s32 iVar1;
    s32 iVar2;

    iVar1 = func_0203567c(p);
    iVar2 = func_ov003_0217fe80(p, (s16)(*(s32 *)(p + 0x484) + 7), 0);
    if (iVar2 != 0) {
        return;
    }
    if (iVar1 != 0) {
        if (*(s32 *)(p + 0x484) == 0) {
            func_0203e908(p, 0x20d);
            return;
        }
        func_0203e908(p, 0x20e);
        return;
    }
}
