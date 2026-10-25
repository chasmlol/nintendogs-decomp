#include "ctx.h"
extern void func_02026c24(u8 *obj);
extern void func_02025a84(u8 *obj);
extern void func_02023654(u8 *obj, u32 a, u32 b);
void func_0201f674(u8 *obj)
{
    *(u16 *)(obj + 256 + 82) = 66;
    func_02026c24(obj);
    func_02025a84(obj);
    func_02023654(obj, 48, 3);
}
