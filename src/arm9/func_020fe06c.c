#include "ctx.h"

extern u32 data_0001116c_dummy;
extern u32 data_0215be48;
extern void func_020fc588(void);

extern s32 func_020038b8(u32 a, u32 b);
extern void func_0206c7bc(u32 a, u32 b, u32 c);
extern void func_0210ed94(u8 *p, u32 q);
extern void func_020fddec(u8 *p);
extern u32 func_02093cbc(void);
extern void func_0210bc80(u8 *p, u32 a, u32 b);
extern u32 func_02093c54(void);
extern u32 func_0210bda8(void);
extern void func_0210a854(u32 a);
extern void func_0210a818(void);
extern void func_02101c88(u8 *p);
extern void func_02103430(u8 *p, u32 a);
extern void func_02006700(u32 a, u32 b);
extern void func_020fdb24(void);

u32 func_020fe06c(u32 param_1, u32 param_2)
{
    s32 iVar3;
    s32 iVar4;
    s32 bVar2;
    u8 *P;
    u8 *q;
    vu16 sp0;

    iVar3 = func_020038b8(param_2, 0x0001116c);
    sp0 = 0;
    *(u32 *)&data_0215be48 = iVar3;
    func_0206c7bc(sp0, iVar3, 0x0001116c);
    *(u32 *)(iVar3 + 0xa8) = param_1;
    func_0210ed94((u8 *)iVar3, param_2);
    func_020fddec((u8 *)iVar3);
    switch (*(u32 *)(iVar3 + 0xa8)) {
    case 0:
    case 3:
    case 4:
    case 12:
    case 14:
        goto FE114;
    case 13:
    case 15:
        goto FE184;
    default:
        goto DEF;
    }
FE114:
    *(u32 *)((u8 *)iVar3 + 0x4000 + 0x8b0) = 1;
    iVar4 = func_02093cbc();
    func_0210bc80((u8 *)(iVar3 + 0x1113c), param_2, iVar4);
    bVar2 = func_02093c54();
    if (bVar2 == 0) goto FE_ELSE;
    iVar4 = func_0210bda8();
    if (iVar4 == 0) goto FE_ARM7;
    func_0210a854(6);
    goto FE184;
FE_ARM7:
    func_0210a854(7);
    goto FE184;
FE_ELSE:
    func_0210a818();
    goto FE184;
DEF:
    func_0210a854(0);
    *(u32 *)((u8 *)iVar3 + 0x4000 + 0x8b0) = 0;
FE184:
    func_02101c88((u8 *)(iVar3 + 0x54e8));
    if (*(u32 *)(iVar3 + 0xa8) == 1) {
        func_02103430((u8 *)(*(u8 **)&data_0215be48) + 0x5028, 0);
    } else {
        func_02103430((u8 *)(*(u8 **)&data_0215be48) + 0x5028, 1);
    }
    func_02006700(14, (u32)func_020fc588);
    iVar4 = *(s32 *)(iVar3 + 0xa8);
    if (iVar4 > 1) {
        goto Thi;
    }
    if (iVar4 != 1) {
        goto L220;
    }
    goto B1;
Thi:
    if (iVar4 > 15) {
        goto L220;
    }
    if (iVar4 < 11) {
        goto L220;
    }
    if (iVar4 == 11) {
        goto B11;
    }
    if (iVar4 == 13) {
        goto B13;
    }
    if (iVar4 != 15) {
        goto L220;
    }
    goto B15;
B1:
    P = *(u8 **)&data_0215be48;
    if (*(u32 *)(P + 0xb0) == 0) {
        *(u32 *)(P + 0xb4) = 1;
    }
    goto L220;
B13:
    q = *(u8 **)&data_0215be48;
    if (*(u32 *)(q + 0xb0) == 0) {
        *(u32 *)(q + 0xb4) = 41;
    }
    goto L220;
B15:
    q = *(u8 **)&data_0215be48;
    if (*(u32 *)(q + 0xb0) == 0) {
        *(u32 *)(q + 0xb4) = 42;
    }
    goto L220;
B11:
    q = *(u8 **)&data_0215be48;
    if (*(u32 *)(q + 0xb0) == 0) {
        *(u32 *)(q + 0xb4) = 39;
    }
L220:
    func_020fdb24();
    if (*(u32 *)(iVar3 + 0xa8) == 15) {
        *(u32 *)(*(u8 **)&data_0215be48 + 0x4000 + 0x848) = 0x2400;
        *(u32 *)(*(u8 **)&data_0215be48 + 0x5000 + 0x30) = 1;
    }
    return (u32)iVar3;
}
