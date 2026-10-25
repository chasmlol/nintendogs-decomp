#include "ctx.h"

extern u8 *data_0215be48;
void func_02117810(u8 *p);
void func_02108e24(u32 a);

void func_020fe7c0(void)
{
    u8 *iVar1;
    u8 *r4;
    iVar1 = data_0215be48;
    if (*(u32 *)(iVar1 + 0xb8) != 6) {
        return;
    }
    r4 = iVar1 + 196;
    func_02117810(r4 + 4);
    func_02117810(r4 + 64);
    func_02117810(r4 + 124);
    func_02117810(r4 + 184);
    func_02117810(r4 + 244);
    func_02108e24(1);
}
