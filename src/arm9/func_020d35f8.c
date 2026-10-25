#include "ctx.h"

extern void func_020c9198(u32 *buf, u32 n);
extern void func_020d37b4(s32 *p, u32 *buf);
extern void func_020d3670(s32 *p, u32 *buf);
extern void func_020d075c(u32 *buf, s32 v);

void func_020d35f8(s32 *param_1, s32 param_2)
{
    u32 aiStack_30[10];

    switch (param_1[0]) {
    case 0:
        *(u16 *)((u8 *)param_1 + 4) = *(u16 *)((u8 *)param_1 + 4) + 0x20;
        func_020c9198(aiStack_30, *(u16 *)((u8 *)param_1 + 4));
        break;
    case 1:
        func_020d37b4(param_1, aiStack_30);
        break;
    case 2:
        func_020d3670(param_1, aiStack_30);
        break;
    }
    func_020d075c(aiStack_30, param_2);
}
