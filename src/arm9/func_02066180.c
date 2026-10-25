#include "ctx.h"

extern s32 (*data_02150e24)(void);
extern u32 data_02150e20;
extern void func_02080b84(void);
extern void func_02066120(void);

void func_02066180(u32 param_1, u32 param_2)
{
    s32 (*pcVar2)(void);
    s32 iVar1;

    if ((param_2 & 0x3f) == 0x11) {
        pcVar2 = data_02150e24;
        iVar1 = 1;
        data_02150e20 = 1;
        if (pcVar2 != NULL) {
            iVar1 = pcVar2();
        }
        if (iVar1 != 0) {
            func_02066120();
        }
    } else {
        func_02080b84();
    }
}
