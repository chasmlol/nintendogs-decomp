#include "ctx.h"

extern u32 data_02159424;
extern u32 data_02159444;
s32 func_020ab3f0(void);
void func_0210af80(u8 *p);

void func_0210ae7c(u8 *param_1)
{
    s32 t;

    *(s16 *)(param_1 + 164) = (s16)(func_020ab3f0() >> 12);
    t = *(s16 *)(*(u8 **)(*(u8 **)&data_02159424 + 4) + 2) + 59;
    *(s16 *)(param_1 + 166) = (s16)(t / 60);
    *(s16 *)(param_1 + 168) = *(s16 *)(*(u8 **)&data_02159444 + 86);
    func_0210af80(param_1);
}
