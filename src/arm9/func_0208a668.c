#include "ctx.h"

extern u32 *data_02157cc0;
extern void func_020800d4(u32 *p, s32 v);

u32 func_0208a668(void)
{
    func_020800d4(data_02157cc0, 0x280);
    return data_02157cc0[1];
}
