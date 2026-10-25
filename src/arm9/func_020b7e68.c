#include "ctx.h"
extern u8 data_02159060[];
extern u8 data_02159424[];
extern u8 data_02159444[];
extern s32 func_02003a10(void);
extern u32 func_0209536c(void);
extern void func_02095428(s32 a, s32 b);
extern void func_02096c20(s32 a, s32 b, s32 c);
extern void func_02095a0c(void);
extern void func_02095d6c(s32 a, s32 b, s32 c, s32 d);
extern void func_020959ec(void);
extern void func_02097b68(void);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_020b7e68(u8 *param_1)
{
    u32 uVar3;
    s32 iVar2;
    u16 st;

    st = *(u16 *)(param_1 + 4);
    if (st == 0) {
        goto st0;
    }
    if (st == 0xf00) {
        goto stf00;
    }
    if (st == 0xf01) {
        goto stf01;
    }
    return;
st0:
    iVar2 = func_02003a10();
    if (iVar2 != 0) {
        *(u16 *)(param_1 + 4) = 0xf00;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
stf00:
    if (*(s16 *)(param_1 + 10) == -1) {
        return;
    }
    *(u16 *)(param_1 + 6) = 0;
    if (*(s16 *)(param_1 + 10) == -3) {
        *(u32 *)(param_1 + 0x18) = 23;
    } else if (*(s16 *)(param_1 + 10) >= 0) {
        *(u32 *)(param_1 + 0x18) = 9;
    } else {
        *(u32 *)(param_1 + 0x18) = 1;
    }
    if (*(s16 *)(param_1 + 10) >= 0) {
        *(u16 *)(param_1 + 4) = 0xf01;
        func_02097b94(0, 1200, 0, 0, 0);
        return;
    }
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    return;
stf01:
    *(s16 *)(param_1 + 6) = (s16)(*(s16 *)(param_1 + 6) + 1);
    if (*(s16 *)(*(u8 **)data_02159060 + 108) != 2) {
        return;
    }
    if (*(s16 *)(param_1 + 6) < 60) {
        return;
    }
    uVar3 = func_0209536c();
    func_02095428(*(s32 *)(*(u8 **)data_02159424 + *(s16 *)(param_1 + 10) * 4 + 0x24), (s32)uVar3);
    func_02096c20(0, 0, 0);
    func_02096c20(1, (u16)uVar3, 0);
    func_02095a0c();
    func_02095d6c(0, 0, 0, 1);
    func_02095d6c(1, (u16)uVar3, 0, 1);
    func_020959ec();
    *(u16 *)(param_1 + 4) = 1;
    *(u32 *)(param_1 + 0xc) = 1;
    func_02097b68();
}
