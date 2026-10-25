#include "ctx.h"

typedef struct {
    u32 w[3];
} Tri;

u32 func_01ffdb08(u32 a);
u32 func_020341fc(u32 a);
void func_020d1cd8(u8 *p);

void func_020cfa3c(u8 *param_1, u32 param_2)
{
    u32 iVar2;
    iVar2 = func_01ffdb08(param_2);
    if (iVar2 == 0) {
        return;
    }
    if (func_020341fc(iVar2) != 0) {
        return;
    }
    *(u32 *)(param_1 + 0x6c) = 0;
    *(u32 *)(param_1 + 0x30) = 4;
    *(u16 *)(param_1 + 0x3c) = (u16)param_2;
    *(u32 *)(param_1 + 0x44) = 0;
    *(u16 *)(param_1 + 0x50) = 60;
    *(Tri *)(param_1 + 0x54) = *(Tri *)(param_1 + 0xc);
    func_020d1cd8(param_1);
}
