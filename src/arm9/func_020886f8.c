#include "ctx.h"

extern u8 *data_02156040;
extern void func_02088744(void);
extern void func_02065a88(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);

u32 func_020886f8(u32 param_1, u32 param_2, u32 param_3, u32 param_4)
{
    func_02065a88(data_02156040, param_3, param_2, param_4, (u32)func_02088744, param_1, 1);
    return 6;
}
