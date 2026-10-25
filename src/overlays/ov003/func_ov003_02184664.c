#include "ctx.h"
extern void func_0203e8cc(u8 *obj, s32 a, s32 b);
extern void func_ov003_02184b58(u8 *obj, s32 a, s32 b, s32 c, s32 d);
void func_ov003_02184664(u8 *obj)
{
    if (*(u16 *)(obj + 0xfc) == 80)
        func_0203e8cc(obj, 1, 0);
    func_ov003_02184b58(obj, 5, 0x57, 0, *(u16 *)(obj + 0xfc) > 100);
}
