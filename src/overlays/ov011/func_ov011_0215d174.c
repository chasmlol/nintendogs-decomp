#include "ctx.h"

extern u8 *func_0208ea24(s32 *p);
extern void func_0208f544(u8 *p, u32 f);
extern void func_ov011_0215d1b4(void);

u8 *func_ov011_0215d174(s32 *param_1)
{
    u8 *p = func_0208ea24(param_1);
    *(u32 *)(p + 0x3c) = 0;
    *(u32 *)(p + 0x40) = 0x2000;
    *(u32 *)(p + 0x44) = 0;
    func_0208f544(p, (u32)func_ov011_0215d1b4);
    *(u32 *)(p + 0x7c) = 0x6000;
    return p;
}
