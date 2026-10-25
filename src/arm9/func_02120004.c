#include "ctx.h"
extern u8 data_0215be48[];
extern u32 func_02003a60(void);
extern void func_020a4cbc(void);
extern void func_020bbfe8(void);
void func_02120004(void)
{
    u8 *iVar2;
    iVar2 = *(u8 **)data_0215be48;
    if (*(u16 *)(iVar2 + 0x11160) != 0) {
        return;
    }
    if (*(u32 *)(iVar2 + 0xb4) == 0x17) {
        if (func_02003a60() == 0) {
            return;
        }
        func_020a4cbc();
        func_020bbfe8();
        *(u32 *)(*(u8 **)data_0215be48 + 0x4868) = 1;
        return;
    }
    *(u32 *)(iVar2 + 0x4868) = 1;
}
