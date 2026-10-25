#include "ctx.h"

extern void func_02026494(u8 *p);
extern void func_02025860(u8 *p);
extern void func_02034198(u8 *p);

void func_ov003_02165af4(u8 *param_1)
{
    *(s16 *)(param_1 + 0x152) = 0x9a;
    func_02026494(param_1);
    func_02025860(param_1);
    func_02034198(param_1);
}
