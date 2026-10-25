#include "ctx.h"

extern u8 *data_0215be48;
void func_02003dc4(int n);
void func_02111be4(int a, s16 b, s16 c);

void func_0211cc18(int param_1)
{
    u8 *base;
    s16 *q;
    int st;

    base = (u8 *)param_1;
    st = *(int *)(data_0215be48 + 0xbc);
    switch (st) {
    case 0x17:
        func_02003dc4(10);
        q = (s16 *)(base + 0x1c00);
        func_02111be4(0x14, q[12], q[13]);
        break;
    case 0x1b:
        q = (s16 *)(base + 0x1c00);
        func_02111be4(0x14, q[12], q[13]);
        break;
    }
}
