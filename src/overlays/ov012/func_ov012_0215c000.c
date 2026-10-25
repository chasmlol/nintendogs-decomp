#include "ctx.h"

typedef struct { u8 x; u8 y; u16 flags; } TouchState;
extern TouchState data_0214f004;
extern u32 data_ov012_0215c720;
extern u8 data_0214efdc[];
extern void func_ov012_0215c268(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(s32 a);
extern void func_0206c7f0(u32 a, void *b, u32 c);
extern void func_020fcf7c(void);
extern s32 func_02003a10(void);
extern void func_02080d84(void *a);
extern void func_02003fb4(void);
extern void func_020fcbb4(void);
extern void func_0207c990(void);
extern void func_020fcacc(void);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(void *a, void *b);
extern u64 func_020075b4(void);
extern void func_020fcaa4(u64 a);
extern u64 func_0208e36c(void);
extern void func_0208c564(u64 a);
extern void func_02090e30(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_ov012_0215c188(void);
extern void func_ov012_0215c168(void);

s32 func_ov012_0215c000(void)
{
    u8 *pa;
    s32 bVar2;
    u16 zero;
    u32 c192;
    s32 one;
    u32 *piVar4;
    u8 *pbVar3;
    u16 *puVar5;
    u16 *puVar8;
    u32 uVar7;
    u8 *puVar9;
    s32 iVar6;
    u8 auStack_38[8];
    volatile u32 local_30;
    volatile u32 local_2c;
    u64 uVar11;

    bVar2 = 1;
    func_ov012_0215c268();
    func_02003df8(0x1e);
    pa = auStack_38;
    do {
        func_0200413c();
        func_0208f6ac(*(s32 *)data_ov012_0215c720);
        puVar8 = *(u16 **)((u8 *)data_ov012_0215c720 + 0x1c);
        puVar8[1] = 0;
        local_30 = 192;
        func_0206c7f0(local_30, *(void **)(puVar8 + 2), (u32)*puVar8 << 3);
        puVar8 = *(u16 **)((u8 *)data_ov012_0215c720 + 0x20);
        puVar8[1] = 0;
        local_2c = 192;
        func_0206c7f0(local_2c, *(void **)(puVar8 + 2), (u32)*puVar8 << 3);
        func_020fcf7c();
        if ((data_0214f004.flags & 1) != 0) {
            uVar7 = 1;
        } else {
            uVar7 = 0;
        }
        *(u32 *)((u8 *)data_ov012_0215c720 + 0xc) = uVar7;
        puVar9 = (u8 *)data_ov012_0215c720;
        if (*(s32 *)(puVar9 + 0xc) != 0) {
            s32 tb1 = data_0214f004.y;
            *(u32 *)(puVar9 + 0x10) = data_0214f004.x;
            *(u32 *)((u8 *)data_ov012_0215c720 + 0x14) = tb1;
        }
        func_02080d84(pa);
        iVar6 = func_02003a10();
        if (iVar6 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar2 = 0;
        }
        func_02003fb4();
        func_020fcbb4();
        func_0207c990();
        func_020fcacc();
        func_02003efc();
    } while (bVar2);
    func_02003d00(0x3c);
    func_02003ab0((void *)func_ov012_0215c188, (void *)func_ov012_0215c168);
    uVar11 = func_020075b4();
    func_020fcaa4(uVar11);
    uVar11 = func_0208e36c();
    func_0208c564(uVar11);
    func_02090e30();
    func_02004280();
    func_020068a4();
    data_ov012_0215c720 = 0;
    return 0;
}
