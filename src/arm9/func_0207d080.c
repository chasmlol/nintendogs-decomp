#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u16 cnt;
    u16 off;
} Obj;

void func_0207d080(Obj *param_1, u8 *param_2)
{
    u32 off = param_1->off;
    *(u32 *)(param_2 + off + 4) = 0;
    *(u32 *)(param_2 + off) = 0;
    param_1->a = (u32)param_2;
    param_1->b = (u32)param_2;
    param_1->cnt = param_1->cnt + 1;
}
