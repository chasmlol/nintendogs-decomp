#include "ctx.h"

extern int data_0215919c;
extern int data_02159198;
extern u32 func_020708d0(void *p);
extern void func_02070c18(void *p, int n);
extern void func_02070938(void *p, int n);

void func_0209eae4(int param_1)
{
    u8 *q = (u8 *)&data_02159198;
    void *p = (void *)&data_0215919c;

    if (*(int *)p == 0) {
        return;
    }
    if (*(int *)(q + 0x2c) == 0) {
        return;
    }
    if (func_020708d0(p) != 127) {
        return;
    }
    if (param_1 < 80) {
        func_02070c18(p, 30);
        *(int *)(q + 0x2c) = 0;
        return;
    }
    func_02070938(p, param_1 >> 3);
}
