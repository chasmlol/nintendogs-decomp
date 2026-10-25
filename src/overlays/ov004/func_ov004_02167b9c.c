#include "ctx.h"

extern int func_02035744(int, int);
extern int func_02028124(int);
extern int func_0202518c(int, int, int);
extern void func_ov004_02167c70(int, int);

void func_ov004_02167b9c(int param_1)
{
    int iVar1;
    u32 uVar3;
    int x;
    s64 p;

    if (*(s8 *)(param_1 + 0xa0) == 0) {
        uVar3 = 0x100;
    } else {
        iVar1 = func_02035744(param_1, 10);
        if (iVar1 != 0) {
            uVar3 = 0x112;
        } else {
            uVar3 = 0x100;
        }
    }
    x = func_02028124(param_1);
    p = (s64)x * 1280;
    iVar1 = func_0202518c(param_1, 0x12, (s32)((p + 0x800) >> 12));
    if (iVar1 == 0) {
        x = func_02028124(param_1);
        p = (s64)x * 320;
        func_0202518c(param_1, 0x22, (s32)((p + 0x800) >> 12));
    }
    func_ov004_02167c70(param_1, uVar3);
}
