#include "ctx.h"

extern u8 data_02151804[];
extern void func_02070434(void *p, int arg);

void func_02070ba8(u32 param_1, u32 param_2, int param_3)
{
    int iVar2;
    u8 *puVar1;

    iVar2 = 0;
    puVar1 = data_02151804;
    do {
        if (((puVar1[0x2c] != 0) && (*(u16 *)(puVar1 + 0x34) == 2)) &&
            (*(u16 *)(puVar1 + 0x38) == param_1)) {
            if (*(u16 *)(puVar1 + 0x3a) == param_2) {
                func_02070434(puVar1, param_3);
            }
        }
        iVar2 = iVar2 + 1;
        puVar1 = puVar1 + 0x44;
    } while (iVar2 < 16);
}
