#include "ctx.h"

extern void func_02023654(void *p, s32 a, s32 b);
extern void func_ov003_02186b90(void *p, s32 a, s32 b);

void func_ov003_02186a38(u8 *p)
{
    if (*(u16 *)(p + 0xfc) > 0x1e) {
        func_02023654(p, 0x10, 1);
    }
    func_ov003_02186b90(p, 8, 0);
}
