#include "ctx.h"

extern s32 func_0206fbf0(void);
extern u32 *func_0206e998(u32 a, u32 b);
extern u32 func_0206fd3c(void);
extern s32 func_0206ed40(u16 *a, u32 b, u32 c, u32 d, u32 e, u32 *f, u32 g);

s32 func_0206dbc4(u8 *param_1, s32 param_2, u16 *param_3)
{
    s32 iVar4;
    u8 *puVar5;
    u16 uVar6;
    s32 iVar1;
    u32 *puVar2;
    u32 uVar3;

    puVar5 = param_1 + 0x1d4 + param_2 * 0x68;
    iVar4 = 0;
    if (puVar5[0] == 2) {
        iVar1 = func_0206fbf0();
        if (iVar1 == 0) {
            uVar6 = 0xffff;
        } else {
            uVar6 = 1;
        }
        if (puVar5[1] == 6) {
            puVar2 = func_0206e998(*(u32 *)(puVar5 + 0x10), *(u32 *)(puVar5 + 0x14));
            uVar3 = func_0206fd3c();
            iVar4 = func_0206ed40(param_3, uVar6, puVar5[2], *(u32 *)(puVar5 + 0x10), *(u32 *)(puVar5 + 0x14), puVar2, uVar3);
            puVar5[0] = 1;
        }
    }
    return iVar4;
}
