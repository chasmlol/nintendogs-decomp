#include "ctx.h"

extern u32 data_021594ec;
extern u16 data_021594dc;
extern u32 data_02159520;

u32 func_02080b08(u8 *p);
void func_02080b1c(u32 irq);
s32 func_02064e60(u8 *p, u32 c);

u32 func_020d6024(u8 *param_1, u16 *param_2)
{
    u32 irq;

    irq = func_02080b08(param_1);
    if (data_021594ec == 1) {
        goto set17;
    }
    if (data_021594dc != 1) {
        goto main_path;
    }
set17:
    *param_2 = 0x17;
    return 0;
main_path:
    *param_2 = (u16)func_02064e60(param_1, (u32)&data_02159520);
    if (*param_2 == 2) {
        data_021594ec = 1;
        func_02080b1c(irq);
        return 1;
    }
    func_02080b1c(irq);
    return 0;
}
