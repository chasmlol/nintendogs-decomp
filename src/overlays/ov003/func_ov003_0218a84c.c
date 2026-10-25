#include "ctx.h"

typedef struct {
    s32 w[3];
} T12;

typedef struct {
    s32 l88[3];
    s32 a7c[3];
    s32 l70;
    s32 l6c;
    s32 l68;
    s32 i64[3];
    s32 l58;
    s32 l54;
    s32 l50;
    s32 i4c[3];
    s32 l40;
    s32 l3c;
    s32 l38;
    s32 l34;
    s32 l30;
    s32 l2c;
    s32 a28[3];
} Fr;

extern u8 *data_02159444;
extern u8 *data_0214f460;
extern u8 data_02152cd8[];
extern void func_020ab02c(s32 a, s32 *b, s32 *c);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_01ff832c(s32 a, s32 *b, s32 *c, s32 *d);
extern s32 func_02067df0(s32 *a, s32 *b);
extern void func_ov003_0218ab10(u8 *p, s32 a, u32 b, s32 *c, s32 d, s32 e);

void func_ov003_0218a84c(u8 *param_1, s32 param_2, u32 param_3)
{
    Fr f;
    s32 iVar3;
    s32 r4;
    s32 ret;
    s32 v;
    s32 t;

    iVar3 = *(s32 *)((u8 *)data_02159444 + 0x1c);
    *(T12 *)f.l88 = *(T12 *)((u8 *)iVar3 + 0x30);
    func_020ab02c((s32)data_0214f460, f.a7c, (s32 *)(param_1 + 0x2dc));

    switch (param_2) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
        goto Ldef;
    case 5:
    case 6:
        goto L56;
    case 7:
    case 8:
        goto L78;
    default:
        goto Ldef;
    }

Ldef:
    f.l70 = *(s32 *)(data_02152cd8 + 0x4c);
    f.l6c = *(s32 *)(data_02152cd8 + 0x58);
    f.l68 = *(s32 *)(data_02152cd8 + 0x64);
    func_02067e34(f.a7c, (s32 *)(param_1 + 0x2dc), f.i64);
    func_01ff832c(0x3000, f.i64, f.l88, (s32 *)(param_1 + 0x3b4));
    t = f.i64[1] * 3 - 0x6000;
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + t;
    ret = func_02067df0(f.i64, &f.l70);
    if (ret > 0) {
        *(u16 *)(param_1 + 0x12e) = 0xf400;
    } else {
        *(u16 *)(param_1 + 0x12e) = 0xc00;
    }
    goto Ltail;

L56:
    r4 = (param_2 == 6);
    f.l58 = *(s32 *)(data_02152cd8 + 0x50);
    f.l54 = *(s32 *)(data_02152cd8 + 0x5c);
    f.l50 = *(s32 *)(data_02152cd8 + 0x68);
    func_02067e34(f.a7c, (s32 *)(param_1 + 0x2dc), f.i4c);
    func_01ff832c(0x3000, f.i4c, f.l88, (s32 *)(param_1 + 0x3b4));
    t = f.i4c[1] * 3 - 0x5000;
    *(s32 *)(param_1 + 0x3b8) = *(s32 *)(param_1 + 0x3b8) + t;
    ret = func_02067df0(f.i4c, &f.l58);
    if (ret <= 0) {
        goto L194;
    }
    v = (r4 != 0) ? 5120 : -5120;
    *(u16 *)(param_1 + 0x12e) = (u16)v;
    goto Ltail;
L194:
    v = (r4 != 0) ? 11264 : -11264;
    *(u16 *)(param_1 + 0x12e) = (u16)v;
    goto Ltail;

L78:
    r4 = (param_2 == 8);
    func_02067e34(f.a7c, (s32 *)(param_1 + 0x2dc), f.a28);
    f.l40 = *(s32 *)(data_02152cd8 + 0x50);
    f.l3c = *(s32 *)(data_02152cd8 + 0x5c);
    f.l38 = *(s32 *)(data_02152cd8 + 0x68);
    f.l34 = *(s32 *)(data_02152cd8 + 0x54);
    f.l30 = *(s32 *)(data_02152cd8 + 0x60);
    f.l2c = *(s32 *)(data_02152cd8 + 0x6c);
    func_01ff832c(0x2000, f.a28, f.l88, (s32 *)(param_1 + 0x3b4));
    func_01ff832c(0x2000, &f.l40, (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    func_01ff832c(0x5000, &f.l34, (s32 *)(param_1 + 0x3b4), (s32 *)(param_1 + 0x3b4));
    ret = func_02067df0(f.a28, &f.l40);
    if (ret <= 0) {
        goto L26c;
    }
    v = (r4 != 0) ? 17408 : -17408;
    *(u16 *)(param_1 + 0x12e) = (u16)v;
    goto Ltail;
L26c:
    v = (r4 != 0) ? 23552 : -23552;
    *(u16 *)(param_1 + 0x12e) = (u16)v;

Ltail:
    func_ov003_0218ab10(param_1, param_2, param_3, (s32 *)(param_1 + 0x378), 0x1004, 0);
}
