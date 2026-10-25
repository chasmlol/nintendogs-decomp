#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117d8c(int *p);

void func_02108ed0(void)
{
    u8 *iVar1;
    int v;

    iVar1 = data_0215be48 + 0x5028;
    if (*(int *)(data_0215be48 + 0x5028) == 0) {
        return;
    }
    v = *(int *)(iVar1 + 0x1ec);
    if (v == 2) goto call1;
    if (v != 3) goto skip1;
call1:
    func_02117d8c((int *)(iVar1 + 0x1d8));
skip1:
    v = *(int *)(iVar1 + 0x20c);
    if (v == 2) goto call2;
    if (v != 3) return;
call2:
    func_02117d8c((int *)(iVar1 + 0x1f8));
}
