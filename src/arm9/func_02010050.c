#include "ctx.h"

extern u32 data_0214f464;

extern void func_02010474(u8 *p, u32 a);
extern void func_02035aa0(u8 *p);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 a);

void func_02010050(u8 *p)
{
    u16 u4;
    u8 *r6;
    s32 iVar2;
    s32 bVar1;
    u32 uVar3;
    u32 *q;

    if (*(s32 *)(p + 0x464) == 0) {
        u4 = 200;
    } else {
        u4 = 0;
    }
    func_02010474(p, 2);
    func_02035aa0(p);
    r6 = func_0203541c(p);
    if (r6 == 0) {
        goto zero;
    }
    func_0203e8cc(p, 2, 1);
    if (*(s16 *)(r6 + 0x90) == 4) {
        goto c4;
    }
    if (*(s16 *)(r6 + 0x90) != 7) {
        goto done0;
    }
    goto c7;
c4:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
        *(u32 *)(p + 0x948) = 1;
    }
    goto done0;
c7:
    if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
        *(u32 *)(p + 0x948) = 8;
    }
done0:
    iVar2 = func_ov003_02198298(p);
    goto check;
zero:
    iVar2 = 0;
check:
    if (iVar2 != 0) {
        bVar1 = 1;
        goto done;
    }
    if (func_020289d0(p, 2, 0) != 0) {
        bVar1 = 1;
        goto done;
    }
    bVar1 = func_0202cd10(p, 2) != 0;
done:
    if (bVar1) {
        return;
    }
    if ((s32)*(u16 *)(p + 252) <= (s32)u4) {
        return;
    }
    q = (u32 *)data_0214f464;
    uVar3 = *q * 0x10dcd + 1;
    *q = uVar3;
    if ((u16)((((u32)(u16)uVar3) * 120) >> 16) != 0) {
        return;
    }
    func_0203e908(p, 2);
}
