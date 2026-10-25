#include "ctx.h"

extern s32 data_ov028_0215df04;
extern u16 data_0214efdc;
extern s32 func_ov028_0215cd38(void);
extern s32 func_ov028_0215cb88(void);
extern s32 func_ov028_0215caf8(void);
extern s32 func_ov028_0215cb0c(void);
extern s32 func_ov028_0215cac8(void);
extern s32 func_ov028_0215cbac(void);
extern s32 func_ov028_0215d6dc(void);
extern void func_ov028_0215c2e0(s32 a);
extern void func_ov028_0215ccec(void);

void func_ov028_0215c1a0(void)
{
    s32 iVar3;
    s32 bVar1;

    switch (data_ov028_0215df04) {
    case 0:
        iVar3 = func_ov028_0215cd38();
        if (iVar3 != 0) {
            data_ov028_0215df04 = 1;
        }
        break;
    case 1:
        bVar1 = func_ov028_0215cb88();
        if (bVar1 && (iVar3 = func_ov028_0215caf8(), iVar3 != 0) && (bVar1 = func_ov028_0215cb0c(), bVar1)) {
            data_ov028_0215df04 = 2;
        }
        break;
    case 2:
        iVar3 = func_ov028_0215cac8();
        if (iVar3 != 0) {
            data_ov028_0215df04 = 3;
        }
        break;
    case 3:
        iVar3 = func_ov028_0215cbac();
        if (iVar3 == 5) {
            func_ov028_0215d6dc();
        }
        func_ov028_0215c2e0(4);
        break;
    }
    if (data_ov028_0215df04 == 3) {
        return;
    }
    if ((u16)(data_0214efdc & 2) != 0) {
        func_ov028_0215c2e0(2);
        return;
    }
    iVar3 = func_ov028_0215cbac();
    if (iVar3 != 5) {
        goto zero;
    }
    switch (func_ov028_0215d6dc()) {
    case 20:
        bVar1 = 1;
        goto chk;
    default:
        break;
    }
zero:
    bVar1 = 0;
chk:
    if (!bVar1) {
        return;
    }
    func_ov028_0215ccec();
    data_ov028_0215df04 = 0;
}
