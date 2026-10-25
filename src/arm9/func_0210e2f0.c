#include "ctx.h"
extern u8 data_0215be48[];
extern u32 func_02003a44(void);
void func_0210e2f0(void)
{
    u8 *iVar2;
    iVar2 = *(u8 **)data_0215be48;
    if (*(u32 *)(iVar2 + 0xb4) == 3) {
        if (func_02003a44() == 0) {
            return;
        }
        *(u32 *)(*(u8 **)data_0215be48 + 0x4868) = 1;
        return;
    }
    if (*(u32 *)(iVar2 + 0xb4) == 4) {
        *(u32 *)(iVar2 + 0x4868) = 1;
        return;
    }
    if (*(u16 *)(iVar2 + 0x11160) == 0) {
        *(u32 *)(iVar2 + 0x4868) = 1;
    }
    return;
}
