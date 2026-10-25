#include "ctx.h"

extern s32 func_02002e60(void);
extern u8 *func_02002e58(s32 a);
extern void func_020068c4(u8 *a, u16 *b);
extern void func_020068c0(u8 *a, s32 b);
extern void func_02006700(s32 a, void *b);
extern u8 *func_ov016_0215cc68(u8 *a);
extern void func_020042e8(u8 *a);
extern u8 *func_020038b8(u8 *a, s32 b);
extern u8 *data_ov016_0215d1c0;
extern u8 data_ov016_0215cdbc[];
extern u8 data_ov016_0215cda4[];
extern void func_0206b0a4(u8 *a, s32 b, s32 c);
extern void func_0206b8a8(u8 *a, s32 b, s32 c);
extern u64 func_ov016_0215c450(void);
extern void func_02005900(u64 a);
extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov016_0215cda0(void);

void func_ov016_0215cb64(void)
{
    u16 local[2];
    u8 *piVar3;
    u8 *puVar4;
    u8 *puVar5;
    s32 iVar2;
    u64 uVar8;

    iVar2 = func_02002e60();
    piVar3 = func_02002e58(iVar2);
    local[0] = 0xff;
    local[1] = 0;
    func_020068c4(piVar3, local);
    func_020068c0(piVar3, 4);
    func_02006700(0, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(3, (void *)func_ov016_0215cda0);
    puVar4 = func_ov016_0215cc68(piVar3);
    func_020042e8(puVar4);
    *(vu16 *)0x04000304 &= ~0x8000;
    puVar5 = func_020038b8(piVar3, 0xe10);
    data_ov016_0215d1c0 = puVar5;
    *(u32 *)puVar5 = (u32)piVar3;
    *(u32 *)(data_ov016_0215d1c0 + 0xd04) = 8;
    *(u32 *)(data_ov016_0215d1c0 + 0xd08) = 8;
    func_0206b0a4(data_ov016_0215cdbc, 0, 0x400);
    func_0206b8a8(data_ov016_0215cda4, 0, 0x20);
    uVar8 = func_ov016_0215c450();
    func_02005900(uVar8);
}
