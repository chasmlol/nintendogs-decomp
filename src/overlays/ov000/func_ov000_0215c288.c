#include "ctx.h"

extern u32 data_ov000_0215c580[];
extern u32 *data_ov000_0215c584;
typedef struct { u16 a[4]; u32 f; } T8;

extern void func_020068a0(void);
extern void func_020067d8(void);
extern void func_02006734(void);
extern void func_ov000_0215c568(void);
extern void func_020e9268(void);

extern s32 func_02002e60(void);
extern s32 *func_02002e58(s32 a);
extern void func_020068c4(s32 *a, u16 *b);
extern void func_020068c0(s32 *a, u32 b);
extern void func_02006700(u32 a, u32 b);
extern u8 *func_ov000_0215c498(s32 *a);
extern void func_020042e8(u32 a);
extern void func_0209944c(void);
extern void func_0208e398(s32 *a);
extern void func_0208e1e8(u16 *a);
extern void func_020e9258(u32 a);
extern u8 *func_0208e150(s32 *a, u16 *b);
extern s32 func_0208f698(u32 a);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(u32 *a, s32 *b);
extern void func_020f1d84(s32 *a, u32 b, u32 *c);
extern void func_020f1d34(void);
extern void func_020f1d14(void);
extern void func_02090f40(s32 *a, u32 b);
extern void *func_020038b8(s32 *a, u32 b);
extern u16 *func_02006cc4(s32 *a, u32 b);
extern void func_020fe06c(u32 a, s32 *b);
extern void func_020fc898(u32 a);
extern void func_020fc880(u32 a);
extern void func_02107d9c(u32 a);
extern void func_02107d00(void);
extern void func_02107ccc(void);
extern u64 func_0209af44(u32 a);
extern void func_02005900(u32 a, u32 b);

void func_ov000_0215c288(u32 param_1)
{
    s32 iVar1;
    s32 *piVar2;
    u16 *puVar3;
    u8 *puVar4;
    u32 *puVar5;
    u16 *puVar6;
    u32 uVar7;
    u32 *pa;
    u32 *pb;
    u64 uVar10;
    u32 uVar9;
    u16 local_20[2];
    T8 st;

    iVar1 = func_02002e60();
    piVar2 = func_02002e58(iVar1);
    uVar9 = 0xff;
    local_20[0] = (u16)uVar9;
    local_20[1] = 0;
    func_020068c4(piVar2, local_20);
    func_020068c0(piVar2, 4);
    func_02006700(0, (u32)func_020068a0);
    func_02006700(1, (u32)func_020067d8);
    func_02006700(2, (u32)func_02006734);
    func_02006700(3, (u32)func_ov000_0215c568);
    puVar3 = (u16 *)func_ov000_0215c498(piVar2);
    func_020042e8((u32)puVar3);
    *(vu16 *)0x04000304 = *(vu16 *)0x04000304 | 0x8000;
    func_0209944c();
    func_0208e398(piVar2);
    func_0208e1e8(st.a);
    func_020e9258(2);
    st.a[0] = 3;
    st.f = (u32)func_020e9268;
    puVar4 = func_0208e150(piVar2, st.a);
    data_ov000_0215c580[0] = (u32)puVar4;
    iVar1 = func_0208f698((u32)puVar4);
    pa = (u32 *)((u8 *)iVar1 + 60);
    *(u32 *)(iVar1 + 0x3c) = 0;
    pa[1] = 0;
    pa[2] = 0;
    *(u32 *)(iVar1 + 0x30) = 0;
    pb = (u32 *)((u8 *)iVar1 + 48);
    pb[1] = 0;
    pb[2] = 0x7000;
    func_02067e34((s32 *)pa, (s32 *)pb, (s32 *)(iVar1 + 0x48));
    func_02006a30((u32 *)(iVar1 + 0x48), (s32 *)(iVar1 + 0x48));
    puVar5 = data_ov000_0215c580;
    uVar7 = data_ov000_0215c580[0];
    data_ov000_0215c580[0] = uVar7;
    func_020f1d84(piVar2, uVar7, puVar5);
    func_020f1d34();
    func_020f1d14();
    func_02090f40(piVar2, 3);
    func_02090f40(piVar2, 8);
    puVar5 = (u32 *)func_020038b8(piVar2, 8);
    puVar6 = func_02006cc4(piVar2, 0x80);
    puVar5[0] = (u32)puVar6;
    puVar6 = func_02006cc4(piVar2, 0x80);
    puVar5[1] = (u32)puVar6;
    data_ov000_0215c584 = puVar5;
    func_020fe06c(9, piVar2);
    func_020fc898(data_ov000_0215c584[0]);
    func_020fc880(data_ov000_0215c584[1]);
    switch (param_1) {
    case 0:
    case 3:
        func_02107d9c(param_1);
        break;
    case 1:
        func_02107d00();
        break;
    case 2:
        func_02107ccc();
        break;
    }
    uVar10 = func_0209af44(3);
    func_02005900((u32)uVar10, (u32)(uVar10 >> 32));
}
