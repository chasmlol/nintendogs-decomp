#include "ctx.h"

typedef struct Obj { u8 pad[0x10]; void (*cb)(struct Obj *); } Obj;
extern int *data_02159424;
extern int *data_0215be48;
extern int *data_02159438;
extern u32 data_02152cd8[];
extern u8 data_02152ce0[];
extern u16 data_0214efdc[];
extern void func_020b2848(void);
extern void func_020fcf7c(void);
extern void func_020b1a0c(void);
extern s32 func_020f523c(void);
extern void func_ov004_0215d8c4(void);
extern void func_ov004_0215cc94(void);
extern s32 func_020f5220(void);
extern void func_020f4008(void);
extern void func_02042644(void);
extern void func_020bc844(void);
extern void func_020ec63c(void);
extern void func_ov006_02164744(void);
extern void func_0208f6ac(int a);
extern s32 func_0208f698(int a);
extern void func_020e9040(void);
extern void func_0206a0dc(int a);
extern void func_0206a6f8(int a, int b, int c, int d, int e);
extern void func_020e9004(int a);
extern void func_020aa498(void);
extern void func_0209ad8c(void);
extern void func_0206c7f0(int a, int b, int c);

void func_020a5114(void)
{
    u32 auStack_3c[13];
    vu32 v1;
    vu32 v2;
    s32 iVar2;
    u16 *puVar3;
    s32 bVar1;
    Obj *po;

    func_020b2848();
    po = (Obj *)*(int *)((u8 *)data_02159424 + 4);
    po->cb(po);
    puVar3 = *(u16 **)((u8 *)data_02159424 + 0xc);
    puVar3[1] = 0;
    v1 = 0xc0;
    func_0206c7f0(v1, *(s32 *)(puVar3 + 2), (u32)puVar3[0] << 3);
    puVar3 = *(u16 **)((u8 *)data_02159424 + 0x10);
    puVar3[1] = 0;
    v2 = 0xc0;
    func_0206c7f0(v2, *(s32 *)(puVar3 + 2), (u32)puVar3[0] << 3);
    if (data_0215be48 != 0) {
        func_020fcf7c();
    }
    func_020b1a0c();
    iVar2 = func_020f523c();
    if (iVar2 != 0) {
        func_ov004_0215d8c4();
        func_ov004_0215cc94();
    }
    bVar1 = func_020f5220();
    if (bVar1) {
        func_020f4008();
    }
    func_02042644();
    func_020bc844();
    func_020ec63c();
    if (*(s32 *)((u8 *)data_02159424 + 0x14) != 0) {
        func_ov006_02164744();
    }
    func_0208f6ac(*(s32 *)((u8 *)data_02159424 + 8));
    iVar2 = func_0208f698(*(s32 *)((u8 *)data_02159424 + 8));
    func_020e9040();
    if ((data_02152cd8[0x3f] & 1) == 0) {
        *(vu32 *)0x04000440 = 0;
        func_0206a0dc((int)data_02152ce0);
    }
    func_0206a6f8(iVar2 + 0x30, iVar2 + 0x54, iVar2 + 0x3c, 1, (int)auStack_3c);
    func_020e9004((int)((u8 *)auStack_3c + 0));
    if ((*(u16 *)((u8 *)data_02159438 + 4) & 1) != 0) {
        func_020aa498();
    }
    if ((u16)(data_0214efdc[0] & 4) != 0) {
        func_0209ad8c();
    }
}
