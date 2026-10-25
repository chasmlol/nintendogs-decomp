#include "ctx.h"

extern u16 data_0214f9b0;
extern u8 *data_0214f9b4;
extern u8 data_0214f9b8[];
extern u8 data_0214f9cc[];
extern u8 data_0214fa40[];
extern void func_02063cf8(void);

extern void func_0206cc88(void);
extern s32 func_0206ce6c(s32 a, s32 b);
extern void func_020800d4(u8 *a, u32 b);
extern void func_0206c3dc(u32 a, u8 *b, u32 c, u32 d);
extern void func_02063cdc(void);
extern void func_020649d8(u32 a, u32 b, u32 c);
extern void func_0207fe04(u8 *a, u8 *b, u32 c);
extern void func_020800f0(u8 *a, u32 b);
extern void func_0207fd5c(u8 *a, u8 *b, u32 c);
extern void func_0206ce94(u32 a, void (*b)(void));

u32 func_020643a8(u8 *param_1, u32 param_2, u32 param_3)
{
    s32 i;
    s32 j;
    u8 *puVar7;
    s32 bVar4;

    if (data_0214f9b0 != 0) {
        return 3;
    }
    data_0214f9b0 = 1;
    if (param_1 == 0) {
        data_0214f9b0 = 0;
        return 6;
    }
    if (param_2 > 3) {
        data_0214f9b0 = 0;
        return 6;
    }
    if (((u32)param_1 & 0x1f) != 0) {
        data_0214f9b0 = 0;
        return 6;
    }
    func_0206cc88();
    bVar4 = func_0206ce6c(10, 1);
    if (bVar4 == 0) {
        data_0214f9b0 = 0;
        return 4;
    }
    func_020800d4(param_1, param_3);
    func_0206c3dc(param_2, param_1, 0, param_3);
    data_0214f9b4 = param_1;
    *(u32 *)param_1 = (u32)(param_1 + 0xa00);
    ((u32 *)data_0214f9b4)[1] = ((u32 *)data_0214f9b4)[0] + 0x300;
    ((u32 *)data_0214f9b4)[3] = ((u32 *)data_0214f9b4)[1] + 0x800;
    ((u32 *)data_0214f9b4)[4] = ((u32 *)data_0214f9b4)[3] + 0x100;
    func_02063cdc();
    *(u16 *)(data_0214f9b4 + 20) = (u16)param_2;
    *(u32 *)(data_0214f9b4 + 0x15c) = 0;
    for (i = 0; i < 16; i++) {
        func_020649d8((u16)i, 0, 0);
    }
    func_0207fe04(data_0214f9b8, data_0214f9cc, 10);
    puVar7 = data_0214fa40;
    for (j = 0; j < 10; j++) {
        *(u16 *)puVar7 = 0x8000;
        func_020800f0(puVar7, 2);
        func_0207fd5c(data_0214f9b8, puVar7, 1);
        puVar7 += 256;
    }
    func_0206ce94(10, func_02063cf8);
    return 0;
}
