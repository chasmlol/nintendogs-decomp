#include "ctx.h"

extern u32 data_02159060;
extern void func_020ae564(void);
extern void func_02097b94(s32 a, s32 b, s32 c, u32 d, s32 e);

void func_020ab4fc(u8 *param_1)
{
    s16 sVar1;

    sVar1 = *(s16 *)(param_1 + 0x120);
    if (sVar1 < 0) {
        return;
    }
    if (*(s16 *)(*(u8 **)&data_02159060 + 0x6c) != 0) {
        return;
    }
    if (sVar1 > 0) {
        *(s16 *)(param_1 + 0x120) = sVar1 - 1;
    }
    if (*(s16 *)(param_1 + 0x120) != 0) {
        return;
    }
    if ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15 == 1) {
        func_02097b94(2, 0xc44, 0, (u32)func_020ae564, 0);
    } else {
        func_02097b94(2, 0xc44, 0, (u32)func_020ae564, 1);
    }
    *(s16 *)(param_1 + 0x120) = 0x708;
}
