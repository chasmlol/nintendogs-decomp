#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern u8 data_0213b424[];

extern s32 func_02028124(u8 *p);
extern s32 func_02024e40(u8 *p, u32 a, s32 b);
extern s32 func_02024d40(u8 *p, u32 a, u32 b, s32 c);
extern s32 func_02026fe0(u8 *p);
extern void func_0201d1f0(u8 *p);
extern void func_02035c98(u8 *p, u32 a);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 a);

void func_0201837c(u8 *p)
{
    s32 v;
    s32 iVar2;
    u8 *iv1;

    v = func_02028124(p);
    iVar2 = func_02024e40(p, 20, -FX_Mul(v, -20));
    if (iVar2 == 0) {
        v = func_02028124(p);
        func_02024d40(p, 30, 65, -FX_Mul(v, 11));
    }
    if (func_02026fe0(p) != 0) {
        ((void (*)(u8 *))*(u32 *)(data_0213b424 + 0xc))(p);
    }
    func_0201d1f0(p);
    func_02035c98(p, 1);
    iv1 = func_0203541c(p);
    if (iv1 == 0) {
        goto zero;
    }
    func_0203e8cc(p, 2, 1);
    if (*(s16 *)(iv1 + 0x90) == 4) {
        goto c4;
    }
    if (*(s16 *)(iv1 + 0x90) != 7) {
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
        return;
    }
    if (func_0203567c(p) == 0) {
        return;
    }
    func_0203e908(p, 12);
}
