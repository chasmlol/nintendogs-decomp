#include "ctx.h"

void func_02117ac8(u8 *p, u32 v);
s32 func_021178a8(u32 *p);
s32 func_01ffdb08(s32 v);

void func_021113a8(u8 *param_1)
{
    s32 i;
    u8 *iVar3;
    u32 *piVar2;
    iVar3 = param_1 + 0x1c84;
    func_02117ac8(param_1 + 0xb8, 0);
    func_02117ac8(param_1 + 0xd8, 0);
    func_02117ac8(param_1 + 0xf8, 0);
    if (*(s16 *)(iVar3 + 4) < 0) {
        piVar2 = (u32 *)(param_1 + 4);
        i = 0;
        do {
            if (func_021178a8(piVar2) != 0) {
                if (func_01ffdb08((s16)i) != 0) {
                    *(s16 *)(iVar3 + 4) = (s16)i;
                }
            }
            i = i + 1;
            piVar2 = piVar2 + 15;
        } while (i < 3);
    }
}
