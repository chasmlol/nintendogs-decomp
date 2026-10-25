#include "ctx.h"
extern void func_020264f4(u8 *obj);
extern void func_020255a4(u8 *obj);
extern void func_0202db24(u8 *obj, u32 v);
void func_ov003_021698bc(u8 *obj)
{
    *(u16 *)(obj + 256 + 82) = 113;
    func_020264f4(obj);
    func_020255a4(obj);
    func_0202db24(obj, 6);
}
