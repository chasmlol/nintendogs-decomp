#include "ctx.h"

extern u8 *data_0215be48;
extern void func_020fbf30(u8 *a, s32 b);
extern void func_02113090(s32 a, s32 b);
extern void func_021130c4(s32 a, s32 b);
extern void func_02112ed0(s32 a, s32 b);
extern void func_02112e74(s32 a, s32 b);
extern void func_020fc084(u8 *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h);

void func_02119ddc(u8 *param_1)
{
    u32 uVar1;
    u8 *iVar2;

    uVar1 = ((s32)(*(vu16 *)0x04000304 & 0x8000) >> 15) == 0;
    if (uVar1 == 0) {
        iVar2 = data_0215be48 + 0x53f4;
        if (*(s32 *)(iVar2 + 0x28) != 0) {
            func_020fbf30(param_1 + 8, *(s32 *)(iVar2 + 4));
            func_020fbf30(param_1 + 0x30, *(s32 *)(iVar2 + 8));
            func_020fbf30(param_1 + 0x58, *(s32 *)(iVar2 + 0xc));
            func_020fbf30(param_1 + 0x80, *(s32 *)(iVar2 + 0x10));
        }
        if (*(s32 *)(param_1 + 4) == 1) {
            iVar2 = data_0215be48 + 0x1113c;
            func_02113090(0, 0);
            func_021130c4(0, *(s32 *)(iVar2 + 4));
            func_02112ed0(0, *(s32 *)(iVar2 + 8));
            func_02112e74(0, *(s32 *)(iVar2 + 0xc));
            iVar2 = data_0215be48 + 0x53f4;
            func_020fc084(param_1 + 8, 0, 2, 0xe, 2, *(s32 *)(iVar2 + 4), 0, 0);
            func_020fc084(param_1 + 0x30, 0, 2, 0x11, 2, *(s32 *)(iVar2 + 8), 0, 0);
            func_020fc084(param_1 + 0x58, 0, 2, 0x13, 2, *(s32 *)(iVar2 + 0xc), 0, 0);
            func_020fc084(param_1 + 0x80, 0, 2, 0x16, 2, *(s32 *)(iVar2 + 0x10), 0, 0);
        }
    }
    *(u32 *)(param_1 + 4) = uVar1;
}
