#pragma avoid_byte strb
#include "ctx.h"

static inline void SwapOut(u32 v, vu8 *p) { *(u8 *)(p) = (u8)(v); }

extern u32 func_02035770(u8 *p, u32 a);
extern u32 func_02026e68(u8 *p);
extern void func_ov003_0218c050(u8 *p, u32 a);
extern u32 func_0202c5d8(u8 *p, u32 a);
extern u32 func_02029b7c(u8 *p, u32 a, u32 b, u32 c);
extern void func_0203e908(u8 *p, u32 a);

void func_ov003_021887f8(u8 *p)
{
    u32 iVar2, iVar3, bVar1;

    iVar2 = func_02035770(p, 4);
    iVar3 = func_02026e68(p);
    func_ov003_0218c050(p, iVar3);
    *(u16 *)(p + 0x11c) = 1;
    *(u16 *)(p + 0x11e) = 0;
    if (iVar3 != 0) {
        SwapOut(1, (vu8 *)(p + 185));
    } else {
        SwapOut(0, (vu8 *)(p + 185));
    }
    {
        u32 rr;
        rr = func_0202c5d8(p, 4);
        if (rr != 0) {
            bVar1 = 1;
            goto Ljoin;
        }
    }
    bVar1 = func_02029b7c(p, 4, 31, 0) != 0;
Ljoin:
    if (bVar1) {
        return;
    }
    if (iVar2 != 0) {
        func_0203e908(p, 0x16c);
    }
}
