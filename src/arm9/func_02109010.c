#include "ctx.h"
extern u8 data_0215be48[];
extern void func_02117d8c(u8 *p);
void func_02109010(void)
{
    u8 *iVar1;
    u8 *base;
    u32 v;
    base = *(u8 **)data_0215be48;
    iVar1 = base + 0x5028;
    if (*(u32 *)(base + 0x5028) == 0) {
        return;
    }
    v = *(u32 *)(iVar1 + 0x1ac);
    if (v == 2) {
        goto CALL1;
    }
    if (v != 3) {
        goto SKIP1;
    }
CALL1:
    func_02117d8c(iVar1 + 0x198);
SKIP1:
    v = *(u32 *)(iVar1 + 0x1cc);
    if (v == 2) {
        goto CALL2;
    }
    if (v != 3) {
        return;
    }
CALL2:
    func_02117d8c(iVar1 + 0x1b8);
}
