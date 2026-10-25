#include "ctx.h"

extern u32 data_ov000_0215c584;

u32 func_020f1e1c(void);
void func_020f1c14(u32 a);
void func_0206c7f0(u32 a, u8 *b, u32 c);
void func_020fcf7c(void);

void func_ov000_0215c1fc(void)
{
    u32 bVar1;
    vu32 a0;
    vu32 a1;
    u8 *q;

    bVar1 = func_020f1e1c();
    if (bVar1 != 0) {
        func_020f1c14(bVar1);
    }
    q = *(u8 **)(*(u8 **)&data_ov000_0215c584);
    *(u16 *)(q + 2) = 0;
    a0 = 192;
    func_0206c7f0(a0, *(u8 **)(q + 4), (u32)*(u16 *)q << 3);
    q = *(u8 **)((*(u8 **)&data_ov000_0215c584) + 4);
    *(u16 *)(q + 2) = 0;
    a1 = 192;
    func_0206c7f0(a1, *(u8 **)(q + 4), (u32)*(u16 *)q << 3);
    func_020fcf7c();
}
