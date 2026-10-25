#include "ctx.h"

typedef struct { u32 w0; u16 h0; u16 h1; u32 w2; } Blk;

extern u32 data_02156028;
extern Blk data_0215602c;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern u32 *func_02087cf8(u32 a, u32 b);
extern u32 func_02087dc0(u32 a, u32 b);

u32 func_020876dc(u32 *param_1, u32 param_2, u32 param_3)
{
    u32 uVar4;
    u32 uVar1;
    u32 uVar5;
    u32 irq;

    uVar5 = 0;
    irq = func_02080b08();

    if (func_02087cf8(param_2, param_3) == NULL) {
        uVar4 = data_02156028;
        if (uVar4 == 0) {
            *(u32 *)&data_02156028 = (u32)param_1;
            data_0215602c.w0 = (u32)param_1;
            data_0215602c.w2 = 0;
            data_0215602c.h1 = 0;
            data_0215602c.h0 = 0;
        } else {
            for (uVar1 = *(u32 *)(uVar4 + 4); uVar1 != 0; uVar1 = *(u32 *)(uVar1 + 4)) {
                uVar4 = uVar1;
            }
            *(u32 *)(uVar4 + 4) = (u32)param_1;
            param_1[2] = uVar4;
        }
        uVar4 = func_02087dc0(param_2, param_3);
        *param_1 = uVar4;
        uVar5 = 1;
        param_1[4] = param_1[4] | 1;
    }
    func_02080b1c(irq);
    return uVar5;
}
