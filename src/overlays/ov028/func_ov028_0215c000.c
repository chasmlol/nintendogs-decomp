#include "ctx.h"

extern u8 data_ov028_0215df00[];
extern u8 data_0214efdc[];
extern s32 func_ov028_0215cc70(void);
extern s32 func_ov028_0215cc94(void);
extern void func_ov028_0215c2e0(int v);
extern s32 func_ov028_0215cbac(void);
extern s16 func_ov028_0215d6dc(void);
extern void func_ov028_0215ccec(void);
extern void func_ov028_0215c1a0(void);
extern void func_ov028_0215c670(int v);

void func_ov028_0215c000(void)
{
    s32 bVar1;
    s16 sVar2;
    s32 iVar3;

    switch (*(s16 *)data_ov028_0215df00) {
    case 0:
        bVar1 = func_ov028_0215cc70();
        if (bVar1 && ((u16)(*(u16 *)data_0214efdc & 1)) != 0) {
            func_ov028_0215c2e0(1);
        }
        break;
    case 1:
        bVar1 = func_ov028_0215cc94();
        if (bVar1 && ((u16)(*(u16 *)data_0214efdc & 1)) != 0) {
            func_ov028_0215c2e0(3);
        }
        break;
    case 3:
        func_ov028_0215c1a0();
        break;
    case 4:
        iVar3 = func_ov028_0215cbac();
        if (iVar3 == 1) {
            if (((u16)(*(u16 *)data_0214efdc & 1)) != 0) {
                func_ov028_0215c2e0(0);
            }
        } else {
            iVar3 = func_ov028_0215cbac();
            if (iVar3 != 5) goto z4;
            sVar2 = func_ov028_0215d6dc();
            switch (sVar2) {
            case 0x14:
                bVar1 = 1;
                break;
            default:
                goto z4;
            }
            goto j4;
        z4:
            bVar1 = 0;
        j4:
            if (bVar1) {
                func_ov028_0215ccec();
            }
        }
        break;
    case 2:
        iVar3 = func_ov028_0215cbac();
        if (iVar3 == 1) {
            if (((u16)(*(u16 *)data_0214efdc & 1)) != 0) {
                func_ov028_0215c2e0(0);
            }
        } else {
            iVar3 = func_ov028_0215cbac();
            if (iVar3 != 5) goto z2;
            sVar2 = func_ov028_0215d6dc();
            switch (sVar2) {
            case 0x14:
                bVar1 = 1;
                break;
            default:
                goto z2;
            }
            goto j2;
        z2:
            bVar1 = 0;
        j2:
            if (bVar1) {
                func_ov028_0215ccec();
            }
        }
        break;
    }
    if (((u16)(*(u16 *)data_0214efdc & 8)) != 0) {
        *(s16 *)data_ov028_0215df00 = 2;
        func_ov028_0215ccec();
    }
    func_ov028_0215c670(3);
}
