#include "ctx.h"

extern u8 *data_02159424;
extern u8 *data_02159438;
extern u8 data_0214f138[];
extern u8 *data_0215942c;
extern void func_020a52c8(s32 a, s32 b, s32 c, s32 d);
extern void func_020df32c(void);
extern void func_02003df8(s32 a);
extern void func_0200413c(void);
extern void func_020a5114(void);
extern void func_02003fb4(void);
extern void func_0206b714(u32 a, s32 b, s32 c);
extern void func_0206b6ac(u32 a, s32 b, s32 c);
extern void func_020fcbb4(void);
extern s32 func_020f523c(void);
extern void func_ov004_0215cbec(void);
extern void func_020bc7d4(void);
extern void func_020ec630(void);
extern void func_0207c990(void);
extern void func_020425f8(void);
extern void func_020aa18c(void);
extern void func_020fcacc(void);
extern void func_02003efc(void);
extern void func_02003ca0(s32 a);
extern void func_0209ad58(s32 a);
extern void func_020a0d04(s32 a, s32 b);
extern void func_02003ab0(void *a, void *b);
extern void func_020a5060(void);
extern void func_02004180(s32 a);
extern void func_020a5e9c(void);

s32 func_020a4e94(s32 param_1, s32 param_2, u32 param_3, u32 param_4)
{
    s32 iVar4;
    u32 uVar6;
    u8 *puVar7;
    s32 uVar8;
    u8 *ap;
    u8 **pp;

    func_020a52c8(param_1, param_2, param_3, param_4);
    func_020df32c();
    func_02003df8(15);
    puVar7 = *(u8 **)(data_02159424 + 4);
    iVar4 = *(s32 *)(puVar7 + 0xc);
    if (iVar4 == 0) {
        pp = &data_02159438;
        ap = data_0214f138;
        do {
            func_0200413c();
            func_020a5114();
            func_02003fb4();
            func_0206b714(*(u32 *)(*(u16 **)(data_02159424 + 0xc) + 2), 0, (u32)**(u16 **)(data_02159424 + 0xc) << 3);
            func_0206b6ac(*(u32 *)(*(u16 **)(data_02159424 + 0x10) + 2), 0, (u32)**(u16 **)(data_02159424 + 0x10) << 3);
            func_020fcbb4();
            if (*(s32 *)(ap + 0x14) != 0) {
                ((void (*)(s32))(*(s32 *)(ap + 0x14)))((s32)ap);
            }
            iVar4 = func_020f523c();
            if (iVar4 != 0) {
                func_ov004_0215cbec();
            }
            func_020bc7d4();
            func_020ec630();
            func_0207c990();
            func_020425f8();
            if ((*(u16 *)(*pp + 4) & 1) != 0) {
                func_020aa18c();
            }
            func_020fcacc();
            func_02003efc();
            puVar7 = *(u8 **)(data_02159424 + 4);
            iVar4 = *(s32 *)(puVar7 + 0xc);
        } while (iVar4 == 0);
    }
    uVar8 = *(s32 *)(puVar7 + 0x18);
    if (*(u16 *)data_0215942c == 0x8003) {
        func_02003ca0(90);
        func_0209ad58(90);
    } else {
        func_02003ca0(30);
        func_0209ad58(30);
    }
    uVar6 = *(u16 *)data_0215942c;
    if ((s32)uVar6 > (s32)0x8003) {
        goto big;
    }
    if ((s32)uVar6 >= (s32)0x8003) {
        goto call;
    }
    if ((s32)uVar6 > 3) {
        goto end;
    }
    if ((s32)uVar6 < 1) {
        goto end;
    }
    if (uVar6 == 1) {
        goto call;
    }
    if (uVar6 != 3) {
        goto end;
    }
    goto call;
big:
    if (uVar6 != 0xc002) {
        goto end;
    }
call:
    func_020a0d04(0, 60);
end:
    func_02003ab0((void *)func_020a5114, (void *)func_020a5060);
    func_02004180(10);
    func_020a5e9c();
    return uVar8;
}
