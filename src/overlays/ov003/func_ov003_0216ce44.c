#include "ctx.h"
extern void func_02026bac(u8 *obj);
extern void func_02025548(u8 *obj);
extern void func_0202db24(u8 *obj, u32 v);
void func_ov003_0216ce44(u8 *obj)
{
    *(u16 *)(obj + 256 + 82) = 607;
    func_02026bac(obj);
    func_02025548(obj);
    func_0202db24(obj, 0);
}
