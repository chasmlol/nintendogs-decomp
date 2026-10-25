#include "ctx.h"

extern u8 *data_02159424;
extern void func_020955e4(u8 *p, int v);
extern s32 func_020931a8(int v);
extern void func_02095578(s32 a, int b);
extern void func_02093160(u8 *p, int v);
extern void func_02094afc(u8 *p, int a, int b);
extern void func_02094aa4(u8 *p, int a, int b);
extern void func_02094a48(u8 *p, int a, int b);
extern void func_020949ec(u8 *p, int a, int b);
extern void func_02094994(u8 *p, int a, int b);
extern void func_0209493c(u8 *p, int a, int b);
extern void func_020948e0(u8 *p, int a, int b);
extern void func_02094884(u8 *p, int a, int b);

void func_020a4938(s16 param_1, s16 param_2)
{
    u8 *p;
    s32 uVar5;
    s32 iVar1;

    p = *(u8 **)(data_02159424 + 0x30);
    func_020955e4(p, param_1);
    *(s16 *)(p + 6) = -1;
    iVar1 = func_020931a8(param_2);
    func_02095578(iVar1, param_1);
    func_02093160(p, param_2);
    uVar5 = 0;
    do {
        func_02094afc(p + 0x85c, param_1, uVar5);
        func_02094aa4(p + 0x9d8, param_2, uVar5);
        func_02094a48(p + 0x9d8, param_1, uVar5);
        func_020949ec(p + 0x85c, param_2, uVar5);
        func_02094994(p + 0x998, param_1, uVar5);
        func_0209493c(p + 0xb14, param_2, uVar5);
        func_020948e0(p + 0xb14, param_1, uVar5);
        func_02094884(p + 0x998, param_2, uVar5);
        uVar5 = (s16)(uVar5 + 1);
    } while (uVar5 < 20);
}
