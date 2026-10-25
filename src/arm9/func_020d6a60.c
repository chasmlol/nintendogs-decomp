#include "ctx.h"

extern s32 data_021594ec;
extern u16 data_021594dc;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 s);

u32 func_020d6a60(u32 param_1, void *param_2, u32 param_3, u16 *param_4)
{
    u32 s;
    u16 r;

    s = func_02080b08();
    if (data_021594ec == 1 || data_021594dc == 1) {
        *param_4 = 0x17;
        return 0;
    }
    r = ((u16 (*)(u32))param_2)(param_3);
    *param_4 = r;
    if (*param_4 == 2) {
        data_021594ec = 1;
        func_02080b1c(s);
        return 1;
    }
    func_02080b1c(s);
    return 0;
}
