#include "ctx.h"

extern u8 *data_02159424;
extern u8 *data_02159444;
extern s32 func_020ab3f0(void);
extern void func_0210b2c8(u32 a, u8 *p);
extern void func_0210af80(u8 *p);

void func_0210aef4(u8 *param_1)
{
    s32 iVar3;

    *(u32 *)param_1 = 0;
    iVar3 = func_020ab3f0();
    *(s16 *)(param_1 + 164) = (s16)(iVar3 >> 12);
    iVar3 = *(s16 *)(*(u8 **)(data_02159424 + 4) + 2) + 59;
    *(s16 *)(param_1 + 166) = (s16)(iVar3 / 60);
    *(s16 *)(param_1 + 168) = *(s16 *)(data_02159444 + 86);
    func_0210b2c8(0, param_1);
    func_0210af80(param_1);
}
