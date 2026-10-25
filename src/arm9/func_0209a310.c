#include "ctx.h"
extern u8 data_02159068[];
extern s32 func_02002340(void);
extern s32 func_0200235c(s32 a);
extern void func_0200413c(void);
extern s32 func_020d72a0(void);
extern s32 func_020d7d04(void);
extern s32 func_02093db8(void);
extern void func_020a1960(void);
extern void func_0209abe4(void);
extern s32 func_0209ab9c(void);
extern void func_02003fb4(void);
extern void func_02003e5c(void);

void func_0209a310(void)
{
    s32 bVar4 = 1;
    s32 bVar3 = 0;
    s16 iVar7 = 0;
    s32 iVar6 = 0;
    s32 bVar1 = 0;
    s32 bVar2;
    s32 iVar5;
    s32 local_28;
    s32 zero = 0;
    s32 r4 = 0;
    s32 one;

    bVar2 = func_02002340();
    if (bVar2 == 1) {
        do {
            r4 = func_0200235c(0);
        } while (r4 == 0);
    }
    *(u16 *)0x04000304 = *(u16 *)0x04000304 & ~0x20e;
    zero = 0;
    one = 1;
    local_28 = 2;
    do {
        func_0200413c();
        if (func_020d72a0() != 0) {
            goto chk1;
        }
        if (func_020d7d04() == 0) {
            goto other;
        }
chk1:
        if (func_02093db8() == 1) {
            if (iVar7 <= 0) {
                iVar6 = one;
                iVar7 = 3600;
            }
        } else {
other:
            if (*(u32 *)data_02159068 != 0 && *(s16 *)(*(u8 **)data_02159068 + 4) != 0 && bVar1 == 0) {
                bVar1 = one;
                iVar6 = local_28;
            }
        }
        if (iVar7 > 0) {
            iVar7 = iVar7 - 1;
        }
        if (bVar3 == 0) {
            if (iVar6 != 0) {
                iVar5 = func_02002340();
                if (iVar5 == 0) {
                    do {
                        iVar5 = func_0200235c(one);
                    } while (iVar5 == 0);
                }
                bVar3 = one;
            }
        } else {
            switch (iVar6) {
            case 1:
                func_020a1960();
                break;
            case 2:
                func_0209abe4();
                break;
            }
            iVar6 = zero;
            if (func_0209ab9c() == 0) {
                iVar5 = func_02002340();
                if (iVar5 == 1) {
                    do {
                        iVar5 = func_0200235c(zero);
                    } while (iVar5 == 0);
                }
                bVar3 = zero;
            }
        }
        if (((s32)(*(u16 *)0x027fffa8 & 0x8000) >> 15) == 0) {
            bVar4 = 0;
        }
        func_02003fb4();
        func_02003e5c();
    } while (bVar4 != 0);
    *(u16 *)0x04000304 = (*(u16 *)0x04000304 & ~0x20e) | 0x20e;
    bVar2 = func_02002340();
    if (bVar2 != 0) {
        return;
    }
    do {
        iVar5 = func_0200235c(1);
    } while (iVar5 == 0);
}
