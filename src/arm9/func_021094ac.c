#pragma avoid_byte strb
#include "ctx.h"

extern u32 data_0215be48;
void func_02107f8c(u32 v);
void func_021041d8(void);
u32 func_02108498(void);
void func_02108380(u32 v);

void func_021094ac(void)
{
    u8 **G;
    u8 *P;
    u8 *S;
    u8 *L;
    u8 *Q;
    u8 *R;
    u32 v;
    u32 w;

    G = (u8 **)&data_0215be48;
    P = *G;
    S = P + 196;
    v = *(s32 *)(S + 0x240);
    L = S + 596;
    if (v == 0) {
        return;
    }
    v = *(u8 *)(L + 0xc);
    Q = P + 0x11000;
    w = *(u32 *)(L + 0x10);
    *(u8 *)(Q + 0x164) = (u8)v;
    R = *(u8 **)&data_0215be48 + 0x11000;
    *(u32 *)(R + 0x168) = w;
    switch (*(s32 *)(L + 0x8)) {
    case 0:
        func_02107f8c(27);
        R = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(R + 0xd1c) = 10;
        return;
    case 1:
        func_02107f8c(31);
        R = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(R + 0xd1c) = 15;
        func_021041d8();
        return;
    case 2:
        func_02107f8c(37);
        R = *(u8 **)&data_0215be48 + 0x1000;
        *(u32 *)(R + 0xd1c) = 20;
        if (func_02108498() < 4) {
            func_02108380(2);
            return;
        }
        func_02108380(3);
        return;
    }
}
