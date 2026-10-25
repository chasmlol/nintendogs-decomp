#include "ctx.h"
extern void func_020264d4(u8 *obj);
extern void func_020255a4(u8 *obj);
extern void func_0202db24(u8 *obj, u32 v);
void func_ov003_0216a4fc(u8 *obj)
{
    *(u16 *)(obj + 256 + 82) = 455;
    func_020264d4(obj);
    func_020255a4(obj);
    func_0202db24(obj, 4);
}
