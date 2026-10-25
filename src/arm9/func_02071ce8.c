#include "ctx.h"

extern u32 data_02152260;

typedef struct { u32 a; u32 b; } T8;

s32 func_02088138(u8 *p, u8 *s);
void func_02088364(u8 *p);
s32 func_02088064(u8 *p, T8 v);
s32 func_02071acc(u8 *p, u32 a, u32 b);

void func_02071ce8(u8 *param_1, u8 *param_2, u32 param_3, u32 param_4)
{
    s32 iVar2;

    *(u32 *)(param_1 + 0x88) = 0;
    *(u32 *)(param_1 + 0x80) = 0;
    *(u32 *)(param_1 + 0x84) = 0;
    if (func_02088138(param_1 + 120, param_2) == 0) {
        return;
    }
    func_02088364(param_1 + 52);
    iVar2 = func_02088064(param_1 + 52, *(T8 *)(param_1 + 120));
    if (iVar2 == 0) {
        return;
    }
    *(u32 *)(param_1 + 0x30) = 1;
    iVar2 = func_02071acc(param_1, param_3, param_4);
    if (iVar2 != 0) {
        *(u8 **)&data_02152260 = param_1;
    }
}
