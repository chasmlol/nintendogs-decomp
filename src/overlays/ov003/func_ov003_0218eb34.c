#pragma avoid_byte strb
#include "ctx.h"

#define SwapByte_DECL
static inline u8 SwapByte(u32 v, vu8 *p) { u8 old; *(u8 *)(p) = (u8)(v); return old; }

typedef struct { s32 v[3]; } T3;

typedef struct Obj {
    u8 pad0[0x88];
    s8 f88;
    u8 pad89[0x93 - 0x89];
    u8 f93;
    u8 pad94[0xa5 - 0x94];
    u8 fa5;
    u8 padA6[0xf0 - 0xa6];
    s16 ff0;
    u8 padF2[0xfa - 0xf2];
    s16 ffa;
    u16 ffc;
    u8 padFE[0x122 - 0xfe];
    u16 f122;
    u8 pad124[0x152 - 0x124];
    s16 f152;
    u8 pad154[0x3b4 - 0x154];
    T3 t3b4;
    u8 pad3c0[0x464 - 0x3c0];
    s32 f464;
    s32 f468;
    s32 f46c;
    s32 f470;
    u8 pad474[0x484 - 0x474];
    s32 f484;
} Obj;

extern u8 *data_02159444;
extern u32 *data_0214f464;

extern void func_020364cc(Obj *);
extern s32 func_0203579c(Obj *, s32);
extern void func_0209c054(s32 *, s32, s32);
extern void func_02027f8c(Obj *, s32, s32);
extern s32 func_0203567c(Obj *);
extern void func_0203e8cc(Obj *, s32, s32);
extern s32 func_0202d9e0(Obj *);
extern void func_020a2f70(Obj *, s32);
extern s16 func_0203bc40(Obj *);
extern s32 func_02023508(Obj *, s32, s32);
extern s32 func_02024114(Obj *, s32);
extern void func_020a2df8(Obj *, s32, u32);
extern s32 func_02028014(Obj *, s32);
extern s32 func_020289d0(Obj *, s32, s32);
extern s32 func_0202cd10(Obj *, s32);
extern s32 func_02044c8c(void);
extern void func_0203e908(Obj *, s32);

void func_ov003_0218eb34(Obj *p)
{
    s32 iVar2;
    s32 iVar3;
    u32 uVar6;
    s16 sVar1;

    func_020364cc(p);
    iVar2 = *(s32 *)(data_02159444 + 0x1c);
    p->t3b4 = *(T3 *)(iVar2 + 0x30);
    if (p->ffa == 0x22) {
        p->f46c = 400;
    }
    iVar2 = (s32)p->f152;
    if (iVar2 > 0x110) {
        goto else_b;
    }
    if (iVar2 < 0x10e) {
        goto end_b;
    }
    if (iVar2 == 0x10e) {
        goto succ;
    }
    if (iVar2 == 0x10f) {
        goto succ;
    }
    if (iVar2 != 0x110) {
        goto end_b;
    }
    goto succ;
else_b:
    if (iVar2 == 0x14d) {
        if (p->ffa == 0x22) {
            uVar6 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar6;
            iVar2 = func_02028014(p, 2);
            p->f468 = ((s32)(u16)(((u32)(u16)uVar6 * 0x1388u) >> 16) - iVar2) >> 7;
            p->f464 = p->f468;
            if (p->f464 <= 0) {
                p->f464 = 1;
            }
            p->ffa = 0;
        }
        if (0 < p->f464 && (p->f464 = p->f464 - 1, p->f464 == 0)) {
            if (p->f468 < 10) {
                func_0203e8cc(p, 0, 0x10e);
                SwapByte(0, (vu8 *)&p->f93);
                p->f464 = 5;
                p->f468 = 0x11;
            } else if (p->f468 < 0x14) {
                func_0203e8cc(p, 0, 0x10f);
                SwapByte(0, (vu8 *)&p->f93);
                p->f464 = 10;
                p->f468 = 0x11;
            } else {
                func_0203e8cc(p, 0, 0x110);
                SwapByte(0, (vu8 *)&p->f93);
                p->f464 = 15;
                p->f468 = 0x12;
            }
        }
    }
    goto end_b;
succ:
    p->ffa = 0;
    iVar2 = func_0203579c(p, (s16)p->f464);
    if (iVar2 != 0) {
        func_0209c054((s32 *)((u8 *)p + 0x95c), p->f468, p->f484);
        func_02027f8c(p, 2, 50);
    }
    iVar2 = func_0203567c(p);
    if (iVar2 != 0) {
        func_0203e8cc(p, 0, 0x14d);
        SwapByte(5, (vu8 *)&p->f93);
        {
            s32 zero = 0;
            p->f464 = zero;
            p->f468 = zero;
        }
    }
end_b:
    if (p->ffc > 10 && (iVar2 = func_0202d9e0(p), iVar2 != 0)) {
        switch (p->fa5) {
        case 1:
            iVar2 = (s16)(p->ff0 - 91);
            if (iVar2 != p->f470) {
                p->f470 = iVar2;
                func_020a2f70(p, iVar2);
            }
            p->f122 = p->f122 + 1;
            if (0x78 < p->f46c) {
                p->f46c = 0x78;
            }
            break;
        case 3:
            iVar2 = (s16)(p->ff0 - 91);
            if (iVar2 != p->f470) {
                sVar1 = func_0203bc40(p);
                iVar3 = func_02023508(p, (s32)sVar1, 1);
                iVar3 = func_02024114(p, iVar3);
                p->f470 = iVar2;
                if (iVar3 != 0) {
                    func_020a2df8(p, iVar2, (u32)*(u16 *)(iVar3 + 2));
                }
            }
            break;
        }
    }
    if (func_020289d0(p, 1, 0) != 0) {
        return;
    }
    if (func_0202d9e0(p) == 0 && func_0202cd10(p, 1) != 0) {
        return;
    }
    p->f46c = p->f46c - 1;
    if (0 < p->f46c) {
        return;
    }
    if (((*(u16 *)0x04000304 & 0x8000) >> 15) == 0 && (iVar2 = func_02044c8c(), p->f88 == iVar2)) {
        func_0203e908(p, 0xef);
        return;
    }
    func_0203e908(p, 0x4d);
}
