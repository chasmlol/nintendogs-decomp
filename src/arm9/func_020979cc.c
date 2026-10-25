#include "ctx.h"

extern u32 data_0214193c;
extern u8 data_0212f614[];

void func_02088754(u32 a, u32 b);

void func_020979cc(void)
{
    u32 idx;

    idx = data_0214193c;
    if (idx != 0xffffffff) {
        func_02088754(0, *(u32 *)(data_0212f614 + idx * 8));
        data_0214193c = 0xffffffff;
    }
}
