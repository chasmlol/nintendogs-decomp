#include "ctx.h"

extern u32 data_ov028_0215df90;
extern void func_ov028_0215cf00(void);
extern void func_ov028_0215d02c(void);

extern s32 func_020d65c4(u8 *p);
extern u32 func_020649d8(u32 a, void *b, u32 c);
extern void func_020d613c(void *a, u32 b, u32 c, u32 d, u32 e, u32 f, u16 *g);
extern void func_020d6c60(u32 a);

void func_ov028_0215d0e0(u8 *param_1)
{
    s32 iVar2;
    s32 v;
    u16 asStack_c[2];
    u8 *pdata;
    s32 st;

    iVar2 = func_020d65c4(param_1);
    if (iVar2 == 0) {
        return;
    }
    v = *(u16 *)(param_1 + 8);
    if (v > 7) goto r7;
    if (v >= 7) goto handler;
    if (v > 2) return;
    if (v < 0) return;
    if (v == 0) goto state;
    if (v == 2) return;
    return;
r7:
    if (v == 9) return;
    return;
state:
    pdata = *(u8 **)&data_ov028_0215df90;
    st = *(s32 *)(pdata + 0x20);
    if (st == 1) goto s1;
    if (st == 2) goto s2;
    return;
s1:
    if (*(s16 *)(pdata + 0x2c) == 0) {
        *(s16 *)(pdata + 0x2c) = 1;
    }
    return;
s2:
    iVar2 = func_020649d8(5, (void *)func_ov028_0215cf00, 0);
    asStack_c[0] = (u16)iVar2;
    if (asStack_c[0] != 0) {
        return;
    }
    pdata = *(u8 **)&data_ov028_0215df90;
    func_020d613c((void *)func_ov028_0215d02c, *(u32 *)(pdata + 0x10), (u16)*(u32 *)(pdata + 0xc), *(u32 *)(pdata + 8), (u16)*(u32 *)(pdata + 4), 0, asStack_c);
    return;
handler:
    if (*(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18) != 0) {
        ((void (*)(u8 *))(*(u32 *)(*(u8 **)&data_ov028_0215df90 + 0x18)))(param_1);
    }
    func_020d6c60(*(u16 *)(param_1 + 16));
}
