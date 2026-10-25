#include "ctx.h"

extern u8 *data_0215be48;
void func_020a0e04(int n);
void func_020a2284(int a, int b);

void func_02104324(void)
{
    if (*(int *)(data_0215be48 + 0xa8) == 7) {
        func_020a0e04(9);
        return;
    }
    func_020a2284(0x37, 1);
    return;
}
