#include "ctx.h"

extern int data_0215be48;
extern void func_020a0e04(int a);
extern void func_020a2284(int a, int b);

void func_021042d8(void)
{
    if (*(int *)(data_0215be48 + 0xa8) == 7) {
        func_020a0e04(10);
        return;
    }
    func_020a2284(0x37, 2);
}
