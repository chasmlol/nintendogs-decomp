#include "ctx.h"

extern u8 *data_02159434;
extern u8 *data_02159060;
extern u8 data_02159010[];

extern s32 func_02003a10(void);
extern void func_020a243c(void);
extern void func_0208d288(void);
extern void func_02097b94(s32 a, u32 b, s32 c, s32 d, s32 e);
extern void func_020959dc_dummy(void);
extern s32 func_020959dc(void);
extern void func_0209583c(void);
extern void func_02095a38(s32 a);
extern s32 func_020961ac(void);
extern void func_020959a0(s32 a, s32 b, s32 c);
extern void func_02095a0c(void);
extern void func_02095d6c(s32 a, s32 b, s32 c, s32 d);
extern s32 func_020a9cf4(u8 *p);
extern s32 func_0209638c(void);
extern void func_02097b68(void);
extern void func_020a19dc(s32 a, s32 b);
extern void func_020a9b88(u8 *p);
extern void func_02096088(s32 *p);
extern void func_02096a4c(s32 a);
extern void func_020a1a40(s32 a);
extern void func_02095970(s32 a, s32 b, s32 c);
extern s32 func_02093db8(void);
extern void func_020a9ac4(u8 *p);
extern void func_020d6f98(void);

void func_020a90b0(void)
{
    u8 *iVar4;
    s32 iVar3;
    s32 bVar2;
    s16 sVar1;

    iVar4 = data_02159434;
    switch (*(s16 *)(iVar4 + 4)) {
    case 0:
        iVar3 = func_02003a10();
        if (iVar3 == 0) {
            return;
        }
        *(s16 *)(iVar4 + 4) = 1;
        *(s16 *)(iVar4 + 6) = 0;
        func_020a243c();
        return;
    case 1:
        func_0208d288();
        *(s16 *)(iVar4 + 4) = 2;
        *(s16 *)(iVar4 + 6) = 0;
        return;
    case 2:
        *(s16 *)(iVar4 + 4) = 8;
        *(s16 *)(iVar4 + 6) = 0;
        return;
    case 3:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        sVar1 = *(s16 *)(data_02159060 + 0x9a);
        if (sVar1 != 0) {
            if (sVar1 == 1) {
                *(s16 *)(iVar4 + 4) = 8;
                *(s16 *)(iVar4 + 6) = 0;
            }
            return;
        }
        *(s16 *)(iVar4 + 4) = 4;
        *(s16 *)(iVar4 + 6) = 0;
        func_02097b94(1, 0x835, 0, 0, 0);
        return;
    case 4:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        sVar1 = *(s16 *)(data_02159060 + 0x9a);
        if (sVar1 != 0) {
            if (sVar1 == 1) {
                *(s16 *)(iVar4 + 4) = 8;
                *(s16 *)(iVar4 + 6) = 0;
            }
            return;
        }
        func_02096088(*(s32 **)(iVar4 + 0x2c));
        iVar3 = func_0209638c();
        if (iVar3 != 0) {
            *(s16 *)(iVar4 + 4) = 5;
            *(s16 *)(iVar4 + 6) = 0;
            func_02097b94(1, 0x835, 1, 0, 0);
            func_020a1a40(0x43);
            func_02095970(0, 0, 0);
            func_02095a0c();
            func_02095d6c(0, 0, 0, 1);
            return;
        }
        *(s16 *)(iVar4 + 4) = 9;
        *(s16 *)(iVar4 + 6) = 0;
        func_02097b94(1, 0x838, 0, 0, 0);
        return;
    case 5:
        iVar3 = func_020959dc();
        if (iVar3 == 0) {
            return;
        }
        *(s16 *)(iVar4 + 4) = 6;
        *(s16 *)(iVar4 + 6) = 0;
        func_0209583c();
        func_02095a38(1);
        return;
    case 6:
        iVar3 = func_020959dc();
        if (iVar3 == 0) {
            return;
        }
        bVar2 = func_020961ac();
        if (bVar2) {
            *(s16 *)(iVar4 + 4) = 10;
            *(s16 *)(iVar4 + 6) = 0;
            func_02097b68();
            func_020a19dc(0x43, 0x1e);
            return;
        }
        *(s16 *)(iVar4 + 4) = 7;
        *(s16 *)(iVar4 + 6) = 0;
        func_020959a0(0, 0, 0);
        func_02095a0c();
        func_02095d6c(0, 0, 0, 1);
        return;
    case 7:
        iVar3 = func_020959dc();
        if (iVar3 == 0) {
            return;
        }
        *(s16 *)(iVar4 + 4) = 10;
        *(s16 *)(iVar4 + 6) = 0;
        func_02097b68();
        func_020a19dc(0x43, 0x1e);
        return;
    case 8:
        bVar2 = func_020a9cf4(iVar4);
        iVar3 = func_0209638c();
        if (iVar3 != 0) {
            if (bVar2) {
                *(s16 *)(iVar4 + 4) = 10;
                *(s16 *)(iVar4 + 6) = 0;
                return;
            }
            *(s16 *)(iVar4 + 4) = 11;
            *(s16 *)(iVar4 + 6) = 0;
            func_02097b94(0, 0x4ba, 0, 0, 0);
            return;
        } else {
            *(s16 *)(iVar4 + 4) = 9;
            *(s16 *)(iVar4 + 6) = 0;
            func_02097b94(1, 0x838, 0, 0, 0);
            return;
        }
    case 11:
        *(s16 *)(iVar4 + 6) = *(s16 *)(iVar4 + 6) + 1;
        if (*(s16 *)(iVar4 + 6) < 0xf0) {
            return;
        }
        *(s16 *)(iVar4 + 4) = 12;
        *(s16 *)(iVar4 + 6) = 0;
        func_02097b94(0, 0x4bb, 0, 0, 0);
        return;
    case 12:
        if (*(s32 *)(data_02159060 + 0xa4) == 0) {
            return;
        }
        if (*(s32 *)(iVar4 + 0xc) != 0) {
            func_02096088(*(s32 **)(iVar4 + 0x2c));
            iVar3 = func_0209638c();
            if (iVar3 != 0) {
                *(s16 *)(iVar4 + 4) = 5;
                *(s16 *)(iVar4 + 6) = 0;
                func_02097b94(1, 0x835, 1, 0, 0);
                func_020a1a40(0x43);
                func_02095970(0, 0, 0);
                func_02095a0c();
                func_02095d6c(0, 0, 0, 1);
                return;
            }
            *(s16 *)(iVar4 + 4) = 9;
            *(s16 *)(iVar4 + 6) = 0;
            func_02097b94(1, 0x838, 0, 0, 0);
            return;
        } else {
            *(s16 *)(iVar4 + 4) = 6;
            *(s16 *)(iVar4 + 6) = 0;
            func_02096a4c(1);
            func_02097b94(1, 0x835, 1, 0, 0);
            func_020a1a40(0x43);
            func_02095a38(1);
            return;
        }
    case 10:
        func_020a9b88(iVar4);
        return;
    case 13:
        iVar3 = func_02093db8();
        if (iVar3 == 0) {
            *(s16 *)(iVar4 + 4) = 17;
            *(s16 *)(iVar4 + 6) = 0;
            return;
        }
        *(s16 *)(iVar4 + 4) = 14;
        *(s16 *)(iVar4 + 6) = 0;
        func_02097b94(1, 0x836, 0, 0, 0);
        return;
    case 14:
        func_020a9ac4(iVar4);
        return;
    case 15:
        if (*(s32 *)(data_02159060 + 0xa4) != 0) {
            *(s16 *)(iVar4 + 4) = 17;
            *(s16 *)(iVar4 + 6) = 0;
        }
        return;
    case 16:
        func_020d6f98();
        *(u16 *)(data_02159010 + 2) = 1;
        *(s16 *)(iVar4 + 4) = 17;
        *(s16 *)(iVar4 + 6) = 0;
        return;
    case 17:
        *(s16 *)(iVar4 + 4) = 18;
        *(s16 *)(iVar4 + 6) = 0;
        *(s32 *)(iVar4 + 8) = 1;
        return;
    case 9:
    case 18:
    default:
        return;
    }
}
