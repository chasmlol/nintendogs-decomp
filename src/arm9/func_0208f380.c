#include "ctx.h"

extern s32 *data_02159028;
extern void func_02077970(void *p);
extern s32 func_0207ceb0(s32 *a, s32 b);

void func_0208f380(void)
{
    s32 *piVar2;
    s32 iVar1;

    piVar2 = *(s32 **)data_02159028;
    iVar1 = *piVar2;
    if (iVar1 != 0) {
        do {
            if (*(u32 *)(iVar1 + 8) != 0 && (*(u16 *)(iVar1 + 4) & 1) == 0 &&
                (*(u16 *)(iVar1 + 4) & 2) == 0) {
                func_02077970(*(void **)(iVar1 + 8));
                *(u16 *)(iVar1 + 4) = *(u16 *)(iVar1 + 4) | 2;
            }
            iVar1 = func_0207ceb0(piVar2, iVar1);
        } while (iVar1 != 0);
    }
}
