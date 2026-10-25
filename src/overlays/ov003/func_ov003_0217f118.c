#include "ctx.h"

extern s32 func_ov003_0217fe80(void *p, s32 a, s32 b);
extern s32 func_02035770(void *p, s32 a);
extern void func_0203e908(void *p, s32 a);

void func_ov003_0217f118(void *param_1)
{
    u8 *p = (u8 *)param_1;
    s32 r;
    r = func_ov003_0217fe80(p, (s16)(*(s32 *)(p + 0x484) + 5), 0);
    if (r != 0) {
        return;
    }
    r = func_02035770(p, 0x1c);
    if (r != 0) {
        func_0203e908(p, (s16)(*(s32 *)(p + 0x484) + 0x211));
        return;
    }
}
