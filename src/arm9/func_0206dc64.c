#include "ctx.h"

extern int func_0206fbf0(void);
extern u32 *func_0206e998(u32 a, u32 b);
extern u32 func_0206fd3c(void);
extern int func_0206ed40(u16 *a, u32 b, u32 c, u32 d, u32 e, u32 *f, u32 g);

int func_0206dc64(int param_1, int param_2, u16 *param_3)
{
    int iVar5;
    u8 *puVar4;
    u32 uVar6;
    u32 *puVar2;
    u32 uVar3;
    int iVar1;

    iVar5 = 0;
    puVar4 = (u8 *)(param_1 + 0x1d4 + param_2 * 0x68);
    if (*puVar4 == 2) {
        iVar1 = func_0206fbf0();
        if (iVar1 == 0) {
            uVar6 = 0xffff;
        } else {
            uVar6 = 1;
        }
        if (puVar4[1] == 6) {
            puVar2 = func_0206e998(*(u32 *)(puVar4 + 0x10), *(u32 *)(puVar4 + 0x14));
            if (puVar2 != NULL) {
                uVar3 = func_0206fd3c();
                iVar5 = func_0206ed40(param_3, uVar6, puVar4[2], *(u32 *)(puVar4 + 0x10),
                                      *(u32 *)(puVar4 + 0x14), puVar2, uVar3);
                *puVar4 = 1;
            }
        }
    }
    return iVar5;
}
