#include "ctx.h"

extern u8 data_0215943c[];
extern void func_02006700(u32 idx, u32 fn);
extern void func_020aab2c(void);
extern u32 func_020af9f0(u8 *p);
extern u32 func_020b08f8(u8 *p, u32 a);
extern u32 func_020b13f0(u8 *p);
extern u32 func_020bb79c(u8 *p);
extern u32 func_020b177c(u8 *p);
extern u32 func_020aff00(u8 *p, u32 a, u32 b);
extern u32 func_020b0c08(u8 *p, u32 a);
extern u32 func_020b1ea4(u8 *p, u32 a, u32 b);
extern u32 func_020b509c(u8 *p, u32 a, u32 b);
extern u32 func_020b7200(u8 *p, u32 a);
extern u32 func_020b30f0(u8 *p, u32 a);
extern u32 func_020b3978(u8 *p, u32 a);
extern u32 func_020b3ae4(u8 *p);
extern u32 func_020b4168(u8 *p);
extern u32 func_020b7168(u8 *p);
extern u32 func_020b7e20(u8 *p);
extern u32 func_020b9a3c(u8 *p);
extern u32 func_020bb3f0(u8 *p);

u32 func_020aa914(u8 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 puVar1;

    puVar1 = 0;
    switch (param_2) {
    case 0xc000:
        puVar1 = func_020af9f0(param_1);
        break;
    case 0:
    case 10:
    case 15:
    case 18:
        puVar1 = func_020b08f8(param_1, param_4);
        break;
    case 12:
        puVar1 = func_020b7168(param_1);
        break;
    case 1:
        puVar1 = func_020aff00(param_1, param_3, param_4);
        break;
    case 3:
        puVar1 = func_020b1ea4(param_1, param_3, param_4);
        break;
    case 4:
        puVar1 = func_020b509c(param_1, param_3, param_4);
        break;
    case 2:
        puVar1 = func_020b0c08(param_1, param_4);
        break;
    case 0xc002:
        puVar1 = func_020b13f0(param_1);
        break;
    case 6:
        puVar1 = func_020b7200(param_1, param_4);
        break;
    case 7:
        puVar1 = func_020b30f0(param_1, param_4);
        break;
    case 0x8003:
        puVar1 = func_020b177c(param_1);
        break;
    case 8:
    case 16:
        puVar1 = func_020b3978(param_1, param_4);
        break;
    case 9:
        puVar1 = func_020b3ae4(param_1);
        break;
    case 11:
        puVar1 = func_020b4168(param_1);
        break;
    case 13:
        puVar1 = func_020b7e20(param_1);
        break;
    case 14:
        puVar1 = func_020b9a3c(param_1);
        break;
    case 17:
        puVar1 = func_020bb3f0(param_1);
        break;
    case 0x8005:
        puVar1 = func_020bb79c(param_1);
        break;
    }
    func_02006700(10, (u32)func_020aab2c);
    *(u32 *)data_0215943c = puVar1;
    return puVar1;
}
