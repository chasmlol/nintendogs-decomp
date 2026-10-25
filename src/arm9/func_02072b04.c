#include "ctx.h"

extern u32 *func_02071a40(u32 a);
extern int func_02072934(u32 a, u32 b, int *c, int d, u32 *e);
extern u32 func_02071778(u32 a);
extern u32 func_0207275c(u32 a, int *b, int c);

u32 func_02072b04(u32 param_1, u32 param_2, int *param_3, int param_4, u32 *param_5)
{
    u32 *puVar1;
    int iVar2;
    u32 uVar4;

    puVar1 = func_02071a40(param_1);
    if (puVar1 == NULL) {
        return 2;
    }
    iVar2 = func_02072934(*(u16 *)((u8 *)puVar1 + 4), param_2, param_3, param_4, NULL);
    if (iVar2 == 0) {
        if ((param_2 & 1) != 0) {
            uVar4 = func_0207275c(*puVar1, param_3, param_4);
            if (uVar4 == 0) {
                return 6;
            }
        } else {
            uVar4 = func_02071778(*puVar1);
        }
        if (param_5 != NULL) {
            *param_5 = uVar4;
        }
        return 0;
    }
    return iVar2;
}
