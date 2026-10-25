#include "ctx.h"
extern void func_0203e8cc(u32 a, u32 b, u32 c);
extern void func_ov003_02184b58(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_ov003_0218452c(u8 *p)
{
    if (*(u16 *)(p + 252) == 80) {
        func_0203e8cc((u32)p, 1, 0);
    }
    func_ov003_02184b58((u32)p, 6, 47, 0, *(u16 *)(p + 252) > 100);
}
