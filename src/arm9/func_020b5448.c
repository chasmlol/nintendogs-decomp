#include "ctx.h"
extern u8 data_0215bf9c[];
extern u8 data_02159444[];
extern u8 data_0215942c[];
extern s32 func_02003a10(void);
extern s32 func_02108880(void);
extern void func_02108844(void);
extern void func_0209fa4c(s32 a);
extern void func_020a0cb0(s32 a, s32 b, s32 c);
extern u32 func_01ffdb08(s32 a);
extern void func_02108318(void);
extern void func_020292c4(u32 a, s32 b, s32 c);
extern void func_020b635c(u8 *p);
extern void func_020b59c4(u8 *p);
extern void func_020b56a8(u8 *p);
extern s32 func_021082f8(void);
extern void func_020bc004(s32 a);

void func_020b5448(u8 *param_1)
{
    s32 iVar3;
    u32 uVar4;
    u8 *piVar2;
    s32 st;

    st = *(u16 *)(param_1 + 4);
    if (st > 0) goto big;
    if (st == 0) goto zero;
    return;
big:
    switch ((u32)(st - 2048)) {
    case 0: goto c0;
    case 1: goto c1;
    case 2: goto c2;
    case 3: goto c3;
    case 4: goto c4;
    case 5: goto c5;
    case 6: goto c6;
    case 7: goto c7;
    }
    goto ret;
zero:
    iVar3 = func_02003a10();
    if (iVar3 != 0) {
        *(s16 *)(param_1 + 4) = (s16)0x800;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
c0:
    iVar3 = func_02108880();
    if (iVar3 == 0) {
        return;
    }
    *(s16 *)(param_1 + 4) = (s16)0x801;
    *(u16 *)(param_1 + 6) = 0;
    func_02108844();
    func_0209fa4c(120);
    func_020a0cb0(0, 60, 120);
    return;
c1:
    *(s16 *)(param_1 + 8) = (s16)(*(s16 *)(param_1 + 8) - 1);
    if (*(s16 *)(param_1 + 8) <= 0) {
        *(s16 *)(param_1 + 4) = (s16)0x802;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;
c2:
    if (*(s32 *)*(u8 **)data_0215bf9c != 9) {
        return;
    }
    *(s16 *)(param_1 + 4) = (s16)0x803;
    *(u16 *)(param_1 + 6) = 0;
    piVar2 = *(u8 **)data_02159444;
    *(u32 *)(piVar2 + 0x20) = *(u32 *)(piVar2 + 0x20) | 2;
    func_020bc004(*(s16 *)(*(u8 **)data_0215942c + 0xe));
    func_020b635c(param_1);
    return;
c3:
    func_020b59c4(param_1);
    return;
c4:
    *(s16 *)(param_1 + 6) = (s16)(*(s16 *)(param_1 + 6) + 1);
    if (*(s16 *)(param_1 + 6) < 120) {
        return;
    }
    uVar4 = func_01ffdb08(*(s16 *)(*(u8 **)data_0215942c + 0xe));
    *(s16 *)(param_1 + 4) = (s16)0x805;
    *(u16 *)(param_1 + 6) = 0;
    func_02108318();
    func_020292c4(uVar4, 76, 1);
    return;
c5:
    *(s16 *)(param_1 + 6) = (s16)(*(s16 *)(param_1 + 6) + 1);
    if (*(s16 *)(param_1 + 6) < 180) {
        return;
    }
    *(s16 *)(param_1 + 4) = (s16)0x803;
    *(u16 *)(param_1 + 6) = 0;
    func_020b635c(param_1);
    return;
c6:
    func_020b56a8(param_1);
    return;
c7:
    iVar3 = func_021082f8();
    if (iVar3 != 0) {
        *(s16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
ret:
    return;
}
