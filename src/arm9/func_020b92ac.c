#include "ctx.h"

extern void func_020b9880(void);
extern s32 func_020ad77c(u8 *p);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020b9358(u8 *p);
extern s32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);

void func_020b92ac(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 46)) {
    case 0:
        if (func_020ad77c(param_1) == 0) {
            return;
        }
        *(u16 *)(param_1 + 42) = 0;
        func_02097b94(2, 0xc1f, 0, (u32)func_020b9880, 0);
        return;
    case 1:
        func_020b9358(param_1);
        return;
    case 4:
        if (func_020ad690(param_1) == 0) {
            return;
        }
        func_020ad8f0(param_1);
        break;
    case 2:
    case 3:
        break;
    }
}
