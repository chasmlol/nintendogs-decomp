#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_0215bf9c;
void func_0210a854(u32 v);
void func_02104288(void);
u32 func_020fc8f8(u32 a, u32 b, u32 c, u32 d);

void func_0210856c(void)
{
    u8 *P;
    u8 *Q;
    u8 *R;
    u8 *S;
    u32 uVar1;

    if (*(u32 *)(*(u8 **)&data_0215be48 + 0xa8) == 6 && **(u32 **)&data_0215bf9c != 9) {
        func_0210a854(9);
    }
    *(u32 *)(*(u8 **)&data_0215be48 + 0x1d1c) = 19;
    func_0210a854(9);
    P = *(u8 **)&data_0215be48;
    if (*(u32 *)(P + 0xb8) == 2) {
        *(u32 *)(P + 0x1000 + 0xd0c) = 3;
        R = P + 0x1d0c;
        if (*(u32 *)(P + 0x1000 + 0xd0c) != 4) {
            *(u32 *)(R + 4) = *(u32 *)(P + 0x1000 + 0xd0c);
        }
    }
    func_02104288();
    Q = *(u8 **)&data_0215bf9c;
    S = Q + 0x160;
    uVar1 = func_020fc8f8(0, 0, 0x1af7, 0);
    *(u32 *)(S + 0x1c) = uVar1;
    *(u32 *)(S + 0x20) = 1;
}
