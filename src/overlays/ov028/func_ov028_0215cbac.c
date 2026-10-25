#include "ctx.h"

extern int data_ov028_0215df14;
extern int func_ov028_0215d6f0(void);
extern u32 func_ov028_0215d758(void);
extern int func_ov028_0215d704(void);

u32 func_ov028_0215cbac(void)
{
    int iVar1;
    u32 uVar2;

    iVar1 = func_ov028_0215d6f0();
    if (iVar1 != 0) {
        return 5;
    }
    uVar2 = func_ov028_0215d758();
    switch (uVar2) {
    case 0:
        return 0;
    case 1:
        return 1;
    case 2:
        iVar1 = func_ov028_0215d704();
        if (iVar1 != 0) {
            if (*(int *)data_ov028_0215df14 == 0) {
                return 2;
            }
            return 4;
        }
        return 3;
    case 3:
        return 3;
    default:
        return 5;
    }
}
