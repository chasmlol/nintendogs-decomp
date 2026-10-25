#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159060;
extern u8 *data_02159444;

extern s32 func_020ad77c(u8 *p);
extern s32 func_ov005_021648ac(u32 v);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern void func_020b40d8(void);
extern s32 func_02107e84(void);
extern void func_020af7f4(u8 *p);
extern void func_020ae374(u8 *p);

void func_020b3f1c(u8 *p)
{
    s32 sub;
    s32 st;
    s32 r0;
    s32 r5;
    u8 *bb;
    u32 v;

    st = *(s16 *)(p + 46);
    if (st == 0) {
        goto s0;
    }
    if (st == 1) {
        goto s1;
    }
    if (st == 2) {
        return;
    }
    return;
s0:
    if (func_020ad77c(p) != 0) {
        *(s16 *)(p + 42) = 0;
    }
    return;
s1:
    sub = *(s16 *)(p + 42);
    if (sub == 0) {
        goto s1a;
    }
    if (sub == 1) {
        goto s1b;
    }
    return;
s1a:
    bb = data_0215be48;
    bb += 0x4000;
    v = *(u32 *)(bb + 0x8bc);
    if (v == 1) {
        *(s16 *)(p + 46) = 2;
        *(s16 *)(p + 48) = 0;
        *(s16 *)(p + 256) = 7;
        return;
    }
    if (func_ov005_021648ac(v) == 0) {
        goto fc;
    }
    *(s16 *)(p + 42) = 1;
    *(s16 *)(p + 48) = 0;
    func_02097b94(2, 0xdba, 0, (u32)func_020b40d8, 1);
    *(u32 *)(data_02159444 + 0x20) = *(u32 *)(data_02159444 + 0x20) & ~1u;
    return;
fc:
    r0 = func_02107e84();
    r5 = -1;
    if (r0 == 1) {
        goto A111;
    }
    if (r0 == 2) {
        r5 = 110;
    }
    goto Aafter;
A111:
    r5 = 111;
Aafter:
    if (r5 == -1) {
        return;
    }
    if (*(s16 *)(p + 124) == r5) {
        return;
    }
    func_020af7f4(p);
    *(s16 *)(p + 124) = (s16)r5;
    func_020ae374(p);
    return;
s1b:
    if (*(u32 *)(data_02159060 + 0xa4) == 0) {
        return;
    }
    *(s16 *)(p + 46) = 2;
    *(s16 *)(p + 48) = 0;
    *(s16 *)(p + 256) = 7;
}
