#include "ctx.h"

extern u32 *data_ov008_0215c6e0;
void func_020068a0(void);
void func_020067d8(void);
void func_02006734(void);
void func_ov008_0215c6b4(void);

u32 func_02002e60(void);
u8 *func_02002e58(u32 a);
void func_020068c4(u8 *p, u16 *a);
void func_020068c0(u8 *p, u32 a);
void func_02006700(u32 a, u32 b);
void func_02005e18(u16 *a);
u8 *func_0200563c(u8 *p, u16 *a);
void func_0200560c(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
u32 *func_020038b8(u8 *p, u32 n);
void func_020042e8(u8 *p);
u8 *func_ov008_0215c21c(u8 *p);
void func_02005900(u8 *a, u32 *b);

void func_ov008_0215c0d0(void)
{
    u8 *piVar2;
    u8 *puVar3;
    u32 *puVar4;
    u8 *puVar5;
    u32 iVar1;
    u16 local_38[2];
    u16 uStack_34[18];

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    local_38[0] = 0xff;
    local_38[1] = 0;
    func_020068c4(piVar2, local_38);
    func_020068c0(piVar2, 4);
    func_02006700(0, (u32)func_020068a0);
    func_02006700(1, (u32)func_020067d8);
    func_02006700(2, (u32)func_02006734);
    func_02006700(3, (u32)func_ov008_0215c6b4);
    func_02005e18(uStack_34);
    uStack_34[1] = 1;
    uStack_34[3] = 1;
    uStack_34[5] = 1;
    uStack_34[4] = 0;
    uStack_34[7] = 0x20;
    uStack_34[11] = 0xf;
    uStack_34[12] = 0x10;
    uStack_34[8] = 0x40;
    puVar3 = func_0200563c(piVar2, uStack_34);
    func_0200560c(puVar3 + 44, 1, 0, 0, 1, 5, 1, 0);
    puVar4 = func_020038b8(piVar2, 0x14);
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    data_ov008_0215c6e0 = puVar4;
    func_020042e8(puVar3);
    puVar5 = func_ov008_0215c21c(piVar2);
    puVar4 = data_ov008_0215c6e0;
    *puVar4 = (u32)puVar5;
    func_02005900(puVar5, puVar4);
}
