#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215be48;
extern u8 data_0214f004[];
extern void func_02125958(void);
extern void func_021210fc(u8 *p);
extern void func_02097b94(s32 a, s32 b, s32 c, u32 d, s32 e);
extern s32 func_02112320(s32 a, s32 b, s32 c);
extern s32 func_021210c8(u8 *p, s32 v);
extern s32 func_0212109c(u8 *p, s32 v);
extern void func_021128a8(s32 a, u16 b, s32 c);
extern void func_02112978(s32 a, u16 b, s32 c, s32 d);
extern void func_020a1a40(s32 a);
extern void func_02108e24(s32 a);
extern void func_0210809c(u32 a);
extern s32 func_01ffdb08(s32 a);
extern void func_020240e0(s32 a, s32 b);
extern void func_02120e94(u8 *p, s32 v);

void func_02125080(u8 *param_1)
{
    u8 *p;
    u8 *pr;
    s32 st;
    s32 r;
    s32 idx;
    s32 n;
    s32 r2;

    p = param_1;
    st = *(s32 *)(p + 0x94);
    pr = p + 0x1d10;
    switch (st) {
    case 0: goto S0;
    case 1: goto S1;
    case 2: goto S2;
    case 3: goto S3;
    case 4: goto S4;
    case 5: goto S5;
    case 6: goto S6;
    default: goto EPI;
    }
S0:
    func_021210fc(p);
    if (*(s32 *)(data_02159060 + 0xa4) == 0) goto L74;
    func_02097b94(2, 0xf6f, 0, (u32)func_02125958, 1);
L74:
    if (*(s32 *)(data_0215be48 + 0x48b8) == 1) {
        *(s32 *)(p + 0x94) = 3;
        return;
    }
    if (*(s32 *)(data_0215be48 + 0x4860) == 0) return;
    r = func_02112320(2, data_0214f004[0], data_0214f004[1]);
    if ((*(u16 *)(data_0214f004 + 2) & 2) == 0) return;
    *(s32 *)(p + 0x8c) = -1;
    switch (r) {
    case 0: goto C138;
    case 1: goto C138;
    case 2: goto C138;
    case 3: goto C3;
    case 4: goto C4;
    case 5: goto C5;
    case 6: goto C6;
    default: goto C138;
    }
C3:
    *(s32 *)(p + 0x8c) = 0;
    goto C138;
C4:
    *(s32 *)(p + 0x8c) = 1;
    goto C138;
C5:
    *(s32 *)(p + 0x8c) = 2;
    goto C138;
C6:
    *(s32 *)(p + 0x8c) = 3;
C138:
    if (*(s32 *)(p + 0x8c) < 0) goto C1d8;
    if (func_021210c8(p, *(s32 *)(p + 0x8c)) < 0) goto C1d8;
    idx = func_0212109c(p, *(s32 *)(p + 0x8c));
    func_021128a8(2, (u16)(idx + 15), 2);
    func_02112978(2, (u16)(idx + 22), 2, 2);
    func_02112978(2, (u16)(idx + 15), 2, 2);
    func_020a1a40(2);
    func_02108e24(0);
    *(s32 *)(p + 0x94) = 1;
    return;
C1d8:
    *(s32 *)(p + 0x8c) = -1;
    return;
S1:
    *(s32 *)(p + 0x90) = *(s32 *)(p + 0x90) + 1;
    if (*(s32 *)(p + 0x90) <= 10) return;
    idx = func_0212109c(p, *(s32 *)(p + 0x8c));
    func_021128a8(2, (u16)(idx + 15), 1);
    func_02112978(2, (u16)(idx + 22), 0, 0);
    func_02112978(2, (u16)(idx + 15), 0, 0);
    *(s32 *)(p + 0x90) = 0;
    *(s32 *)(p + 0x94) = 2;
    return;
S2:
    *(s32 *)(p + 0x90) = *(s32 *)(p + 0x90) + 1;
    if (*(s32 *)(p + 0x90) <= 10) return;
    func_02097b94(2, 3952, 0, (u32)func_02125958, 0);
    *(s32 *)(p + 0x90) = 0;
    *(s32 *)(p + 0x94) = 4;
    return;
S3:
    if (*(s32 *)(data_0215be48 + 0x48bc) != 1) return;
    func_0210809c(*(u32 *)pr);
    return;
S4:
    r = *(s16 *)(data_02159060 + 154);
    if (r == 0) goto S4a;
    if (r == 1) goto S4b;
    return;
S4a:
    func_02097b94(2, 0xf71, 0, (u32)func_02125958, 0);
    *(s32 *)(p + 0x94) = 5;
    return;
S4b:
    func_02108e24(1);
    *(s32 *)(p + 0x94) = 0;
    return;
S5:
    if (*(s32 *)(data_02159060 + 0xa4) == 0) return;
    func_02108e24(1);
    idx = func_021210c8(p, *(s32 *)(p + 0x8c));
    func_020240e0(func_01ffdb08((s16)*(s32 *)(p + 0x1d10)), *(s16 *)(p + idx * 2 + 104));
    n = *(s32 *)(p + 0x88) - 1;
    if (idx >= n) goto L408;
L3e0:
    r2 = idx + 1;
    *(s16 *)(p + idx * 2 + 104) = *(s16 *)(p + r2 * 2 + 104);
    idx = r2;
    if (r2 < *(s32 *)(p + 0x88) - 1) goto L3e0;
L408:
    *(s16 *)(p + idx * 2 + 104) = -1;
    *(s32 *)(p + 0x88) = *(s32 *)(p + 0x88) - 1;
    func_02120e94(p, *(s32 *)(p + 0x88));
    *(s32 *)(p + 0x94) = 0;
    return;
S6:
    func_021210fc(p);
    if (*(s32 *)(data_0215be48 + 0x48bc) != 1) return;
    func_0210809c(*(u32 *)pr);
EPI:
    return;
}
