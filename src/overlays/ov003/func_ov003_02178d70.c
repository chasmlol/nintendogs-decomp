#include "ctx.h"

extern void func_02039448(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_020ab064(u8 *a, u8 *b);
extern s32 func_02035744(u8 *p, s32 a);
extern s32 func_02035770(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026494(u8 *p);
extern void func_02025e54(u8 *p);
extern void func_ov003_0216dc10(u8 *p);
extern void func_ov003_0216dd08(u8 *p);
extern s32 func_0203579c(u8 *p, s32 a);
extern u32 func_02028124(u8 *p);
extern void func_02024d40(u8 *p, s32 a, s32 b, s32 c);
extern void func_02022b7c(u8 *p);
extern void func_ov003_02179bb8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g, s32 h, s32 i, s32 j, s32 k);
extern u8 *data_0214f460;
extern u32 *data_0214f464;

#define FX_SCALE(v, m) ((u32)((((s64)(s32)(v)) * (m) + 0x800) >> 12))

void func_ov003_02178d70(u8 *param_1, s32 param_2)
{
    u8 *p = param_1;
    u32 uVar3;

    switch (*(s32 *)(p + 0x46c)) {
    case 0:
    case 4:
    default:
        func_02039448(p);
        func_02037450(p, 0x100);
        func_020ab064(data_0214f460, p + 948);
        if (*(u16 *)(p + 0xfc) != 0 && *(s8 *)(p + 0xa1) == 0) {
            func_0203e8cc(p, 0, 0x17e);
            *(s32 *)(p + 0x46c) = 1;
        }
        break;
    case 1:
        if (func_02035744(p, 13) != 0) {
            func_02039448(p);
            func_02037450(p, 0x100);
        }
        func_020ab064(data_0214f460, p + 948);
        if (func_0203567c(p) != 0) {
            func_0203e8cc(p, 0, 0x17f);
            *(s32 *)(p + 0x46c) = 3;
        }
        break;
    case 2:
        if (func_02035770(p, 0x14) != 0 && func_02035744(p, 0x28) != 0) {
            func_02039448(p);
            func_02037450(p, 0x100);
        }
        func_020ab064(data_0214f460, p + 948);
        if (func_0203567c(p) != 0) {
            func_0203e8cc(p, 0, 0x17f);
            func_02026494(p);
            *(s32 *)(p + 0x46c) = 3;
        }
        break;
    case 5:
    case 6:
        if (func_0203579c(p, 8) != 0) {
            uVar3 = func_02028124(p);
            *(u32 *)(p + 0x25c) = FX_SCALE(uVar3, -49);
            *(s32 *)(p + 0x264) = *(s32 *)(p + 0x25c) * -5;
        }
        if (*(s32 *)(p + 0x46c) == 5) {
            uVar3 = func_02028124(p);
            func_02024d40(p, 8, 0x1a, FX_SCALE(uVar3, 318));
        } else {
            uVar3 = func_02028124(p);
            func_02024d40(p, 8, 0x1a, -FX_SCALE(uVar3, 318));
        }
        if (func_0203567c(p) != 0) {
            func_0203e8cc(p, 0, 0x17f);
            *(s32 *)(p + 0x46c) = 3;
        }
        break;
    case 3:
        uVar3 = *data_0214f464 * 0x10dcd + 1;
        *data_0214f464 = uVar3;
        uVar3 = (u16)(((u16)uVar3 * 100u) >> 16);
        func_020ab064(data_0214f460, p + 948);
        if (uVar3 == 0) {
            if (*(s8 *)(p + 0x8b) == 1) {
                func_0203e8cc(p, 0, 0x182);
                func_02025e54(p);
                if (param_2 != 0) {
                    func_ov003_0216dd08(p);
                } else {
                    func_ov003_0216dc10(p);
                }
                *(s32 *)(p + 0x46c) = 2;
            }
        } else if (uVar3 == 1) {
            if (*(s8 *)(p + 0x8b) == 1) {
                func_0203e8cc(p, 0, 0x183);
                *(s32 *)(p + 0x46c) = 5;
            }
        } else if (uVar3 == 2) {
            if (*(s8 *)(p + 0x8b) == 1) {
                func_0203e8cc(p, 0, 388);
                *(s32 *)(p + 0x46c) = 6;
            }
        } else if (uVar3 <= 20) {
            func_0203e8cc(p, 0, 384);
        }
        *(s32 *)(p + 0x468) = *(s32 *)(p + 0x468) + 1;
        if (*(s32 *)(p + 0x468) > 60) {
            *(s32 *)(p + 0x46c) = 4;
        }
        break;
    }
    func_02022b7c(p);
    func_ov003_02179bb8(p, 0, 0x1ff, 1, 1, 1, 1, (*(s32 *)(p + 0x46c) == 4), 0x30, 0, 3, 0);
    return;
}
