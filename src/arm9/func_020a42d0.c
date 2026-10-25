#include "ctx.h"

extern u8 data_02159198[];
extern u32 func_01ffdb08(int a);
extern int func_02027540(u32 a);
extern void func_020292c4(u32 a, int b, u8 c);

void func_020a42d0(void)
{
    s16 sVar1;
    u32 uVar2;
    int iVar3;
    int lvl;
    int iVar5;

    sVar1 = *(s16 *)(data_02159198 + 0x32);
    lvl = 4;
    if (sVar1 < -0x28) {
        lvl = 1;
    }
    else if (sVar1 < 0x28) {
        lvl = 2;
    }
    else if (sVar1 < 0x55) {
        lvl = 3;
    }
    iVar5 = 0;
    do {
        uVar2 = func_01ffdb08(iVar5);
        if ((uVar2 != 0) && (iVar3 = func_02027540(uVar2), *(u16 *)(iVar3 + 0x26) < 5)) {
            func_020292c4(uVar2, 0x5a, (u8)lvl);
        }
        iVar5 = (s16)(iVar5 + 1);
    } while (iVar5 < 3);
}
