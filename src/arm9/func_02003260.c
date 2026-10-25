#include "ctx.h"
extern u16 data_02126714[];
extern u8 data_0214efdc[];
extern u8 data_0213692c[];
extern u8 data_02136938[];
extern u8 data_02136944[];
extern u8 data_02136950[];
extern void func_02006360(void);
extern void func_0207e9f8(s32 a, s32 b);
extern s16 func_02068928(void);
extern void func_02069724(s32 a);
extern void func_020683f8(void);
extern void func_0206833c(u32 a, s32 b);
extern void func_02068384(s32 a, s32 b, s32 c);
extern void func_02006028(void);
extern void func_02005f84(void);
extern void func_02005e78();
extern void func_02080074(void);
extern void func_02005fe4(void);

void func_02003260(u8 *param_1, s32 param_2, u32 param_3, u32 param_4)
{
    u32 r9 = 0;
    s32 r8 = 0;
    u16 uVar1;
    u16 w;
    s16 sVar6;
    u32 r7;
    u32 r6;

    do {
        func_02006360();
        w = *(u16 *)data_0214efdc;
        if ((u16)(w & 0xff3) != 0) {
            uVar1 = data_02126714[r8];
            if (uVar1 == (u16)(w & uVar1)) {
                r8 = (s16)(r8 + 1);
                if (r8 >= 10) {
                    r9 = 1;
                }
            } else {
                r8 = 0;
            }
        }
        func_0207e9f8(1, 1);
    } while (r9 == 0);
    sVar6 = func_02068928();
    if (sVar6 == 0) {
        func_02069724(4);
    }
    func_020683f8();
    func_0206833c(0x0400006c, 0);
    func_02068384(1, 0, 1);
    *(u32 *)0x04000000 = (*(u32 *)0x04000000 & 0xffffe0ff) | 0x300;
    *(u16 *)0x0400000a = (u16)((*(u16 *)0x0400000a & 0x43) | 0x400);
    *(u16 *)0x0400000a = (u16)(*(u16 *)0x0400000a & ~3);
    *(u16 *)0x0400000a = (u16)(*(u16 *)0x0400000a & ~64);
    func_02006028();
    func_02005f84();
    r7 = 0;
    do {
        r6 = ((u32 *)param_1 + r7)[1];
        func_02005e78(0, r7 & 0xff, data_0213692c, r7, r6);
        r7 = r7 + 1;
    } while ((s32)r7 < 13);
    func_02005e78(0, 0x12, data_02136938, *(u32 *)(param_1 + 0x38));
    func_02005e78(0, 0x13, data_02136944, *(u32 *)(param_1 + 0x3c));
    func_02005e78(0, 0x14, data_02136950, *(u32 *)(param_1 + 0x40));
    func_02080074();
    do {
        func_02005fe4();
    } while (1);
}
