#include "ctx.h"
extern u8 data_ov027_0215c5e0[];
extern u8 data_ov027_0215c5a0[];
extern u8 data_ov027_0215c5a4[];
extern u8 data_02159030[];
extern u8 data_02159058[];
extern u8 data_0214efdc[];
extern void func_ov027_0215c280(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_0208f6ac(u8 *p);
extern u32 func_02090cac(u32 a, u32 b, s32 c);
typedef struct { vu16 v; } S2;
extern void func_0208fd90(s16 *a, u32 *b, u32 *c, S2 d, S2 e, s32 f, s32 g, u32 h, s32 i, void *j);
extern s32 func_02003a10(void);
extern void func_02003fb4(void);
extern void func_0208010c(u32 a, u32 b);
extern void func_02007354(u32 *a, s32 b, s32 c);
extern void func_02003efc(void);
extern void func_02003d00(s32 a);
extern void func_02003ab0(u32 a, u32 b);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern u32 func_020068a4(void);
extern void func_0208c564(u32 a);
extern void func_ov027_0215c1b8(void);
extern void func_ov027_0215c170(void);
extern void SwapB_unused(void);

u32 func_ov027_0215c000(void)
{
    s32 bVar3 = 1;
    s32 iVar9;
    s16 asStack_3c[12];
    S2 uVar1;
    S2 uVar2;
    u32 *psVar8;
    u8 *obj;

    func_ov027_0215c280();
    func_02003df8(30);
    do {
        func_0200413c();
        obj = *(u8 **)data_ov027_0215c5e0;
        func_0208f6ac(*(u8 **)obj);
        uVar1.v = *(u16 *)data_ov027_0215c5a0;
        uVar2.v = *(u16 *)data_ov027_0215c5a4;
        psVar8 = (u32 *)func_02090cac(*(u32 *)(*(u8 **)data_02159030 + 0x28), 0x27d8, 0);
        func_0208fd90(asStack_3c, *(u32 **)data_02159058, *(u32 **)(*(u8 **)data_ov027_0215c5e0 + 4), uVar1, uVar2, 1, 1, (u32)psVar8, 1, 0);
        iVar9 = func_02003a10();
        if (iVar9 != 0 && (u16)(*(u16 *)data_0214efdc & 8) != 0) {
            bVar3 = 0;
        }
        func_02003fb4();
        func_0208010c(**(u32 **)(*(u8 **)data_ov027_0215c5e0 + 4), (*(u32 **)(*(u8 **)data_ov027_0215c5e0 + 4))[4]);
        func_02007354(*(u32 **)(*(u8 **)data_ov027_0215c5e0 + 4), 0, 0);
        func_02003efc();
    } while (bVar3 != 0);
    func_02003d00(60);
    func_02003ab0((u32)func_ov027_0215c1b8, (u32)func_ov027_0215c170);
    func_0208e36c();
    func_02004280();
    func_0208c564(func_020068a4());
    *(u32 *)data_ov027_0215c5e0 = (u32)0;
    (void)obj;
    return 0;
}
