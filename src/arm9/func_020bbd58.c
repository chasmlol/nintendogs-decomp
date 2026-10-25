#include "ctx.h"

extern u8 *data_02159464;
void func_020d8a10(u8 *p, int v);

void func_020bbd58(int param_1)
{
    switch (param_1) {
    case 0:
        func_020d8a10(data_02159464 + 0x88, 1);
        break;
    case 1:
        func_020d8a10(data_02159464 + 0x88, 2);
        break;
    }
}
