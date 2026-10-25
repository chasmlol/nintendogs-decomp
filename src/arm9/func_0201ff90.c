#include "ctx.h"
extern u32 func_02035164(u8 *obj);
extern void func_02026c24(u8 *obj);
extern u8 func_02025548(u8 *obj);
u8 func_0201ff90(u8 *obj)
{
    *(u16 *)(obj + 256 + 82) = 281;
    *(u16 *)(obj + 256 + 88) = (u16)func_02035164(obj);
    func_02026c24(obj);
    return func_02025548(obj);
}
