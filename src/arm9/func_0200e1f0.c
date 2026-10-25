#include "ctx.h"

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))

extern s32 func_02028124(u8 *);
extern void func_02024e40(u8 *, s32, s32);
extern void func_02039818(u8 *);
extern s32 func_0203541c(u8 *);
extern void func_0203e8cc(u8 *, s32, s32);
extern s32 func_ov003_02198298(u8 *);
extern s32 func_0203567c(u8 *);
extern void func_0202fd7c(u8 *);

void func_0200e1f0(u8 *p)
{
    s32 uVar1;
    s32 iVar2;

    uVar1 = func_02028124(p);
    func_02024e40(p, 11, -FXM(uVar1, 93));
    func_02039818(p);
    iVar2 = func_0203541c(p);
    if (iVar2 != 0) {
        func_0203e8cc(p, 2, 1);
        if (*(s16 *)(iVar2 + 0x90) == 4) goto b4;
        if (*(s16 *)(iVar2 + 0x90) != 7) goto done;
        goto b7;
b4:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(s32 *)(p + 0x948) = 1;
        }
        goto done;
b7:
        if (*(s8 *)(p + 0x8b) != 5 && *(s8 *)(p + 0x8b) != 4) {
            *(s32 *)(p + 0x948) = 8;
        }
done:
        iVar2 = func_ov003_02198298(p);
    } else {
        iVar2 = 0;
    }
    if (iVar2 != 0) {
        return;
    }
    iVar2 = func_0203567c(p);
    if (iVar2 == 0) {
        return;
    }
    func_0202fd7c(p);
}
