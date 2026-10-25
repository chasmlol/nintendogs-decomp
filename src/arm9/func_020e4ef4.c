#include "ctx.h"

extern void func_020e4f4c(u8 *p);
extern void func_020e59c4(u8 *p);
extern void func_020e5594(u8 *p);

void func_020e4ef4(u8 *param_1)
{
    switch (*(s16 *)(param_1 + 0x90)) {
    case 0:
        break;
    case 2:
        func_020e59c4(param_1);
        return;
    case 3:
        func_020e5594(param_1);
        return;
    case 1:
        func_020e4f4c(param_1);
        break;
    }
}
