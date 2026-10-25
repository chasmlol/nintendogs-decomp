#include "ctx.h"

extern void func_0207d240(s32 a, s32 b, u16 *c);
extern void func_02003980(void);

typedef struct {
    u16 a;
    u16 b;
    u32 c;
} Loc;

u32 func_020037a8(s32 *param_1, u16 param_2)
{
    Loc loc;
    loc.a = param_2;
    loc.b = 0;
    loc.c = 0;
    switch (*param_1) {
    case 0x45585048:
        func_0207d240((s32)param_1, (s32)func_02003980, (u16 *)&loc);
        break;
    case 0x46524d48:
        break;
    }
    return loc.c;
}
