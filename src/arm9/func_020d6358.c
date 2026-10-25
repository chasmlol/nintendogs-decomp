#include "ctx.h"

extern u32 data_021594ec;
extern u32 data_021594dc;
extern u32 data_02159560;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern s32 func_02064b88(u32 a, u32 b, u16 *c, s32 d, s32 e);

u32 func_020d6358(u32 param_1, u16 *param_2, s16 *param_3)
{
    u32 r;
    s32 v;

    r = func_02080b08();
    if (*(u32 *)&data_021594ec == 1) {
        goto r23;
    }
    if (*(u16 *)&data_021594dc != 1) {
        goto main_path;
    }
r23:
    *param_3 = 0x17;
    return 0;
main_path:
    v = func_02064b88(param_1, (u32)&data_02159560, param_2, 1, 0);
    *param_3 = (s16)v;
    if (*(u16 *)param_3 == 2) {
        *(u32 *)&data_021594ec = 1;
        func_02080b1c(r);
        return 1;
    }
    func_02080b1c(r);
    return 0;
}
