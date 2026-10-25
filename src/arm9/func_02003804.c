#include "ctx.h"
extern s32 func_0207d32c(u32 a);
extern s32 func_0207dc94(u32 a, u32 b);
s32 func_02003804(u32 *p0)
{
    s32 r = 0;
    if (p0[0] == 0x45585048) {
        goto ca;
    }
    if (p0[0] != 0x46524d48) {
        goto done;
    }
    goto cb;
ca:
    r = func_0207d32c((u32)p0);
    goto done;
cb:
    r = func_0207dc94((u32)p0, 4);
done:
    return r;
}
