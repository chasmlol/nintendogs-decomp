#include "ctx.h"

extern u32 data_ov010_0215d9e0;
extern void func_02080074(void);
extern void func_0206b0a4(u32 p0, u32 p1, u32 p2);

void func_ov010_0215c0bc(void)
{
    func_02080074();
    func_0206b0a4((u32)(*(u8 **)&data_ov010_0215d9e0 + 0x18), 0, 0x6000);
}
