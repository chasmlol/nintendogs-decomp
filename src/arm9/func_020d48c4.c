#include "ctx.h"
extern u32 func_020d5fe4(u32 p);
extern u32 data_021594d0;
extern void func_020d6664(u32 a, u16 *b);
extern void func_020d4610(void);
void func_020d48c4(u32 param_1)
{
    u16 asStack_8[2];
    u32 iVar2;
    iVar2 = func_020d5fe4(param_1);
    if (iVar2 != 0) {
        *(u16 *)(*(u8 **)&data_021594d0 + 0x70) = 900;
        func_020d6664((u32)func_020d4610, asStack_8);
        return;
    }
}
