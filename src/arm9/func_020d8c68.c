#include "ctx.h"
extern u8 data_0215942c[];
extern void func_020bd868(u8 *p);
extern u32 func_020f3af8(void);
extern void func_020d8d28(u8 *p);
extern void func_020bf1ec(u8 *p);
extern s32 func_ov004_0215c6b8(void);
void func_020d8c68(u8 *param_1)
{
    s16 sVar1;
    u32 uVar2;
    u32 uVar3;
    s32 iVar4;
    sVar1 = *(s16 *)(param_1 + 0x90);
    switch (sVar1) {
    case 2:
        func_020d8d28(param_1);
        return;
    case 1:
        func_020bd868(param_1);
        *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) = *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) & ~1;
        uVar3 = func_020f3af8();
        uVar2 = 0x5ec;
        *(u32 *)(param_1 + 0xbc) = uVar3;
        *(u32 *)(param_1 + 0xc0) = uVar2;
        return;
    case 4:
        func_020bd868(param_1);
        *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) = *(u16 *)(*(u8 **)(param_1 + 0x18c) + 0x20) & ~1;
        func_020bf1ec(param_1);
        if (*(u16 *)*(u8 **)data_0215942c == 9 && (iVar4 = func_ov004_0215c6b8(), iVar4 != 0)) {
            return;
        }
        *(u16 *)(param_1 + 0x162) = 0;
        return;
    }
}
