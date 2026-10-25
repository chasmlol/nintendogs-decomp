#include "ctx.h"

extern u8 *data_021594d0;
extern s32 func_020d6420(u8 *p);
extern void func_020d68c8(u32 a, u8 *b);
extern u16 func_020d5e60(void);
extern u32 func_020d5e70(u32 a, u32 b, u16 *c);
extern s32 func_020d6358(u32 a, u16 *b, u16 *c);
extern u8 *func_020d6cb4(void);
extern void func_020d4d18(void);
extern void func_020d4910(void);
extern void func_020d3db4(void);

void func_020d404c(u8 *param_1)
{
    s32 iVar4;
    u8 *iVar7;
    u32 cnt;
    u32 mask;
    u32 one;
    u32 sc;
    u32 bit;
    u8 *rp;
    u32 v3;
    u8 auStack_10[2];
    u16 sStack_e;
    u16 asStack_c;

    iVar4 = func_020d6420(param_1);
    if (iVar4 == 0) {
        return;
    }
    iVar7 = data_021594d0;
    iVar4 = *(s32 *)(iVar7 + 0x24);
    if (iVar4 == 1) goto S1;
    if (iVar4 == 2) goto S2;
    if (iVar4 == 3) goto S3;
    return;

S1:
    func_020d68c8((u32)func_020d4d18, auStack_10);
    return;

S2:
    *(u16 *)(iVar7 + 0x3c) = 0;
    *(u16 *)(data_021594d0 + 0x3e) = 0x65;
    cnt = 1;
    mask = func_020d5e60();
    if (mask == 0x8000) {
        sc = 3;
        goto E0;
    }
    if (mask == 0) {
        sc = 21;
        goto E0;
    }
    if ((mask & 1) != 0) goto CALL;
    one = cnt;
LOOP:
    cnt = (u16)(cnt + 1);
    if (cnt > 16) {
        sc = 22;
        goto E0;
    }
    bit = one << (cnt - 1);
    if ((bit & mask) == 0) goto LOOP;
CALL:
    func_020d5e70((u32)func_020d4910, cnt, &asStack_c);
    sc = asStack_c;
E0:
    if (sc != 22) goto L12c;
    if (*(s32 *)(data_021594d0 + 0x2c) == 1) return;
    *(s32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 0x28) = sc;
    *(u16 *)(data_021594d0 + 0x2a) = 30;
    return;
L12c:
    if (sc == 2) return;
    if (*(s32 *)(data_021594d0 + 0x2c) == 1) return;
    *(s32 *)(data_021594d0 + 0x2c) = 1;
    *(u16 *)(data_021594d0 + 0x28) = sc;
    *(u16 *)(data_021594d0 + 0x2a) = 30;
    return;

S3:
    iVar4 = func_020d6358((u32)func_020d3db4,
                          (*(s32 *)(iVar7 + 0x54) == 1) ? (u16 *)(iVar7 + 0x58) : 0,
                          &sStack_e);
    if (iVar4 == 0) {
        return;
    }
    rp = func_020d6cb4();
    v3 = *(u16 *)(rp + 0x36);
    *(u16 *)(data_021594d0 + 0x3c) = v3;
    return;
}
