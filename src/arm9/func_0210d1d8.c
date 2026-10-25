#include "ctx.h"
typedef volatile int vs32;

extern void func_02112978(int a, int b, int c, int d);

void func_0210d1d8(int param_1)
{
    u8 *p = (u8 *)param_1;
    if (*(int *)(p + 0x870) <= 0) {
        return;
    }
    *(int *)(p + 0x870) = *(int *)(p + 0x870) - 1;
    if (*(vs32 *)(p + 0x870) != 0) {
        return;
    }
    func_02112978(2, 5, 0, 0);
    func_02112978(2, 6, 0, 0);
    func_02112978(2, 9, 0, 0);
    func_02112978(2, 7, 0, 0);
    func_02112978(2, 8, 0, 0);
    func_02112978(2, 10, 0, 0);
}
