#include "ctx.h"

extern u8 data_ov025_0215c744[];
extern u8 data_0214efdc[];
extern s32 func_020d7dfc(void);
extern s32 func_020d7e20(void);
extern void func_ov025_0215c32c(int v);
extern s32 func_020d7d34(void);
extern s16 func_020d5284(void);
extern void func_020d7e8c(void);
extern void func_ov025_0215c1a4(void);
extern void func_020d7308(int v);
extern s32 func_020d7d04(void);

s32 func_ov025_0215c000(void)
{
    s32 bVar1;
    s16 sVar2;
    s32 iVar3;

    switch (*(s16 *)data_ov025_0215c744) {
    case 0:
        bVar1 = func_020d7dfc();
        if (bVar1 && (u16)(*(u16 *)data_0214efdc & 1) != 0) {
            func_ov025_0215c32c(1);
        }
        break;
    case 1:
        bVar1 = func_020d7e20();
        if (bVar1 && (u16)(*(u16 *)data_0214efdc & 1) != 0) {
            func_ov025_0215c32c(3);
        }
        break;
    case 3:
        func_ov025_0215c1a4();
        break;
    case 4:
        iVar3 = func_020d7d34();
        if (iVar3 == 1) {
            if ((u16)(*(u16 *)data_0214efdc & 1) != 0) {
                func_ov025_0215c32c(0);
            }
        } else {
            iVar3 = func_020d7d34();
            if (iVar3 != 5) goto nza;
            switch (func_020d5284()) {
            case 0x14:
                bVar1 = 1;
                goto jna;
            default:
                break;
            }
        nza:
            bVar1 = 0;
        jna:
            if (bVar1) {
                func_020d7e8c();
            }
        }
        break;
    case 2:
        iVar3 = func_020d7d34();
        if (iVar3 == 1) {
            if ((u16)(*(u16 *)data_0214efdc & 1) != 0) {
                func_ov025_0215c32c(0);
            }
        } else {
            iVar3 = func_020d7d34();
            if (iVar3 != 5) goto nzb;
            switch (func_020d5284()) {
            case 0x14:
                bVar1 = 1;
                goto jnb;
            default:
                break;
            }
        nzb:
            bVar1 = 0;
        jnb:
            if (bVar1) {
                func_020d7e8c();
            }
        }
        break;
    }
    if ((u16)(*(u16 *)data_0214efdc & 8) != 0) {
        *(s16 *)data_ov025_0215c744 = 2;
        func_020d7e8c();
    }
    func_020d7308(3);
    bVar1 = func_020d7d04();
    return bVar1;
}
