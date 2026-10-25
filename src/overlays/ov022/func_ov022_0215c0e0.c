#include "ctx.h"
extern u8 data_ov022_0215c720[];
extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *p, u16 *q);
extern void func_020068c0(u8 *p, s32 a);
extern void func_02006700(s32 a, void *b);
extern u8 *func_ov022_0215c448(u8 *p);
extern u32 *func_020038b8(u8 *p, s32 a);
extern void func_020042e8(u8 *p);
extern u8 *func_ov022_0215c1c8(u8 *p);
extern void func_020075c8(u8 *p);
extern s64 func_0209944c(void);
extern void func_02005900(s32 a, s32 b);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov022_0215c688(void);

void func_ov022_0215c0e0(void)
{
    s32 iVar1;
    u8 *piVar2;
    u8 *puVar3;
    u32 *puVar4;
    u8 *puVar5;
    u16 local[2];
    s64 uVar8;

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    local[0] = 0xff;
    local[1] = 0;
    func_020068c4(piVar2, local);
    func_020068c0(piVar2, 4);
    func_02006700(0, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(3, (void *)func_ov022_0215c688);
    puVar3 = func_ov022_0215c448(piVar2);
    puVar4 = func_020038b8(piVar2, 16);
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(u32 **)data_ov022_0215c720 = puVar4;
    func_020042e8(puVar3);
    puVar5 = func_ov022_0215c1c8(piVar2);
    *(u8 **)(*(u8 **)data_ov022_0215c720) = puVar5;
    func_020075c8(piVar2);
    uVar8 = func_0209944c();
    func_02005900((s32)uVar8, (s32)(uVar8 >> 32));
}
