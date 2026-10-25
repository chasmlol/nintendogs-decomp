#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117e4c(int *p);

void func_02108f44(void)
{
    u8 *iVar2;
    int v;

    iVar2 = data_0215be48 + 0x5028;
    if (*(int *)(data_0215be48 + 0x5028) == 0) {
        return;
    }
    v = *(int *)(iVar2 + 0x1ec);
    if (v == 0) goto call1;
    if (v == 1) goto call1;
    if (v != 4) goto skip1;
call1:
    func_02117e4c((int *)(iVar2 + 0x1d8));
skip1:
    v = *(int *)(iVar2 + 0x20c);
    if (v == 0) goto call2;
    if (v == 1) goto call2;
    if (v != 4) return;
call2:
    func_02117e4c((int *)(iVar2 + 0x1f8));
}
