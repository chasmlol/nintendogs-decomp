#include "ctx.h"
extern u8 data_02149f6c[];
extern u8 data_02149f78[];
extern u8 *func_01ffdb08(s32 a);
extern void func_02112744(u32 a, u16 *b, u32 c);
void func_02115fc8(u32 *param_1)
{
    u32 zA;
    s32 iVar4;
    u32 zB;
    iVar4 = 0;
    zA = (u32)iVar4;
    zB = (u32)iVar4;
    do {
        if (func_01ffdb08((s32)(s16)iVar4) != NULL) {
            func_02112744(2, (u16 *)((u32 *)data_02149f6c)[iVar4], 1);
            func_02112744(2, (u16 *)((u32 *)data_02149f78)[iVar4], zA);
            *((u32 *)param_1 + iVar4 + 3) = 1;
        } else {
            func_02112744(2, (u16 *)((u32 *)data_02149f6c)[iVar4], zA);
            func_02112744(2, (u16 *)((u32 *)data_02149f78)[iVar4], 1);
            *((u32 *)param_1 + iVar4 + 3) = zB;
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
}
