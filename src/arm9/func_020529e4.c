#include "ctx.h"

extern u8 *data_0214f464;
extern s32 func_02027710(u8 *p, s32 a);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(u8 *p);
extern void func_020362ec(s32 a, s32 b);
extern void func_0202707c(s32 a, s32 b);
extern void func_0203e908(u8 *p, s32 a);
extern void func_020362f8(u8 *p);
extern s32 func_02027894(u8 *p, s32 a);

s32 func_020529e4(u8 *param_1, u8 *param_2)
{
    s32 k;
    s32 r;
    s32 t;
    u32 u3;
    u32 cnt;
    u32 bit;
    u32 q3;
    u32 x;
    u32 y;
    s32 tt;

    k = *(s16 *)(param_2 + 0xea);
    if (k == 0x28c) goto Lz0;
    if (k == 0x28d) goto L28c;
    if (k == 0x28e) goto L530;
    r = func_02027710(param_1, (s32)param_2);
    if (r == -1) goto L24c;
    if (r == 0) goto L230;
    if (r != 1) goto L72c;
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    q3 = (u16)((((u32)(u16)cnt) * 3u) >> 16);
    switch (q3) {
    case 0: goto La4;
    case 1: goto L100;
    case 2: goto L16c;
    }
    goto L72c;

La4:
    t = func_02036578(param_1);
    u3 = func_020449bc();
    if ((u3 & 8) == 0) {
        return func_0202fd7c(param_1);
    }
    if (t == 0) {
        return 0;
    }
    func_0203e908(param_1, 0x28f);
    return 1;

L100:
    t = func_02036578(param_1);
    u3 = func_020449bc();
    if ((u3 & 0x10) == 0) {
        return func_0202fd7c(param_1);
    }
    if (t == 0) {
        return 0;
    }
    t = func_02027894(param_1, t);
    *(s32 *)(param_1 + 0x484) = t;
    func_0203e908(param_1, 0x295);
    return 1;

L16c:
    t = func_02036578(param_1);
    u3 = func_020449bc();
    if ((u3 & 0x20) == 0) {
        return func_0202fd7c(param_1);
    }
    if (t == 0) {
        return 0;
    }
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    bit = (u16)(((u32)cnt << 16) >> 31);
    switch (bit) {
    case 0: goto L1e8;
    case 1: goto L204;
    }
    goto Lret0;

L1e8:
    func_0203e908(param_1, 0x2cd);
    return 1;

L204:
    func_0203e908(param_1, 0x2ce);
    return 1;

Lret0:
    return 0;

L230:
    func_020362f8(param_1);
    return func_0202fd7c(param_1);

L24c:
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x11);
    return 1;

Lz0:
    return 0;

L28c:
    r = func_02027710(param_1, (s32)param_2);
    if (r == -1) goto L40c;
    if (r == 0) goto L40c;
    if (r != 1) goto L72c;
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    bit = (u16)(((u32)cnt << 16) >> 31);
    switch (bit) {
    case 0: goto L2e8;
    case 1: goto L354;
    }
    goto L72c;

L2e8:
    t = func_02036578(param_1);
    u3 = func_020449bc();
    if ((u3 & 0x10) == 0) {
        return func_0202fd7c(param_1);
    }
    if (t == 0) {
        return 0;
    }
    t = func_02027894(param_1, t);
    *(s32 *)(param_1 + 0x484) = t;
    func_0203e908(param_1, 0x295);
    return 1;

L354:
    u3 = func_020449bc();
    if ((u3 & 0x80) == 0) {
        return func_0202fd7c(param_1);
    }
    x = (u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4);
    if (x <= 1) goto R3ac;
    y = (u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4);
    if (y > 1) goto DR3ac;
R3ac:
    return 0;
DR3ac:
    tt = *(s8 *)(param_2 + 0x88);
    func_020362ec((s32)param_1, (s16)tt);
    func_0203e908(param_1, 0x26e);
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x17);
    return 1;

L40c:
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    bit = (u16)(((u32)cnt << 16) >> 31);
    switch (bit) {
    case 0: goto L448;
    case 1: goto L478;
    }
    goto L72c;

L448:
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0xf);
    return 1;

L478:
    u3 = func_020449bc();
    if ((u3 & 0x80) == 0) {
        return func_0202fd7c(param_1);
    }
    x = (u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4);
    if (x <= 1) goto R4d0;
    y = (u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4);
    if (y > 1) goto DR4d0;
R4d0:
    return 0;
DR4d0:
    tt = *(s8 *)(param_2 + 0x88);
    func_020362ec((s32)param_1, (s16)tt);
    func_0203e908(param_1, 0x272);
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x15);
    return 1;

L530:
    r = func_02027710(param_1, (s32)param_2);
    if (r == -1) goto L608;
    if (r == 0) goto L608;
    if (r != 1) goto L72c;
    u3 = func_020449bc();
    if ((u3 & 0x100) == 0) {
        return func_0202fd7c(param_1);
    }
    x = (u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4);
    if (x <= 1) goto R5a8;
    y = (u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4);
    if (y > 1) goto DR5a8;
R5a8:
    return 0;
DR5a8:
    tt = *(s8 *)(param_2 + 0x88);
    func_020362ec((s32)param_1, (s16)tt);
    func_0203e908(param_1, 0x26f);
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x18);
    return 1;

L608:
    cnt = *(u32 *)data_0214f464 * 0x10dcd + 1;
    *(u32 *)data_0214f464 = cnt;
    bit = (u16)(((u32)cnt << 16) >> 31);
    switch (bit) {
    case 0: goto L644;
    case 1: goto L674;
    }
    goto L72c;

L644:
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x11);
    return 1;

L674:
    u3 = func_020449bc();
    if ((u3 & 0x100) == 0) {
        return func_0202fd7c(param_1);
    }
    x = (u8)(s8)(*(s8 *)(param_1 + 0x8b) - 4);
    if (x <= 1) goto R6cc;
    y = (u8)(s8)(*(s8 *)(param_2 + 0x8b) - 4);
    if (y > 1) goto DR6cc;
R6cc:
    return 0;
DR6cc:
    tt = *(s8 *)(param_2 + 0x88);
    func_020362ec((s32)param_1, (s16)tt);
    func_0203e908(param_1, 0x273);
    tt = *(s8 *)(param_1 + 0x88);
    func_020362ec((s32)param_2, (s16)tt);
    func_0202707c((s32)param_2, 0x16);
    return 1;

L72c:
    return 0;
}
