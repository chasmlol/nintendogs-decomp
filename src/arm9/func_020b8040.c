#include "ctx.h"

extern u8 *data_02159060;

void func_020b8174(void);
s32 func_020ad77c(u8 *p);
void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_0209a970(void);
void func_020ad7c8(u8 *p, u32 a);
void func_020ad6fc(u8 *p, u32 a);
void func_0209a93c(void);
s32 func_020ad690(u8 *p);
void func_020ad8f0(u8 *p);

void func_020b8040(u8 *param_1)
{
    s32 bVar1;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        bVar1 = func_020ad77c(param_1);
        if (bVar1 != 0) {
            *(u16 *)(param_1 + 0x2a) = 0;
        }
        return;
    case 1:
        if (*(s16 *)(param_1 + 0x2a) == 0) goto LAB_zero;
        if (*(s16 *)(param_1 + 0x2a) == 1) goto LAB_one;
        return;
    LAB_zero:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        *(u16 *)(param_1 + 0x2a) = 1;
        func_02097b94(2, 0xcfc, 0, (u32)func_020b8174, 0);
        func_0209a970();
        return;
    LAB_one:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        func_020ad7c8(param_1, 2);
        func_020ad6fc(param_1, 0);
        func_0209a93c();
        return;
    case 2:
        break;
    case 3:
        break;
    case 4:
        bVar1 = func_020ad690(param_1);
        if (!bVar1) {
            return;
        }
        *(u16 *)(param_1 + 0x2a) = 0;
        func_020ad8f0(param_1);
    }
    return;
}
