#include "ctx.h"

typedef struct {
    u8 pad[0x24];
    u32 f24;
} Obj;

extern Obj data_0214efdc;

u32 func_0200616c(void);
void func_02006420(u32 v, Obj *o);

void func_02006360(void)
{
    u32 uVar1;

    if (data_0214efdc.f24 != 0) {
        uVar1 = func_0200616c();
    } else {
        uVar1 = (u16)((((*(vu16 *)0x04000130) | (*(vu16 *)0x027fffa8)) ^ 0x2fff) & 0x2fff);
    }
    func_02006420(uVar1, &data_0214efdc);
}
