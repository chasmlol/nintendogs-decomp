#include "ctx.h"

extern u32 data_02159464;
void func_020d9b58(int *a, int b);

void func_020bbc74(int param_1)
{
    switch (param_1) {
    case 0:
        func_020d9b58((int *)((u8 *)data_02159464 + 0x27c), 2);
        break;
    case 1:
        func_020d9b58((int *)((u8 *)data_02159464 + 0x27c), 1);
        break;
    }
}
