#include "ctx.h"

#define FX_Mul(a, b) ((s32)(((s64)(a) * (s64)(b) + 0x800) >> 12))

extern u8 *data_0215942c;
extern u8 *data_02159444;
extern u8 *data_0214f464;

extern u32 func_ov003_0218d8c0(u8 *p);
extern u32 func_ov003_0218d518(u8 *p);
extern u32 func_ov003_0218d258(u8 *p);
extern u32 func_ov003_0218d0dc(u8 *p);
extern s32 func_020bc14c(void);
extern s32 func_02044c8c(void);
extern s32 func_020bc130(void);
extern s32 func_0202e304(u8 *p);
extern void func_0203e908(u8 *p, s32 id);

/* Tail switch on r5: the 0x365/0x362/0x364/0x368 ids, each copy laid out inline like the target */
#define TAILSW(pp, rr) \
    switch (rr) { \
    case 0: func_0203e908((pp), 0x365); return 1; \
    case 4: func_0203e908((pp), 0x362); return 1; \
    case 5: func_0203e908((pp), 0x364); return 1; \
    case 6: func_0203e908((pp), 0x368); return 1; \
    default: return 0; \
    }

#define FXBLK(pp) { \
    s32 lr = *(s32 *)((pp) + 0x2e0); \
    s32 r2 = *(s32 *)((pp) + 0x3b8); \
    s32 r5 = 0; \
    if (r2 > FX_Mul(lr, 0x2008)) { \
        r5 = 0; \
    } else if (r2 > *(s32 *)((pp) + 0x388) + lr) { \
        r5 = 4; \
    } else if (r2 > *(s32 *)((pp) + 0x2c8)) { \
        r5 = 5; \
    } else { \
        r5 = 6; \
    } \
    TAILSW((pp), r5); \
}

u32 func_ov003_0218cb7c(u8 *p)
{
    s32 id;
    u32 t;
    u32 v;

    v = *(u16 *)data_0215942c;
    if (v == 1) goto L28;
    if (v != 4) goto L3c;
L28:
    return func_ov003_0218d8c0(p);
L3c:
    if (*(s8 *)(p + 0x88) != func_020bc14c()) goto L78;
    if (*(s8 *)(p + 0x88) != func_02044c8c()) goto L78;
    func_0203e908(p, 0xec);
    return 1;
L78:
    if (func_020bc130() != 0) goto La0;
    func_0203e908(p, 0x35e);
    return 1;
La0:
    if (func_0202e304(p) == 0) goto Lfc;
    if (((s32)(*(u16 *)0x04000304 & 0x8000)) >> 15) goto Le0;
    func_0203e908(p, 0x35f);
    return 1;
Le0:
    func_0203e908(p, 0x35e);
    return 1;
Lfc:
    if ((*(u16 *)(data_02159444 + 0x84) & 1) == 0) goto L3b0;
    switch (*(s8 *)(p + 0x8b)) {
    case 0:
        return func_ov003_0218d258(p);
    case 1:
        FXBLK(p)
    case 2:
        func_0203e908(p, 0x360);
        return 1;
    case 3:
        FXBLK(p)
    case 4:
        func_0203e908(p, 0x374);
        return 1;
    case 5:
        func_0203e908(p, 0x373);
        return 1;
    default:
        goto Lend;
    }
L3b0:
    switch (*(s8 *)(p + 0x8b)) {
    case 0:
        return func_ov003_0218d518(p);
    case 1:
        t = *(u32 *)data_0214f464 * 0x10dcd + 1;
        *(u32 *)data_0214f464 = t;
        switch ((u16)((t << 16) >> 30)) {
        case 0:
            func_0203e908(p, 0x363);
            return 1;
        case 1:
            func_0203e908(p, 0x364);
            return 1;
        case 2:
            func_0203e908(p, 0x370);
            return 1;
        case 3:
            func_0203e908(p, 0x371);
            return 1;
        default:
            return 0;
        }
    case 2:
        func_0203e908(p, 0x360);
        return 1;
    case 3:
        return func_ov003_0218d0dc(p);
    case 4:
        func_0203e908(p, 0x374);
        return 1;
    case 5:
        func_0203e908(p, 0x373);
        return 1;
    default:
        goto Lend;
    }
Lend:
    return 0;
}
