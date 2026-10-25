#include "ctx.h"

extern void func_020b19e4(void);
extern u32 func_02080858(void);
extern void func_020b153c(void);

void func_020b1438(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;

    switch (*(u16 *)(param_1 + 4)) {
    case 0:
        *(u16 *)(param_1 + 4) = 0x500;
        *(u16 *)(param_1 + 6) = 0;
        return;
    case 0x500:
        *(s16 *)(param_1 + 6) = *(s16 *)(param_1 + 6) + 1;
        if (*(s16 *)(param_1 + 6) > 30) {
            func_020b19e4();
        }
        iVar1 = *(s16 *)(param_1 + 6);
        if (iVar1 >= 30 && iVar1 % 30 == 0) {
            uVar2 = func_02080858();
            *(s16 *)(param_1 + 0x1c) = (s16)((((u32)(u16)(uVar2 * 0x10dcd + 1)) * 21u) >> 16);
        }
        if (*(s16 *)(param_1 + 0x1c) > 0) {
            *(s16 *)(param_1 + 0x1c) = *(s16 *)(param_1 + 0x1c) - 1;
        }
        if (*(s16 *)(param_1 + 0x1c) == 0) {
            *(s16 *)(param_1 + 0x1c) = -1;
            func_020b153c();
        }
        if (*(s16 *)(param_1 + 6) > 200) {
            *(u16 *)(param_1 + 4) = 1;
            *(u32 *)(param_1 + 0xc) = 1;
        }
        return;
    }
}
