#include "ctx.h"

extern u8 *data_0215942c;
extern u8 *data_02159060;
extern void func_020b9880(void);

extern u32 func_020ad77c(u8 *p);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020ad7c8(u8 *p, u32 a);
extern void func_020ad6fc(u8 *p, u32 a);
extern u32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);

void func_020b9740(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        if (func_020ad77c(param_1) == 0) {
            return;
        }
        if (*(u16 *)data_0215942c == 0x11) {
            func_02097b94(2, 0xc53, 0, (u32)func_020b9880, 0);
            return;
        }
        func_02097b94(2, 0xc1d, 0, (u32)func_020b9880, 0);
        return;
    case 1:
        if (*(int *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        func_020ad7c8(param_1, 0x16);
        func_020ad6fc(param_1, 0);
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_020ad690(param_1) == 0) {
            return;
        }
        func_020ad8f0(param_1);
        return;
    }
}
