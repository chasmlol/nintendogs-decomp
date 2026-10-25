#include "ctx.h"
#pragma opt_common_subs off

typedef struct {
    vu16 a;
    u16 b;
    u32 c;
} Ent;

extern u8 data_0214e718;
extern u8 data_0214e6f4;
extern u8 data_0214e71c;
extern s32 func_02002e00(void);
extern void func_020026a4(u32 a);

u32 func_02002a38(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar4;

    iVar4 = func_02002e00();
    if (iVar4 == 0) {
        return 1;
    }
    ((Ent *)&data_0214e718)[param_1].a = 0;
    *(u32 *)((u8 *)&data_0214e6f4 + 4) = param_3;
    *(u32 *)((u8 *)&data_0214e6f4 + 8) = param_4;
    *(vu32 *)((u8 *)((u8 *)&data_0214e718 + 4) + param_1 * 8) = param_2;
    func_020026a4((param_1 & 0xff) | 0x03006500);
    return 0;
}
