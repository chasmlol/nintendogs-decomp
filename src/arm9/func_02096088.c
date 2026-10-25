#include "ctx.h"

extern int data_02159038;
extern void func_02096264(int a, int b, int c);

void func_02096088(int *param_1)
{
    u16 uVar3;

    func_02096264(data_02159038, 0, 0);
    func_02096264(data_02159038, 6, 0);
    uVar3 = 0;
    do {
        func_02096264(data_02159038, 1, (u16)(s16)uVar3);
        uVar3 = (u16)(uVar3 + 1);
    } while (uVar3 < 3);
    uVar3 = 0;
    do {
        func_02096264(data_02159038, 2, (u16)(s16)uVar3);
        uVar3 = (u16)(uVar3 + 1);
    } while (uVar3 < 3);
    func_02096264((int)param_1, 3, 0);
    uVar3 = 0;
    do {
        func_02096264((int)param_1, 4, uVar3);
        uVar3 = (u16)(uVar3 + 1);
    } while (uVar3 < 5);
    uVar3 = 0;
    do {
        func_02096264((int)param_1, 5, uVar3);
        uVar3 = (u16)(uVar3 + 1);
    } while (uVar3 < 5);
}
