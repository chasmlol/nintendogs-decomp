#include "ctx.h"

extern void func_02067e68(u8 *, u8 *, u8 *);
extern void func_020be298(u8 *, s32);
extern void func_02067d04(u32 *, u32 *, u32 *);
extern void func_02006a30(u32 *, u32 *);
extern s32 func_020c8164(u32, s32);
extern void func_020c6300(u8 *, s32, u8 *, u8 *, s32, void *, void *, u8 *, void *, void *);
extern void func_020ea704(void);
extern void func_020ea69c(void);
extern void func_020ea658(void);
extern void func_020ea654(void);

void func_020ea508(u8 *p)
{
    u32 L[9];
    s32 iVar1;

    *(s32 *)(p + 0xb4) = *(s32 *)(p + 0xb4) - 0x52;
    func_02067e68(p + 0xbc, p + 0xb0, p + 0xbc);
    func_020be298(p, 0x11c2);
    {
        u32 t0;
        u32 t1;
        u32 t2;
        u32 t3;
        u32 t4;
        u32 t5;

        t2 = *(u32 *)(p + 0xd0);
        t1 = *(u32 *)(p + 0xcc);
        t0 = *(u32 *)(p + 0xc8);
        L[0] = t0;
        L[1] = t1;
        L[2] = t2;
        t5 = *(u32 *)(p + 0xdc);
        t4 = *(u32 *)(p + 0xd8);
        t3 = *(u32 *)(p + 0xd4);
        L[3] = t3;
        L[4] = t4;
        L[5] = t5;
    }
    func_02067d04(&L[0], &L[3], &L[6]);
    func_02006a30(&L[0], &L[0]);
    func_02006a30(&L[6], &L[6]);
    func_02067d04(&L[6], &L[0], &L[3]);
    *(u32 *)(p + 0xc8) = L[0];
    *(u32 *)(p + 0xcc) = L[1];
    *(u32 *)(p + 0xd0) = L[2];
    *(u32 *)(p + 0xd4) = L[3];
    *(u32 *)(p + 0xd8) = L[4];
    *(u32 *)(p + 0xdc) = L[5];
    *(u32 *)(p + 0xe0) = L[6];
    *(u32 *)(p + 0xe4) = L[7];
    *(u32 *)(p + 0xe8) = L[8];
    iVar1 = func_020c8164(*(u16 *)(p + 0xa0), *(s32 *)(p + 0xf8));
    func_020c6300(p, *(s32 *)(p + 0xf8), 0, 0, iVar1, func_020ea704, func_020ea69c, 0, func_020ea658, func_020ea654);
}
