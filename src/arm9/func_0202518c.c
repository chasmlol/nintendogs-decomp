#pragma avoid_byte strb
#include "ctx.h"
extern void func_01ff832c(s32 a, u8 *b, u8 *c, u8 *d);
u32 func_0202518c(u8 *param_1, s32 param_2, s32 param_3)
{
    u32 f;
    u32 zero;
    u8 *t;
    u32 old;
    if (*(s16 *)(param_1 + 0x162) != *(s16 *)(param_1 + 0x152)) goto Z;
    if (*(s16 *)(param_1 + 0x14e) <= param_2) {
        f = 1;
        goto T;
    }
Z:
    f = 0;
T:
    if (f == 0) goto RET0;
    if (*(u8 *)(param_1 + 0xac) == 0) goto CALL;
    *(s32 *)(param_1 + 0x260) = (s32)(((s64)*(s32 *)(param_1 + 0x1a4) * param_3 + 0x800) >> 12);
    *(s32 *)(param_1 + 0x264) = (s32)(((s64)*(s32 *)(param_1 + 0x1a8) * param_3 + 0x800) >> 12);
    *(s32 *)(param_1 + 0x268) = (s32)(((s64)*(s32 *)(param_1 + 0x1ac) * param_3 + 0x800) >> 12);
    zero = 0;
    t = param_1 + 172;
    *(u8 *)(t) = (u8)(zero);
    goto END;
CALL:
    func_01ff832c(param_3, param_1 + 0x1a4, param_1 + 0x260, param_1 + 0x260);
END:
    return 1;
RET0:
    return 0;
}
