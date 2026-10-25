#include "ctx.h"

extern u32 data_ov002_0215c720;
extern u32 data_ov002_0215c724;
extern u32 data_ov002_0215c738;
extern u32 data_ov002_0215c750;
extern u32 data_ov002_0215c76c;
extern u32 data_ov002_0215c800;
extern u32 data_ov002_0215c788;
extern u32 data_ov002_0215c79c;
extern u32 data_ov002_0215c7b0;
extern u32 data_ov002_0215c7c4;
extern u32 data_ov002_0215c7d4;
extern u32 data_ov002_0215c7e4;

extern u32 func_0208c720(u8 *p, u32 a, u32 b);
extern u32 func_0207df48(u32 a);
extern u32 *func_02006b78(u32 a);
extern u32 *func_02006bac(u32 a);
extern u32 func_02073828(u32 a, u32 *b);
extern void func_0207df9c(u32 a);
extern void func_0207c910(u32 a, u32 b, u32 c, u32 d);

#define GPP() (*(u8 **)&data_ov002_0215c800)

void func_ov002_0215c4d4(u8 *param_1)
{
    u32 f2;
    u32 f3;
    u8 *P;
    u32 uVar5;
    u32 r4;
    u32 loc[4];
    u32 *t;
    u8 *q;
    u8 **gp;

    uVar5 = func_0208c720(param_1, (u32)&data_ov002_0215c720, (u32)&data_ov002_0215c724);
    r4 = func_0207df48((u32)&data_ov002_0215c738);
    func_0207df48((u32)&data_ov002_0215c750);
    asm { mov f2, r0 }
    func_0207df48((u32)&data_ov002_0215c76c);
    gp = (u8 **)&data_ov002_0215c800;
    asm { mov f3, r0 }
    P = *gp;
    q = P + 12;
    t = func_02006b78(r4);
    *(u32 *)(P + 0xc) = t[3];
    t = func_02006bac(f2);
    *(u32 *)(q + 4) = t[5];
    if (func_02073828(f3, &loc[0]) != 0) {
        *(u32 *)(q + 8) = loc[0] + 12;
    }

    r4 = func_0207df48((u32)&data_ov002_0215c788);
    func_0207df48((u32)&data_ov002_0215c79c);
    asm { mov f2, r0 }
    func_0207df48((u32)&data_ov002_0215c7b0);
    gp = (u8 **)&data_ov002_0215c800;
    asm { mov f3, r0 }
    P = *gp;
    q = P + 24;
    t = func_02006b78(r4);
    *(u32 *)(P + 0x18) = t[3];
    t = func_02006bac(f2);
    *(u32 *)(q + 4) = t[5];
    if (func_02073828(f3, &loc[1]) != 0) {
        *(u32 *)(q + 8) = loc[1] + 12;
    }

    r4 = func_0207df48((u32)&data_ov002_0215c7c4);
    func_0207df48((u32)&data_ov002_0215c7d4);
    asm { mov f2, r0 }
    func_0207df48((u32)&data_ov002_0215c7e4);
    gp = (u8 **)&data_ov002_0215c800;
    asm { mov f3, r0 }
    P = *gp;
    q = P + 36;
    t = func_02006b78(r4);
    *(u32 *)(P + 0x24) = t[3];
    t = func_02006bac(f2);
    *(u32 *)(q + 4) = t[5];
    if (func_02073828(f3, &loc[2]) != 0) {
        *(u32 *)(q + 8) = loc[2] + 12;
    }

    func_0207df9c(uVar5);
    func_0207c910(15, 0, *(u32 *)(GPP() + 0xc), 0x200);
    func_0207c910(6, 0, *(u32 *)(GPP() + 0x10), 0x8000);
    func_0207c910(10, 0, *(u32 *)(GPP() + 0x14), 0x800);
    func_0207c910(31, 0, *(u32 *)(GPP() + 0x18), 0x200);
    func_0207c910(22, 0, *(u32 *)(GPP() + 0x1c), 0x8000);
    func_0207c910(26, 0, *(u32 *)(GPP() + 0x20), 0x800);
}
