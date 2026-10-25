#include "ctx.h"

extern u8 *data_0215be48;
extern void func_02117810(void *p);
extern void func_02108e24(s32 v);

void func_02115080(void)
{
    s32 iVar1;
    u8 *piVar3;
    u8 *q;

    *(s32 *)(data_0215be48 + 0x1d80) = 0;
    q = data_0215be48 + 196;
    func_02117810(q + 24);
    func_02117810(q + 84);
    func_02117810(q + 144);
    piVar3 = q + 204;
    q = q + 384;
    iVar1 = 0;
    do {
        func_02117810(piVar3);
        func_02117810(q);
        iVar1 = iVar1 + 1;
        piVar3 = piVar3 + 60;
        q = q + 60;
    } while (iVar1 < 3);
    func_02108e24(1);
}
