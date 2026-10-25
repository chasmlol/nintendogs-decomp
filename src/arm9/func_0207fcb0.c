#include "ctx.h"
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 irq);
extern u64 func_0207f554(u16 *a, u32 b);
extern u64 func_0205e270(u32 a, u32 b);
extern void func_0207f4e0(u16 *p);

u32 func_0207fcb0(u16 *param_1, u32 *param_2, u32 param_3, s32 param_4)
{
    u32 irq;
    u32 uVar1;
    u32 bit;
    u64 uVar3;

    irq = func_02080b08();
    if (*(s32 *)(param_1 + 8) == 0) {
        uVar1 = *(s32 *)(param_1 + 8);
        bit = param_3 & 1;
        do {
            if (bit == 0) {
                func_02080b1c(irq);
                return 0;
            }
            uVar3 = func_0207f554(param_1 + 1, uVar1);
            uVar1 = (u32)(uVar3 >> 32);
        } while (*(s32 *)(param_1 + 8) == 0);
    }
    if (param_2 != NULL) {
        *param_2 = *(u32 *)(*(u32 *)(param_1 + 2) + *(s32 *)(param_1 + 6) * 4);
    }
    uVar3 = func_0205e270(*(s32 *)(param_1 + 6) + 1, *(u32 *)(param_1 + 4));
    *(s32 *)(param_1 + 6) = (s32)(uVar3 >> 32);
    *(s32 *)(param_1 + 8) = *(s32 *)(param_1 + 8) - 1;
    func_0207f4e0(param_1);
    func_02080b1c(irq);
    return 1;
}
