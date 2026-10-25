#include "ctx.h"

extern void func_020398a8(u8 *p);
extern void func_020398e4(u8 *p);
extern void func_02039920(u8 *p);
extern void func_0203996c(u8 *p);
extern void func_020399ac(u8 *p);
extern void func_020399ec(u8 *p);

void func_02039818(u8 *param_1)
{
    switch (*(s8 *)(param_1 + 0x8b)) {
    case 5:
        func_020398a8(param_1);
        return;
    case 4:
        func_020398e4(param_1);
        return;
    case 3:
        func_02039920(param_1);
        return;
    case 2:
        func_0203996c(param_1);
        return;
    case 1:
        func_020399ac(param_1);
        return;
    case 0:
        func_020399ec(param_1);
        break;
    }
}
