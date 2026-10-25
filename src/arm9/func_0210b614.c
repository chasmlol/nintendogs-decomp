#include "ctx.h"

typedef struct { vu16 v; } S16;
extern u32 func_0210b95c(u8 *a, u16 *b, S16 c, S16 d, u32 e, s32 f, s32 g, s32 h);

u32 func_0210b614(u8 *param_1, u32 param_2, u16 *param_3, s32 *param_4, s32 param_5, s32 param_6)
{
    u32 uVar2;
    u8 *iVar3;
    S16 t0;
    S16 t1;

    uVar2 = 0;
    if (param_2 != 0) {
        iVar3 = (u8 *)param_2 + 8 + param_6 * 8;
        t0.v = *(u16 *)iVar3;
        t1.v = *(u16 *)(iVar3 + 2);
        if (param_4 == 0) {
            goto zero;
        }
        if (*param_4 == 0) {
            goto done;
        }
        *(vu16 *)&t0 = (u16)(((s16)*(vu16 *)&t0 & -4096) | (0x0fff & (s16)(*(s16 *)((u8 *)param_4 + 6) + *(s16 *)((u8 *)param_4 + 10))));
        *(vu16 *)&t1 = (u16)(((s16)*(vu16 *)&t1 & -4096) | (0x0fff & (s16)(*(s16 *)((u8 *)param_4 + 8) + *(s16 *)((u8 *)param_4 + 12))));
        uVar2 += func_0210b95c(param_1, param_3, t0, t1, *(u32 *)(iVar3 + 4), param_5, *(s16 *)((u8 *)param_4 + 4), 1);
        goto done;
    zero:
        uVar2 += func_0210b95c(param_1, param_3, t0, t1, *(u32 *)(iVar3 + 4), param_5, uVar2, 1);
    }
done:
    return uVar2;
}
