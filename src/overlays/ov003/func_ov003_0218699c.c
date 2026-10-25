#include "ctx.h"
extern void func_02023654(void *p, u32 a, u32 b);
extern void func_ov003_02187108(void *p, u32 a, u32 b);
void func_ov003_0218699c(u8 *p0)
{
    if (*(u16 *)(p0 + 0xfc) > 0x1e) {
        func_02023654(p0, 0xc, 2);
    }
    func_ov003_02187108(p0, 4, 1);
}
