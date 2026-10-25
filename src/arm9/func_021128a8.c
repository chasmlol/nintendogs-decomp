#include "ctx.h"

extern int data_0215be48;
extern s16 func_02085cf4(int a, int b);
extern int func_02085ccc(int a, int b);

void func_021128a8(int param_1, int param_2, u32 param_3)
{
    int cnt;
    int iVar2;
    int iVar3;
    s16 uVar1;
    u32 sh;

    iVar2 = data_0215be48 + 0x1dec + param_1 * 0x294;
    iVar3 = *(int *)(*(int *)(iVar2 + 8) + param_2 * 8 + 0xc);
    uVar1 = func_02085cf4(*(int *)(iVar2 + 0xc), iVar3);
    iVar2 = func_02085ccc(*(int *)(data_0215be48 + param_1 * 0x294 + 0x1df8), iVar3);
    cnt = 0;
    if (uVar1 > 0) {
        do {
            sh = param_3;
            sh = sh & 0xf;
            sh = sh << 12;
            cnt = cnt + 1;
            *(u32 *)(iVar2 + 4) = (*(u32 *)(iVar2 + 4) & 0xffff0fff) | sh;
            iVar2 = iVar2 + 12;
        } while (cnt < (int)uVar1);
    }
}
