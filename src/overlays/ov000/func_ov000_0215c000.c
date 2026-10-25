#include "ctx.h"

extern u8 *data_ov000_0215c584;
extern u8 *data_ov000_0215c580;
extern u8 data_0215be48[];
extern u8 data_0214f138[];
extern void func_ov000_0215c288(s32 a);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern s32 func_020f1e1c(void);
extern void func_020f1c14(s32 a);
extern void func_0206c7f0(s32 a, u32 *b, s32 c);
extern void func_020fcf7c(void);
extern void func_0208f6ac(u8 *a);
extern void func_02003fb4(void);
extern void func_0206b714(u32 a, s32 b, s32 c);
extern void func_0206b6ac(u32 a, s32 b, s32 c);
extern void func_020fcbb4(void);
extern void func_0207c990(void);
extern void func_020fcacc(void);
extern void func_02003efc(void);
extern void func_02003ca0(s32 a);
extern void func_02003ab0(u8 *a, u8 *b);
extern void func_020f1d50(void);
extern void func_020075b4(void);
extern void func_0208e36c(void);
extern void func_02004280(void);
extern void func_020068a4(void);
extern void func_0208c564(void);
extern void func_02090e30(void);
extern void func_020959d0(void);
extern void func_02109238(void);
extern void func_020fcaa4(void);
extern void func_ov000_0215c1fc(void);
extern void func_ov000_0215c180(void);

u32 func_ov000_0215c000(u32 param_1, u32 param_2, s32 *param_3, s32 param_4)
{
    s32 bVar1;
    s32 bVar6;
    u16 *puVar7;
    volatile s32 vk;
    volatile s32 vk2;

    bVar1 = 1;
    func_ov000_0215c288(param_1);
    func_02003df8(30);
    do {
        func_0200413c();
        bVar6 = func_020f1e1c();
        if (bVar6 != 0) {
            func_020f1c14(bVar6);
        }
        puVar7 = *(u16 **)data_ov000_0215c584;
        puVar7[1] = 0;
        vk = 0xc0;
        func_0206c7f0(vk, *(u32 **)(puVar7 + 2), (u32)*puVar7 << 3);
        puVar7 = *(u16 **)(data_ov000_0215c584 + 4);
        puVar7[1] = 0;
        vk2 = 0xc0;
        func_0206c7f0(vk2, *(u32 **)(puVar7 + 2), (u32)*puVar7 << 3);
        func_020fcf7c();
        func_0208f6ac(data_ov000_0215c580);
        if (*(s32 *)(*(u8 **)data_0215be48 + 0x1d9c) != 0) {
            bVar1 = 0;
        }
        func_02003fb4();
        func_0206b714(*(u32 *)(*(u16 **)data_ov000_0215c584 + 2), 0, (u32)**(u16 **)data_ov000_0215c584 << 3);
        func_0206b6ac(*(u32 *)(*(u16 **)(data_ov000_0215c584 + 4) + 2), 0, (u32)**(u16 **)(data_ov000_0215c584 + 4) << 3);
        func_020fcbb4();
        {
            void (*cbf)(u8 *) = *(void (**)(u8 *))(data_0214f138 + 0x14);
            if (cbf != 0) {
                cbf(data_0214f138);
            }
        }
        func_0207c990();
        func_020fcacc();
        func_02003efc();
    } while (bVar1 != 0);
    func_02003ca0(30);
    func_02003ab0((u8 *)func_ov000_0215c1fc, (u8 *)func_ov000_0215c180);
    func_020f1d50();
    func_020075b4();
    func_0208e36c();
    func_02004280();
    func_020068a4();
    func_0208c564();
    func_02090e30();
    func_020959d0();
    func_02109238();
    func_020fcaa4();
    data_ov000_0215c580 = 0;
    return 0;
}
