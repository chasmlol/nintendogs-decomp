#include "ctx.h"

extern u32 data_021594ec;
extern u16 data_021594dc;
extern u32 data_021594e8;
extern u32 func_02080b08(void);
extern u32 func_02064334(u32 a, u32 b);
extern void func_02080b1c(u32 a);

u32 func_020d6b10(u16 *param_1)
{
    u32 r4;
    u32 r;

    r4 = func_02080b08();
    if (data_021594ec == 1) {
        goto ret17;
    }
    if (data_021594dc != 1) {
        goto body;
    }
ret17:
    *param_1 = 0x17;
    return 0;
body:
    r = func_02064334(data_021594dc, (u32)&data_021594ec);
    *param_1 = (u16)r;
    if (*param_1 == 0) {
        data_021594e8 = 0;
        func_02080b1c(r4);
        return 1;
    }
    func_02080b1c(r4);
    return 0;
}
