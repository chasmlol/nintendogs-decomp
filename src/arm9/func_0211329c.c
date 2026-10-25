#include "ctx.h"

void func_020fc594(u32 a, u32 b, u32 c);
void func_0207c910(u32 a, u32 b, u32 c, u32 d);

void func_0211329c(u32 *param_1)
{
    func_020fc594(0, 4, 1);
    if (param_1[2] == 0) {
        return;
    }
    if (param_1[4] == 0) {
        return;
    }
    *(vu16 *)0x0400000c = (*(vu16 *)0x0400000c & ~3) | param_1[8];
    *(vu16 *)0x0400000c = *(vu16 *)0x0400000c & ~64;
    *(vu16 *)0x0400000c = (*(vu16 *)0x0400000c & 0x43) | 0x80c;
    func_0207c910(6, 0, param_1[2], param_1[1]);
    func_0207c910(15, 0, param_1[3], 0x1c0);
    func_0207c910(10, 0, param_1[4], 0x800);
    param_1[0] = 0;
}
