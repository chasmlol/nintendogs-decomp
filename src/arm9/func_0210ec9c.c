#include "ctx.h"

extern s32 *data_0215bfbc;
extern void func_0207df9c(s32 a, s32 *b);
extern u64 func_0206c7bc(u16 a, s32 *b, u32 c);
extern void func_0207dbe0(s32 a, s32 b);

void func_0210ec9c(s32 param_1, s32 param_2, u8 *param_3, s32 param_4)
{
    s32 *piVar1;
    s32 iVar3;
    s32 *piVar2;
    vu16 zero;

    piVar1 = data_0215bfbc;
    if (piVar1[0] != 0) {
        piVar2 = piVar1 + 2;
        iVar3 = 0;
        do {
            if (piVar2[2] != 0) {
                func_0207df9c(piVar2[3], piVar1);
                zero = 0;
                piVar1 = (s32 *)(u32)(func_0206c7bc(zero, piVar2, 0x10) >> 32);
            }
            iVar3 = iVar3 + 1;
            piVar2 = piVar2 + 4;
        } while (iVar3 < 10);
        func_0207dbe0(data_0215bfbc[1], 0x434e535f);
        *data_0215bfbc = 0;
    }
}
