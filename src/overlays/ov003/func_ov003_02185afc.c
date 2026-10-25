#include "ctx.h"

extern int func_02035744(int a, int b);
extern void func_020393d8(int a, int b);
extern int func_0203567c(int a);
extern void func_02022b7c(int a);
extern void func_ov003_021894ec(int a, int b, int c, int d);

void func_ov003_02185afc(int param_1)
{
    int iVar1;

    iVar1 = func_02035744(param_1, 6);
    if (iVar1 != 0) {
        switch (*(s16 *)(param_1 + 0x152)) {
        case 0x1e3:
            func_020393d8(param_1, 0x23c);
            break;
        case 0x1e4:
            func_020393d8(param_1, 0xfdc4);
            break;
        }
    }
    iVar1 = func_0203567c(param_1);
    func_02022b7c(param_1);
    func_ov003_021894ec(param_1, 0, 0x1ff, iVar1);
}
