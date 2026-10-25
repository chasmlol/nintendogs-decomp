#include "ctx.h"
void func_02069fb8(u32 a, s32 b, s32 c, s32 d, s32 e);

void func_020f9ae8(s32 *p)
{
    s32 iVar1;

    *(vu32 *)0x04001014 = 0x01ff0000 & ((p[3] >> 12) << 16);
    iVar1 = *p;
    if (iVar1 == 0 || iVar1 == 4) {
        func_02069fb8(0x04001050, 2, 4, p[4] >> 12, 16 - (p[4] >> 12));
        return;
    }
    if (iVar1 != 1 && iVar1 != 3) {
        return;
    }
    func_02069fb8(0x04001050, 16, 2, p[6] >> 12, 16 - (p[6] >> 12));
}
