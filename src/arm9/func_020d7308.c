#include "ctx.h"

extern u32 func_020d3abc(u32 a);
extern int func_020d5318(void);
extern u32 func_020d740c(u32 a);
extern u32 func_020d7358(u32 a);

u32 func_020d7308(u32 param_1)
{
    u32 uVar2;
    int iVar3;
    u32 uVar4;

    uVar2 = func_020d3abc(param_1);
    uVar4 = (uVar2 + 5) & 0xff;
    iVar3 = func_020d5318();
    switch (iVar3) {
    case 2:
        uVar4 = func_020d740c(uVar4);
        break;
    case 3:
        uVar4 = func_020d7358(uVar4);
        break;
    }
    return uVar4;
}
