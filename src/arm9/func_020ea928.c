#include "ctx.h"

extern void func_020eaa20(u32 p);
extern BOOL func_0210948c(void);
extern void func_020c5fec(u32 p);
extern u32 func_02085cb8(s32 a);
extern s32 func_02085cc0(s32 a);
extern void func_0207c910(s32 a, s32 b, s32 c, s32 d);

void func_020ea928(u32 param_1)
{
    s32 iVar4;
    u32 uVar2;
    s32 iVar3;
    BOOL bVar1;

    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 1:
        break;
    case 2:
        bVar1 = func_0210948c();
        if (!bVar1) {
            return;
        }
        iVar4 = *(s32 *)(param_1 + 0x214);
        func_020c5fec(param_1);
        uVar2 = func_02085cb8(*(s32 *)(iVar4 + 0x14));
        iVar3 = func_02085cc0(*(s32 *)(iVar4 + 0x14));
        func_0207c910(0x23, 0, iVar3, uVar2);
        func_0207c910(0x19, 0, *(s32 *)(iVar4 + 0x34) + 0xc, *(s32 *)(*(s32 *)(iVar4 + 0x34) + 8));
        func_0207c910(0x15, 0, *(s32 *)(*(s32 *)(iVar4 + 0x2c) + 0x14), *(s32 *)(*(s32 *)(iVar4 + 0x2c) + 0x10));
        func_0207c910(0x1e, 0, *(s32 *)(*(s32 *)(iVar4 + 0x28) + 0xc), 0x1c0);
        func_0207c910(0x1f, 0, *(s32 *)(*(s32 *)(iVar4 + 0x30) + 0xc), 0x1c0);
        *(s32 *)(iVar4 + 0x2b8) = 1;
        return;
    case 3:
        func_020eaa20(param_1);
    }
    return;
}
