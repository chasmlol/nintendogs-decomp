#include "ctx.h"

void func_0207cec8(u8 *param_1, u8 *param_2)
{
    u32 off = *(u16 *)(param_1 + 10);
    u32 *n = (u32 *)(param_2 + off);
    if (n[0] == 0) {
        *(u32 *)param_1 = n[1];
    } else {
        *(u32 *)(n[0] + off + 4) = n[1];
    }
    if (n[1] == 0) {
        *(u32 *)(param_1 + 4) = n[0];
    } else {
        *(u32 *)(n[1] + *(u16 *)(param_1 + 10)) = n[0];
    }
    n[0] = 0;
    n[1] = 0;
    *(u16 *)(param_1 + 8) = *(u16 *)(param_1 + 8) - 1;
}
