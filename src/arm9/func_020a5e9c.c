#include "ctx.h"

extern u8 *data_0215942c;
extern s32 *data_02159424;
extern s32 data_0214193c;
extern s32 data_0215be48;
extern void func_0208af7c(void);
extern void func_020e9078(void);
extern void func_02097b40(void);
extern void func_020bc2c0(void);
extern void func_ov006_02165368(void);
extern void func_ov006_02164708(void);
extern s32 func_ov005_02164ec4(void);
extern void func_ov005_02164cac(void);
extern s32 func_ov004_0216ea3c(void);
extern void func_ov004_0216e990(void);
extern void func_020ec718(void);
extern void func_020bcc10(void);
extern void func_020ab6cc(void);
extern void func_02042100(void);
extern void func_0208d18c(void);
extern s32 func_020f5220(void);
extern void func_020f4b38(void);
extern void func_020a74ec(void);
extern s32 func_020f523c(void);
extern void func_ov004_021646fc(void);
extern void func_020fcaa4(s32 a);
extern void func_020b19d0(void);
extern void func_02090e30(void);
extern void func_0208c564(void);
extern void func_02096c20(s32 a, s32 b, s32 c);
extern void func_02095a0c(void);
extern void func_02095d6c(s32 a, s32 b, s32 c, s32 d);
extern void func_020959ec(void);
extern void func_020959d0(void);
extern void func_0208e36c(void);
extern void func_0209a62c(void);
extern void func_020aa5a8(void);
extern void func_020b2874(void);
extern void func_020075b4(void);
extern void func_020068a4(void);
extern void func_020034a8(void);
extern void func_020979cc(void);

void func_020a5e9c(void)
{
    s32 iVar1;
    s32 bVar4;

    if ((*(u16 *)data_0215942c & 0x8000) == 0) {
        func_0208af7c();
    }
    func_020e9078();
    func_02097b40();
    func_020bc2c0();
    if (*(s32 *)((u8 *)data_02159424 + 0x14) != 0) {
        func_ov006_02165368();
        func_ov006_02164708();
    }
    if (data_0214193c == 0x17) {
        bVar4 = func_ov005_02164ec4() != 0;
    } else {
        bVar4 = 0;
    }
    if (bVar4) {
        func_ov005_02164cac();
    }
    if (data_0214193c == 0x16) {
        bVar4 = func_ov004_0216ea3c() != 0;
    } else {
        bVar4 = 0;
    }
    if (bVar4) {
        func_ov004_0216e990();
    }
    func_020ec718();
    func_020bcc10();
    func_020ab6cc();
    func_02042100();
    func_0208d18c();
    if (func_020f5220() != 0) {
        func_020f4b38();
    }
    func_020a74ec();
    if (func_020f523c() != 0) {
        func_ov004_021646fc();
    }
    if (data_0215be48 != 0) {
        func_020fcaa4(data_0215be48);
    }
    func_020b19d0();
    func_02090e30();
    func_0208c564();
    switch (*(u16 *)data_0215942c) {
    case 6:
        func_02096c20(0, 0, 0);
        func_02095a0c();
        func_02095d6c(0, 0, 0, 1);
        func_020959ec();
        break;
    case 7:
        if (*(s32 *)(*(s32 *)((u8 *)data_02159424 + 4) + 0x18) != 12) {
            func_02096c20(0, 0, 0);
            func_02095a0c();
            func_02095d6c(0, 0, 0, 1);
            func_020959ec();
        }
        break;
    case 1:
    case 3:
    case 4:
        if (*(s16 *)data_02159424 != 0) {
            func_02096c20(0, 0, 0);
            func_02096c20(1, (u32)*(u16 *)(data_0215942c + 0xe), 0);
            func_02095a0c();
            func_02095d6c(1, (u32)*(u16 *)(data_0215942c + 0xe), 0, 1);
            func_02095d6c(0, 0, 0, 1);
            func_020959ec();
        }
        break;
    case 0:
    case 2:
    case 5:
        break;
    }
    func_020959d0();
    func_0208e36c();
    func_0209a62c();
    func_020aa5a8();
    func_020b2874();
    func_020075b4();
    func_020068a4();
    func_020034a8();
    iVar1 = (s32)data_0215942c;
    data_02159424 = 0;
    if (*(u16 *)(iVar1 + 2) == 0xffff) {
        return;
    }
    func_020979cc();
}
