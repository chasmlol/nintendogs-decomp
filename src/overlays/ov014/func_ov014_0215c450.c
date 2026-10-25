#include "ctx.h"

extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov014_0215c778(void);
extern u8 data_ov014_0215c7a0[];
extern s32 data_ov014_0215c7c0;
extern u8 data_ov014_0215c780[];
extern s32 func_02002e60(void);
extern s32 func_02002e58(s32);
extern void func_020068c4(s32 *, u16 *);
extern void func_020068c0(s32 *, s32);
extern void func_02006700(s32, void *);
extern void func_0208c604(s32 *, s32);
extern void func_02005e18(u16 *);
extern u16 *func_0200563c(s32 *, u16 *);
extern void func_0200560c(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_020055b4(void *, s32, s32, s32, s32, s32, s32);
extern s16 *func_020038b8(s32 *, s32);
extern u32 func_0208c5b4(void *);
extern void func_02090cfc(void *, s32);
extern void func_02091f38(void *);
extern void func_02091e24(void *, void *, s32, s32);
extern s32 *func_020073f4(s32 *, s32, s32, s32);
extern void func_020042e8(void *);
extern u8 *func_ov014_0215c6a8(s32 *);
extern void func_0206b8a8(void *, s32, s32);
extern void func_0208010c(void *, s32);
extern u64 func_0206b3e4(void *, s32, s32);
extern void func_02005900(u32, u32);

static inline void FillTable(void)
{
    s32 iVar8, iVar12, iVar11, iVar1;
    iVar11 = 0;
    iVar1 = 0;
    do {
        iVar12 = 0;
        do {
            iVar8 = iVar12 + iVar1;
            *(s16 *)(data_ov014_0215c7c0 + iVar8 * 2 + 0x39c) = (s16)iVar8;
            iVar12 = iVar12 + 1;
        } while (iVar12 < 0x20);
        iVar11 = iVar11 + 1;
        iVar1 = iVar1 + 0x20;
    } while (iVar11 < 0x18);
}

void func_ov014_0215c450(void)
{
    s32 *piVar2;
    s16 *puVar4;
    u16 *puVar3;
    s32 *puVar5;
    u8 *puVar6;
    u16 pair[2];
    u16 buf[22];
    u64 uVar13;

    s32 iVar1x;
    iVar1x = func_02002e60();
    piVar2 = (s32 *)func_02002e58(iVar1x);
    pair[0] = 0xff;
    pair[1] = 0;
    func_020068c4(piVar2, pair);
    func_020068c0(piVar2, 4);
    func_02006700(0, (void *)func_020068a0);
    func_02006700(1, (void *)func_020067d8);
    func_02006700(2, (void *)func_02006734);
    func_02006700(3, (void *)func_ov014_0215c778);
    func_0208c604(piVar2, 3);
    func_02005e18(buf);
    buf[1] = 5;
    buf[3] = 1;
    buf[5] = 1;
    buf[4] = 0;
    buf[7] = 8;
    buf[11] = 7;
    buf[12] = 16;
    buf[8] = 64;
    puVar3 = func_0200563c(piVar2, buf);
    func_0200560c(puVar3 + 0x16, 2, 0, 0, 1, 5, 1, 0);
    func_020055b4(puVar3 + 0x16, 1, 0, 0, 0, 0x18, 1);
    puVar4 = func_020038b8(piVar2, 0x99c);
    *(s16 *)puVar4 = -1;
    *(s32 *)(puVar4 + 2) = 0;
    *(s32 *)(puVar4 + 4) = func_0208c5b4(data_ov014_0215c7a0);
    func_02090cfc(puVar4 + 6, *(s32 *)(puVar4 + 4));
    func_02091f38(puVar4 + 0x1c);
    func_02091e24(puVar4 + 0x1c, puVar4 + 6, 0x13f5, 1);
    puVar5 = func_020073f4(piVar2, 0x20, 0x18, 0);
    *(s32 **)(puVar4 + 0x1cc) = puVar5;
    data_ov014_0215c7c0 = (s32)puVar4;
    func_020042e8(puVar3);
    puVar6 = func_ov014_0215c6a8(piVar2);
    *(u8 **)(data_ov014_0215c7c0 + 4) = puVar6;
    func_0206b8a8(data_ov014_0215c780, 0, 0x20);
    FillTable();
    func_0208010c((void *)(data_ov014_0215c7c0 + 0x39c), 0x600);
    uVar13 = func_0206b3e4((void *)(data_ov014_0215c7c0 + 0x39c), 0, 0x600);
    func_02005900((u32)uVar13, (u32)(uVar13 >> 32));
}
