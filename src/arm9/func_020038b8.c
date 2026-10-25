#include "ctx.h"

extern u32 func_0207d51c(int a, int b, int c);
extern u32 func_0207dd14(int a, int b, int c);

u32 func_020038b8(int *param_1, int param_2)
{
    u32 uVar1;
    uVar1 = 0;
    if (*param_1 == 0x45585048) {
        goto blkA;
    }
    if (*param_1 != 0x46524d48) {
        goto end;
    }
    goto blkB;
blkA:
    uVar1 = func_0207d51c((int)param_1, param_2, 4);
    goto end;
blkB:
    uVar1 = func_0207dd14((int)param_1, param_2, 4);
end:
    return uVar1;
}
