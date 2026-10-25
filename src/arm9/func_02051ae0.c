#include "ctx.h"

extern u32 *data_0214f464;

extern s32 func_02027710(u8 *p1, u8 *p2);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(u8 *p);
extern void func_020362f8(u8 *p);
extern void func_0203e908(u8 *p, s32 a);
extern s32 func_02027894(u8 *p, s32 a);
extern void func_020362ec(u8 *p, s32 a);
extern void func_0202707c(u8 *p, s32 a);

/* LCG tick: state = state * 0x10dcd + 1; value = bit 15 of the low half */
#define TICKA(v) do { P = data_0214f464; nv = *P * 0x10dcd + 1; *P = nv; v = (u16)(((u32)(nv << 16)) >> 31); } while (0)
/* LCG tick: value = (low half * 3) >> 16 (0, 1 or 2) */
#define TICKB(v) do { P = data_0214f464; nv = *P * 0x10dcd + 1; *P = nv; v = (u16)((((u32)(u16)nv) * 3u) >> 16); } while (0)
#define CS(p) ((s16)*(s8 *)((p) + 0x88))
#define COND(p) ((u8)(*(s8 *)((p) + 0x8b) - 4) > 1)

s32 func_02051ae0(u8 *p1, u8 *p2)
{
    s32 v;
    s32 r4;
    u32 nv;
    u32 *P;
    s32 cv;
    s32 kk;

    if (*(s16 *)(p2 + 0xea) == 0x293) goto L158;
    if (*(s16 *)(p2 + 0xea) == 0x294) goto L518;

    v = func_02027710(p1, p2);
    if (v == -1) goto L128;
    if (v == 0) goto L10c;
    if (v != 1) goto L75c;
    r4 = func_02036578(p1);
    if ((func_020449bc() & 0x20) == 0) return func_0202fd7c(p1);
    if (r4 == 0) return 0;
    TICKA(v);
    if (v == 0) goto L0c4;
    if (v != 1) goto L0fc;
    goto L0e0;
L0c4:
    func_0203e908(p1, 0x2cd);
    return 1;
L0e0:
    func_0203e908(p1, 0x2ce);
    return 1;
    /* 0xfc */
L0fc:
    return 0;
L10c:
    func_020362f8(p1);
    return func_0202fd7c(p1);
L128:
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 17);
    return 1;

L158:
    v = func_02027710(p1, p2);
    if (v == -1) goto L3b0;
    if (v == 0) goto L3b0;
    if (v != 1) goto L75c;
    TICKB(v);
    if (v == 0) goto L1c8;
    if (v == 1) goto L234;
    if (v != 2) goto L75c;
    goto L2f8;
L1c8:
    r4 = func_02036578(p1);
    if ((func_020449bc() & 0x10) == 0) return func_0202fd7c(p1);
    if (r4 == 0) return 0;
    *(s32 *)(p1 + 0x484) = func_02027894(p1, r4);
    func_0203e908(p1, 0x295);
    return 1;
L234:
    r4 = func_02036578(p1);
    if ((func_020449bc() & 0x20) == 0) return func_0202fd7c(p1);
    if (r4 == 0) return 0;
    TICKA(v);
    if (v == 0) goto L2b0;
    if (v != 1) goto L2e8;
    goto L2cc;
L2b0:
    func_0203e908(p1, 0x2cd);
    return 1;
L2cc:
    func_0203e908(p1, 0x2ce);
    return 1;
L2e8:
    return 0;
L2f8:
    if ((func_020449bc() & 0x80) == 0) return func_0202fd7c(p1);
    cv = *(s8 *)(p1 + 0x8b);
    if ((u8)(s8)(cv - 4) <= 1) goto L350;
    cv = *(s8 *)(p2 + 0x8b);
    if ((u8)(s8)(cv - 4) > 1) goto L360;
L350:
    return 0;
L360:
    kk = *(s8 *)(p2 + 0x88);
    func_020362ec(p1, (s16)kk);
    func_0203e908(p1, 0x26e);
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 23);
    return 1;

L3b0:
    TICKB(v);
    if (v == 0) goto L400;
    if (v == 1) goto L430;
    if (v != 2) goto L75c;
    goto L460;
L400:
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 15);
    return 1;
L430:
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 17);
    return 1;
L460:
    if ((func_020449bc() & 0x80) == 0) return func_0202fd7c(p1);
    cv = *(s8 *)(p1 + 0x8b);
    if ((u8)(s8)(cv - 4) <= 1) goto L4b8;
    cv = *(s8 *)(p2 + 0x8b);
    if ((u8)(s8)(cv - 4) > 1) goto L4c8;
L4b8:
    return 0;
L4c8:
    kk = *(s8 *)(p2 + 0x88);
    func_020362ec(p1, (s16)kk);
    func_0203e908(p1, 0x272);
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 21);
    return 1;

L518:
    v = func_02027710(p1, p2);
    if (v == -1) goto L72c;
    if (v == 0) goto L5fc;
    if (v != 1) goto L75c;
    r4 = func_02036578(p1);
    if ((func_020449bc() & 0x20) == 0) return func_0202fd7c(p1);
    if (r4 == 0) return 0;
    TICKA(v);
    if (v == 0) goto L5b4;
    if (v != 1) goto L5ec;
    goto L5d0;
L5b4:
    func_0203e908(p1, 0x2cd);
    return 1;
L5d0:
    func_0203e908(p1, 0x2ce);
    return 1;
L5ec:
    return 0;
L5fc:
    TICKA(v);
    if (v == 0) goto L638;
    if (v != 1) goto L72c;
    goto L6fc;
L638:
    r4 = func_02036578(p1);
    if ((func_020449bc() & 0x20) == 0) return func_0202fd7c(p1);
    if (r4 == 0) return 0;
    TICKA(v);
    if (v == 0) goto L6b4;
    if (v != 1) goto L6ec;
    goto L6d0;
L6b4:
    func_0203e908(p1, 0x2cd);
    return 1;
L6d0:
    func_0203e908(p1, 0x2ce);
    return 1;
L6ec:
    return 0;
L6fc:
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 17);
    return 1;
L72c:
    kk = *(s8 *)(p1 + 0x88);
    func_020362ec(p2, (s16)kk);
    func_0202707c(p2, 17);
    return 1;
L75c:
    return 0;
}
