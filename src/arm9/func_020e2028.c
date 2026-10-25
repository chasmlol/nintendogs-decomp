#include "ctx.h"

extern u32 data_0215b754;
extern void func_0207fcb0(void *a, u32 *out, u32 n);

u32 func_020e2028(void)
{
    u32 v;
    func_0207fcb0(&data_0215b754, &v, 1);
    if ((v & 0xffffff) == 0x0046494e) {
        return v & 0xf0000000;
    }
    return 0;
}
