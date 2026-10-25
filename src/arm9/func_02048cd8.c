#include "ctx.h"

extern u32 *data_0214f464;
extern int func_0203567c(int p);
extern int func_02036578(int p);
extern u32 func_020449bc(void);
extern void func_0202fd7c(int p);
extern void func_0203e908(int p, s16 v);

void func_02048cd8(int param_1)
{
    int iVar1;
    u32 uVar2;
    u32 iVar3;
    u32 *piVar;
    u16 t;

    iVar1 = func_0203567c(param_1);
    if (iVar1 == 0) {
        return;
    }
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    piVar = data_0214f464;
    iVar3 = *piVar * 0x10dcd + 1;
    *piVar = iVar3;
    t = (u16)((u32)(iVar3 * 0x10000) >> 0x1f);
    switch (t) {
    case 0:
        func_0203e908(param_1, 0x2cd);
        return;
    case 1:
        func_0203e908(param_1, 0x2ce);
        return;
    }
}
