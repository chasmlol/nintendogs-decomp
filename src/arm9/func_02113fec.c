#include "ctx.h"

extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern void func_02117804(u8 *p);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021179b0(u8 *p, s32 a, s32 b);
extern void func_0210449c(void);
extern void func_02108e24(s32 a);

void func_02113fec(u8 *param_1)
{
    u8 *Q;
    u8 *R;
    s32 iVar1;
    s32 a;
    s32 b;

    Q = *(u8 **)&data_0215be48;
    Q = Q + 0x4000;
    if (*(s32 *)(Q + 0x8b8) == 1) {
        func_02117804(param_1 + 8);
        func_02117804(param_1 + 0x44);
        func_02117804(param_1 + 0x80);
        return;
    }
    if (*(s32 *)(Q + 0x860) == 0) {
        return;
    }
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) {
        return;
    }
    a = (s16)(s32)data_0214f004[0] + 0;
    b = (s16)(s32)data_0214f004[1] + 0;
    iVar1 = func_02112320(2, a, b);
    if (iVar1 < 0) {
        R = data_0215be48 + 0x1000;
        *(s32 *)(R + 0xd70) = -1;
        return;
    }
    if (iVar1 == 0) goto c0;
    if (iVar1 == 1) goto c1;
    if (iVar1 == 2) goto c2;
    return;
c0:
    if (func_021179b0(param_1 + 8, a, b) == 0) {
        return;
    }
    func_0210449c();
    if (param_1 + 8 != param_1 + 0x44) {
        func_02117804(param_1 + 0x44);
    }
    if (param_1 + 8 != param_1 + 0x80) {
        func_02117804(param_1 + 0x80);
    }
    func_02108e24(0);
    return;
c1:
    if (func_021179b0(param_1 + 0x44, a, b) == 0) {
        return;
    }
    func_0210449c();
    if (param_1 + 0x44 != param_1 + 8) {
        func_02117804(param_1 + 8);
    }
    if (param_1 + 0x44 != param_1 + 0x80) {
        func_02117804(param_1 + 0x80);
    }
    func_02108e24(0);
    return;
c2:
    if (func_021179b0(param_1 + 0x80, a, b) == 0) {
        return;
    }
    func_0210449c();
    if (param_1 + 0x80 != param_1 + 8) {
        func_02117804(param_1 + 8);
    }
    if (param_1 + 0x80 != param_1 + 0x44) {
        func_02117804(param_1 + 0x44);
    }
    func_02108e24(0);
}
