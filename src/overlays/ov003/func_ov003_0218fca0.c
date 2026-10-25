#include "ctx.h"

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
} Blk;

extern u8 *func_020364cc(u8 *p);
extern void func_02037450(u8 *p, u32 v);
extern s32 func_02028124(u8 *p);
extern void func_0202fd7c(u8 *p);

void func_ov003_0218fca0(u8 *param_1)
{
    u8 *iVar1;
    s32 r;

    iVar1 = func_020364cc(param_1);
    if (iVar1 != NULL) {
        *(Blk *)(param_1 + 0x26c) = *(Blk *)(iVar1 + 0xbc);
        *(Blk *)(param_1 + 0x278) = *(Blk *)(param_1 + 0x26c);
        func_02037450(param_1, 0x300);
    }
    r = func_02028124(param_1);
    if ((s32)*(u16 *)(param_1 + 0xfc) > ((0x1000 - r) >> 8) + 0x19) {
        func_0202fd7c(param_1);
        return;
    }
    return;
}
