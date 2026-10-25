#include "ctx.h"

extern u8 *data_02159444;
extern s32 func_02003a10(void);
extern s32 func_02108c0c(void);
extern void func_02108c78(void);
extern void func_0209fa4c(s32 a);
extern void func_020a0cb0(s32 a, s32 b, s32 c);
extern void func_020af99c(void);
extern s32 func_020a4e44(void);
extern void func_0209fb38(s32 a, s32 b, s32 c);
extern void func_020a0e04(s32 a);
extern void func_02108c38(void);
extern void func_020a17bc(s32 a);
extern void func_020b07b8(s32 a, s32 b);
extern void func_020b0564(u8 *a, s32 b);
extern s32 func_021082f8(void);

void func_020b02b0(u8 *param_1)
{
    s32 iVar2;
    s32 uVar3;
    u16 st;

    st = *(u16 *)(param_1 + 4);
    if ((s32)st > 0) {
        goto SW;
    }
    if (st == 0) {
        goto ZERO;
    }
    return;

SW:
    switch (st) {
    case 0x300:
        goto C300;
    case 0x301:
        goto C301;
    case 0x302:
        goto C302;
    case 0x303:
        goto C303;
    case 0x304:
        goto C304;
    case 0x305:
        goto C305;
    default:
        goto DEF;
    }

ZERO:
    *(s16 *)(param_1 + 6) = *(s16 *)(param_1 + 6) + 1;
    iVar2 = func_02003a10();
    if (iVar2 != 0) {
        *(s16 *)(param_1 + 4) = 0x300;
        *(u16 *)(param_1 + 6) = 0;
    }
    return;

C300:
    iVar2 = func_02108c0c();
    if (iVar2 != 0) {
        *(s16 *)(param_1 + 4) = 0x301;
        *(u16 *)(param_1 + 6) = 0;
        func_02108c78();
        func_0209fa4c(120);
        func_020a0cb0(0, 0x28, 0x78);
    }
    return;

C301:
    *(s16 *)(param_1 + 8) = *(s16 *)(param_1 + 8) - 1;
    if (*(s16 *)(param_1 + 8) > 0) {
        return;
    }
    *(s16 *)(param_1 + 4) = 0x302;
    *(u16 *)(param_1 + 6) = 0;
    iVar2 = (s32)data_02159444;
    *(u32 *)(iVar2 + 0x20) = *(u32 *)(iVar2 + 0x20) | 1;
    iVar2 = (s32)data_02159444;
    *(u32 *)(iVar2 + 0x20) = *(u32 *)(iVar2 + 0x20) | 2;
    func_020af99c();
    uVar3 = func_020a4e44();
    if (uVar3 >= 0) {
        func_0209fb38(uVar3, 0x7f, 0);
    }
    func_020a0cb0(0, 0x3c, 0x3c);
    return;

C302:
    *(s16 *)(param_1 + 2) = *(s16 *)(param_1 + 2) - 1;
    iVar2 = (s32)*(s16 *)(param_1 + 2);
    if (0 < iVar2 && iVar2 <= 0x258 && iVar2 % 60 == 0) {
        func_020a0e04(6);
    }
    if (*(s16 *)(param_1 + 2) > 0) {
        return;
    }
    *(s16 *)(param_1 + 4) = 0x303;
    *(u16 *)(param_1 + 6) = 0;
    iVar2 = (s32)data_02159444;
    *(u32 *)(iVar2 + 0x20) = *(u32 *)(iVar2 + 0x20) & 0xfffffffe;
    iVar2 = (s32)data_02159444;
    *(u32 *)(iVar2 + 0x20) = *(u32 *)(iVar2 + 0x20) & 0xfffffffd;
    func_02108c38();
    func_0209fa4c(60);
    func_020a0cb0(0, 0x6e, 0x78);
    func_020a17bc(100);
    return;

C303:
    if (*(u16 *)((u8 *)data_02159444 + 0x5e) == 0) {
        *(s16 *)(param_1 + 6) = *(s16 *)(param_1 + 6) + 1;
    }
    if (*(s16 *)(param_1 + 6) < 120) {
        return;
    }
    func_020b07b8(*(s32 *)(param_1 + 0x1c), (s32)*(s16 *)((u8 *)data_02159444 + 0x56));
    func_020b0564(param_1, *(s32 *)(param_1 + 0x1c));
    *(s16 *)(param_1 + 4) = 0x304;
    *(u16 *)(param_1 + 6) = 0;
    return;

C304:
    *(s16 *)(param_1 + 4) = 0x305;
    *(u16 *)(param_1 + 6) = 0;
    return;

C305:
    iVar2 = func_021082f8();
    if (iVar2 != 0) {
        *(s16 *)(param_1 + 4) = 1;
        *(u32 *)(param_1 + 0xc) = 1;
    }
    return;

DEF:
    return;
}
