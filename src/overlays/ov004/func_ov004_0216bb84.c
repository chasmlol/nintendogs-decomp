#include "ctx.h"

struct Vec3 {
    u32 v[3];
};

extern int func_02035770(int, int);
extern int func_0202fcd4(int);
extern void func_02027654(int, void *);
extern void func_0203942c(int);
extern void func_02037450(int, int);
extern int func_ov004_0216be28(int, int);
extern void func_0203e908(int, int);

void func_ov004_0216bb84(int param_1)
{
    int iVar1;
    int iVar2;

    iVar1 = func_02035770(param_1, 0x2d);
    iVar2 = func_0202fcd4(param_1);
    if (iVar2 != 0) {
        func_02027654(iVar2, (void *)(param_1 + 0x26c));
        *(struct Vec3 *)(param_1 + 0x3b4) = *(struct Vec3 *)(param_1 + 0x26c);
        func_0203942c(param_1);
        func_02037450(param_1, 0x300);
    }
    iVar2 = func_ov004_0216be28(param_1, iVar2);
    if (iVar2 == 0) {
        if (iVar1 != 0) {
            func_0203e908(param_1, 0x4a3);
            return;
        }
        return;
    }
}
