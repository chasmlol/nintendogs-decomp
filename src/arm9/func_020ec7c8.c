#include "ctx.h"

extern u8 *data_0215be3c;
u8 *func_020ec138(void);
void func_020ecc20(u8 *obj, u32 a, u32 b);
u32 func_020eb75c(u32 idx);

void func_020ec7c8(s32 param_1, s32 param_2, u32 param_3)
{
    u8 *obj;
    u32 r;

    if (param_1 == 0) goto body;
    if (param_1 == 1) {
        *(u32 *)(data_0215be3c + param_2 * 4 + 8) = 0;
    }
    return;
body:
    obj = *(u8 **)(func_020ec138() + param_2 * 12 + 0x154);
    func_020ecc20(obj, param_3, param_2);
    r = func_020eb75c(param_2);
    *(u32 *)(obj + 0x90) = r;
    /* tail pinned in asm: the literal lands in r1 after the str, as in the target */
    asm { ldr r1, =data_0215be3c }
    asm { mov r0, param_2, lsl #1 }
    asm { ldr r2, [r1] }
    asm { add r2, r2, param_2, lsl #2 }
    asm { str obj, [r2, #8] }
    asm { ldr r1, [r1] }
    asm { mov r2, #2 }
    asm { strh r2, [r1, r0] }
}
