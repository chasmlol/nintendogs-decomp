#include "ctx.h"

extern u8 *data_ov027_0215c5e0;
extern void func_0208010c(u32 a, u32 b);
extern void func_02007354(u32 a, u32 b, u32 c);

void func_ov027_0215c170(void)
{
    u32 *q = *(u32 **)(data_ov027_0215c5e0 + 4);
    func_0208010c(*(u32 *)(q), *(u32 *)((u8 *)q + 0x10));
    func_02007354(*(u32 *)(data_ov027_0215c5e0 + 4), 0, 0);
}
