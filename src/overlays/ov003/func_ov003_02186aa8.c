#include "ctx.h"

extern void func_02023654(void *p, s32 a, s32 b);
extern void func_ov003_02186bd4(void *p, s32 a, s32 b);

void func_ov003_02186aa8(u8 *p)
{
    if (*(u16 *)(p + 0xfc) > 0x1e) {
        func_02023654(p, 0xe, 1);
    }
    func_ov003_02186bd4(p, 6, 0);
}
