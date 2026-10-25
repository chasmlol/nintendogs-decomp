#include "ctx.h"

extern u32 data_02155c44;
extern u32 data_02155c40;
extern void func_020778b8(void);
extern void func_0206c81c(u32, u32, u32);

void func_020778d0(void)
{
    u32 *piVar1;
    if (data_02155c44 != 0) {
        func_020778b8();
    }
    piVar1 = (u32 *)data_02155c40;
    if (piVar1 != NULL) {
        if (*piVar1 != 0) {
            func_0206c81c((u32)(piVar1 + 1), 0x04000400, *piVar1 << 2);
            *(u32 *)data_02155c40 = 0;
            return;
        }
        return;
    }
}
