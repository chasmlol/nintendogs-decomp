#include "ctx.h"

typedef struct {
    u32 w[3];
} T3;

#define FXM(a, b) ((s32)((((s64)(s32)(a)) * (s64)(b) + 0x800) >> 12))

extern s32 func_02035744(u8 *, s32);
extern u32 func_02028124(u8 *);
extern s32 func_0202518c(u8 *, s32, s32);
extern u8 *func_020364cc(u8 *);
extern s32 func_020c1f34(u8 *);
extern void func_02037450(u8 *, u32);
extern s32 func_0203567c(u8 *);
extern void func_ov003_02197f94(u8 *, s32);

void func_ov003_021948fc(u8 *p)
{
    u32 uVar7;
    u32 uVar3;
    s32 iVar2;
    s32 iVar4;
    s32 bVar1;

    if (*(s8 *)(p + 0xa0) == 0) {
        uVar7 = 0x100;
    } else {
        iVar2 = func_02035744(p, 10);
        if (iVar2 != 0) {
            uVar7 = 0x112;
        } else {
            uVar7 = 0x100;
        }
    }
    uVar3 = func_02028124(p);
    iVar2 = func_0202518c(p, 0x12, FXM(uVar3, 0x500));
    if (iVar2 == 0) {
        uVar3 = func_02028124(p);
        func_0202518c(p, 0x22, FXM(uVar3, 0x140));
    }
    iVar2 = (s32)func_020364cc(p);
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
            bVar1 = 1;
        } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && (iVar4 = func_020c1f34((u8 *)iVar2), iVar4 == 0)) {
            bVar1 = 1;
        } else {
            bVar1 = 0;
        }
        if (!bVar1) {
            *(T3 *)(p + 0x26c) = *(T3 *)(iVar2 + 0xbc);
            *(T3 *)(p + 0x278) = *(T3 *)(p + 0x26c);
            *(T3 *)(p + 0x3b4) = *(T3 *)(p + 0x26c);
            func_02037450(p, uVar7);
        }
    }
    iVar2 = func_0203567c(p);
    func_ov003_02197f94(p, iVar2);
}
