#include "ctx.h"

extern void func_02096c20(u32 a, u32 b, u32 c);
extern void func_02096c30(u32 a, u32 b, u32 c, u32 d);

void func_02096a4c(u8 *param_1)
{
    u16 uVar1;
    u16 uVar2;

    uVar1 = 0;
    do {
        func_02096c20(1, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_02096c20(2, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 3);
    func_02096c30(0, 0, 0, (u32)param_1);
    func_02096c20(6, 0, 0);
    func_02096c20(3, 0, 0);
    uVar1 = 0;
    do {
        func_02096c20(4, uVar1, 0);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
    uVar1 = 0;
    do {
        uVar2 = 0;
        do {
            func_02096c20(5, uVar1, uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 20);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 5);
}
