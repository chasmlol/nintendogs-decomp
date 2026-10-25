#include "ctx.h"

extern void func_020d0e24(s32 *p);
extern void func_020d0ba8(s32 *p);
extern void func_020d0a54(s32 *p);
extern void func_020d0900(s32 *p);

typedef struct {
    u32 w[10];
} Blk10;

void func_020d0858(s32 *param_1)
{
    s32 iVar1;

    switch (param_1[3]) {
    case 0:
        iVar1 = param_1[2] * 0x2c + param_1[0];
        *(Blk10 *)(param_1 + 4) = *(Blk10 *)(iVar1 + 0x20);
        return;
    case 1:
        func_020d0e24(param_1);
        return;
    case 2:
        func_020d0ba8(param_1);
        return;
    case 3:
        func_020d0a54(param_1);
        return;
    case 4:
        func_020d0900(param_1);
        return;
    }
}
