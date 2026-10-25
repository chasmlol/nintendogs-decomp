#include "ctx.h"

extern void func_ov004_0216c504(int);
extern void func_ov004_021692e4(int, int);
extern void func_0209f59c(int);

void func_ov004_02169298(int param_1)
{
    if (*(u16 *)(param_1 + 0xfc) < 400) {
        func_ov004_0216c504(param_1);
    }
    func_ov004_021692e4(param_1, 0);
    if (*(s16 *)(param_1 + 0xea) != 0x4c6) {
        func_0209f59c(1);
    }
}
