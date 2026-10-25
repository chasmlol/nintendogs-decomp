#include "ctx.h"

extern void *data_02159444;
extern u32 func_020f3b00(void);
extern s32 func_020f3af8(void);
extern void func_020af7f4(void *a);
extern void func_ov004_0215c614(void);

void func_020fbba0(int param_1)
{
    u32 uVar1;
    s32 iVar2;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 1:
        uVar1 = func_020f3b00();
        *(s32 *)(param_1 + 0xbc) = *(s32 *)(param_1 + 0xbc) - uVar1;
        iVar2 = func_020f3af8();
        if (*(s32 *)(param_1 + 0xbc) < -iVar2) {
            func_020af7f4(data_02159444);
            func_ov004_0215c614();
        }
        break;
    case 2:
        break;
    }
}
