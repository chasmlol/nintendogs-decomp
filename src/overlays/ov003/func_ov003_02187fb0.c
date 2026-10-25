#include "ctx.h"
extern void func_02022b7c(u32 a);
extern void func_ov003_021894ec(u32 a, u32 b, u32 c, u32 d);
void func_ov003_02187fb0(u8 *p)
{
    u16 v = *(u16 *)(p + 252);
    u32 flag = v > 40;
    func_02022b7c((u32)p);
    func_ov003_021894ec((u32)p, 5, 87, flag);
}
