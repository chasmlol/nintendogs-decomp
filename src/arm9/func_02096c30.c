#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_02159034;
extern u32 data_0214f130;
extern u64 func_02080cf4(void);
extern void func_02080d08(u8 *p);
extern void func_02080d84(u8 *p);
extern s32 func_020978d0(s32 a, s32 b);
extern void func_02096d38(s32 a, s32 b, s32 c);

void func_02096c30(s32 param_1, s32 param_2, s32 param_3, s32 param_4)
{
    u8 buf[80];
    s32 iVar2;
    u8 *p7;
    u8 *p6;
    u8 *p5;
    s32 iVar1;
    u64 uVar3;
    u16 *t;
    u32 m;

    if (param_1 == 0) {
        iVar1 = *(s32 *)&data_0214f130;
        iVar2 = *(s32 *)(*(u8 **)&data_02159034 + 0x141c);
        p6 = (u8 *)iVar1 + 0x2c;
        p5 = (u8 *)iVar1 + 0x1c;
        p7 = (u8 *)iVar2 + 0x60;
        uVar3 = func_02080cf4();
        func_02080d08(buf);
        m = (__typeof__(m))~(0);
        *(u32 *)(iVar2 + 0x60) = (u32)uVar3 & m;
        *(u32 *)(p7 + 4) = (u32)(uVar3 >> 32) & m;
        func_02080d84(p7 + 8);
        p7[14] = *(u32 *)(p6 + 8);
        p7[15] = *(u32 *)(p6 + 4);
        p7[16] = *(u32 *)(iVar1 + 0x2c);
        p7[17] = *(u32 *)(p5 + 8);
        p7[18] = *(u32 *)(p5 + 4);
        p7[19] = *(u32 *)(iVar1 + 0x1c);
        t = (u16 *)(iVar2 + 0x600);
        t[87] = t[87] | 1;
    }
    iVar1 = func_020978d0(param_1, param_2);
    if (*(s32 *)(iVar1 + 0x10) != 0) {
        func_02096d38(iVar1, param_3, param_4);
    }
}
