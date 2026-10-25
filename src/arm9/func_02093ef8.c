#pragma avoid_byte strb
#include "ctx.h"
extern void func_0200719c(u32 *a, u32 *b);
extern u64 func_02080cf4(void);
extern void func_02080d08(u8 *a);
extern void func_02080d84(u8 *a);
extern u8 data_02159034[];

typedef struct {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 pad;
    u32 w4;
    u32 w5;
    u32 w6;
    u8 ab[80];
} Loc;

static inline void SwapB(u32 v, u8 *p)
{
    *(u8 *)(p) = (u8)(v);
}

void func_02093ef8(u32 param_1)
{
    u8 *iVar1;
    u8 *r4;
    u8 *q58, *q59, *q60, *q61, *q62, *q63;
    Loc L;
    u64 uVar2;

    iVar1 = *(u8 **)(*(u8 **)data_02159034 + 0x141c);
    r4 = iVar1 + 0x60;
    if (*(u16 *)(r4 + 0x20) != param_1) {
        *(s16 *)(r4 + 0x20) = (s16)param_1;
        func_0200719c(&L.w0, &L.w4);
        uVar2 = func_02080cf4();
        func_02080d08(L.ab);
        *(u32 *)(r4 + 0x2c) = (u32)(uVar2 & 0xffffffffULL);
        *(u32 *)(r4 + 0x30) = (u32)((uVar2 >> 32) & 0xffffffffULL);
        func_02080d84(r4 + 0x34);
        q58 = r4 + 0x3a;
        SwapB(L.w6, q58);
        q60 = r4 + 0x3c;
        q59 = r4 + 0x3b;
        SwapB(L.w5, q59);
        q61 = r4 + 0x3d;
        q62 = r4 + 0x3e;
        SwapB(L.w4, q60);
        q63 = r4 + 0x3f;
        r4 = iVar1 + 0x600;
        SwapB(L.w2, q61);
        SwapB(L.w1, q62);
        SwapB(L.w0, q63);
        *(u16 *)(r4 + 0xae) = *(u16 *)(r4 + 0xae) | 1;
    }
}
