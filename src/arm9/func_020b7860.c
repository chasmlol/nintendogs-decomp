#include "ctx.h"

extern u8 *data_02159460;
extern void func_0206c7d4(u32 a, u32 b, u32 c);

void func_020b7860(u32 param_1, u16 *param_2)
{
    u8 *d;
    u32 v0;
    u32 v1;
    vu16 *vp;
    vp = (vu16 *)param_2;
    func_0206c7d4(param_1, (u32)data_02159460, 0x260c);
    v0 = vp[0];
    d = data_02159460;
    v1 = vp[1];
    d = d + 0x2600;
    *(u16 *)(d + 12) = (u16)v0;
    *(u16 *)(d + 14) = (u16)v1;
}
