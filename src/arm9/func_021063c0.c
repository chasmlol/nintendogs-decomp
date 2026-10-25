#include "ctx.h"

extern u8 data_02147e0c[];
extern u8 *data_02159424;
extern u8 *data_02159030;
extern u8 data_0212fac4[];
extern u8 *data_0215942c;
extern u8 data_0215be84[];
extern u8 data_0215be6c[];
extern u8 *data_0215bf9c;
extern u8 data_0215be9c[];
extern u8 *data_0215be48;

extern u32 func_02093990(void);
extern s16 *func_020a48b4(u32 a, s32 b);
extern u32 func_02090cac(u32 a, u32 b, u32 c);
extern u32 func_02109390(u32 a);
extern u16 func_02109340(u32 a);
extern u32 func_0208fccc(u32 a);
extern u32 func_02109368(u32 a);
extern u32 func_0208fc60(u32 a, u32 b);
extern u32 func_02106a78(u32 a);
extern void func_020fc310(u32 a, u32 b);
extern u32 func_02106978(u32 a);
extern u32 func_02106884(u32 a);
extern void func_020fc210(u32 a, u32 b, u32 c);
extern u32 func_02106804(u32 a);
extern s32 func_020b0864(s32 a, s32 b, s32 c);

static inline s32 pick(u32 p2)
{
    s32 rv;
    if (*(s16 *)(*(u8 **)(data_02159424 + 0x34) + 6) == 0) {
        goto z;
    }
    if (p2 == 1) {
        rv = 1;
        goto e;
    }
z:
    rv = 0;
e:
    return rv;
}

u32 func_021063c0(u32 param_1, u32 param_2)
{
    s16 *psVar4;
    u32 key;
    s32 v;
    s16 t16;
    u32 r;
    u32 dflt;

    dflt = (u32)data_02147e0c;
    switch (param_1) {
    case 0x30000:
        if (param_2 == 0) {
            return func_02093990();
        }
        psVar4 = func_020a48b4(param_2, pick(param_2));
        return func_02090cac(*(u32 *)(data_02159030 + 0x38), *(u32 *)(data_0212fac4 + psVar4[1] * 12 + 8), 1);
    case 0x30002:
        if (param_2 == 0) {
            return func_02109390(*(s16 *)(data_0215942c + 0xe));
        }
        psVar4 = func_020a48b4(param_2, pick(param_2));
        return func_02090cac(*(u32 *)(data_02159030 + 0x38), *(u32 *)(data_0212fac4 + psVar4[1] * 12 + 8), 0);
    case 0x30003:
        if (param_2 == 0) {
            return func_0208fccc(func_02109340(*(s16 *)(data_0215942c + 0xe)));
        }
        psVar4 = func_020a48b4(param_2, pick(param_2));
        return func_0208fccc(*(u16 *)(data_0212fac4 + psVar4[1] * 12));
    case 0x30005:
        r = func_02109368(*(s16 *)(data_0215942c + 0xe));
        return func_0208fc60(r, param_2);
    case 0x30008:
        return func_02106a78(param_2);
    case 0x3000d:
        return func_02106978(param_2);
    case 0x3000e:
        r = 0;
        switch (*(s16 *)(data_0215942c + 6)) {
        case 0:
            r = 0x579;
            break;
        case 1:
            r = 0x57a;
            break;
        case 2:
            r = 0x578;
            break;
        }
        return func_02090cac(*(u32 *)(data_02159030 + 4), r, 0);
    case 0x3000f:
        return func_02106884(param_2);
    case 0x30010:
        if (param_2 == 0) {
            t16 = (*(u8 **)(data_02159424 + 0x34) != 0) ? *(s16 *)(*(u8 **)(data_02159424 + 0x34) + 12) : 0;
            v = (s16)((t16 * 100) / 60);
            func_020fc210((u32)v, (u32)data_0215be84, 2);
        } else {
            psVar4 = func_020a48b4(param_2, pick(param_2));
            v = (psVar4[3] * 100) / 60;
            func_020fc210((u32)v, (u32)(void *)data_0215be84, 2);
        }
        return (u32)(void *)data_0215be84;
    case 0x30012:
        if (param_2 == 0) {
            param_2 = (u32)*(s16 *)(*(u8 **)(data_02159424 + 0x34) + 4);
        }
        v = func_020b0864(*(s16 *)(data_0215942c + 6), *(s16 *)data_02159424, (s32)param_2);
        func_020fc310((u32)(v / 100), (u32)data_0215be6c);
        return (u32)(void *)data_0215be6c;
    case 0x30011:
        func_020fc310(*(u32 *)(data_0215bf9c + 0x178), (u32)data_0215be9c);
        return (u32)(void *)data_0215be9c;
    case 0x3000b:
        func_020fc310(*(u32 *)(data_0215be48 + 0x2f8), (u32)data_0215be9c);
        return (u32)(void *)data_0215be9c;
    case 0x30009:
        func_020fc310(*(u32 *)(data_0215be48 + 0x2fc), (u32)data_0215be9c);
        return (u32)(void *)data_0215be9c;
    case 0x30013:
        return func_02106804(param_2);
    default:
        return dflt;
    }
}
