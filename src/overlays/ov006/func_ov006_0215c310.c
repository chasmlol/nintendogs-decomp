#include "ctx.h"

extern u32 data_0214f464;
extern u32 data_0214f45c;

typedef struct { u32 w[3]; } T3;

void func_02035c98(u8 *p, s32 a);
s32 func_ov006_02161344(u8 *p);
s32 func_02029504(u8 *p);
s32 func_0203e908(u8 *p, s32 v);
void func_020362f8(u8 *p);
void func_020362ec(u8 *p, s32 v);
s32 func_02036484(u8 *p);

s32 func_ov006_0215c310(u8 *param_1, s32 param_2, s32 param_3)
{
    u32 r;
    u32 v;
    u32 sv;

    func_02035c98(param_1, 0);
    *(T3 *)(*(u8 **)&data_0214f464 + 0x74) = *(T3 *)(param_1 + 0x2a0);
    r = *(s16 *)(param_1 + 0xf0);
    if (r == 9) {
        func_ov006_02161344(param_1);
        return func_02029504(param_1);
    }
    if (param_2 != 0 && (r = *(u16 *)(param_1 + 0xfc)) > 60) {
        v = *(u32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
        *(u32 *)(*(u8 **)&data_0214f464) = v;
        r = (u16)((v << 16) >> 30);
        switch (r) {
        case 0:
            return func_0203e908(param_1, 0x4d9);
        case 1:
            return func_0203e908(param_1, 0x4da);
        case 2:
            return func_0203e908(param_1, 0x4db);
        case 3:
            return func_0203e908(param_1, 0x4dc);
        }
    } else {
        if (param_3 == 0) {
            return r;
        }
        if (*(u16 *)(param_1 + 0xfc) <= 60) {
            return *(u16 *)(param_1 + 0xfc);
        }
        func_020362f8(param_1);
        {
            s32 x = *(u16 *)(*(u8 **)(*(u8 **)&data_0214f45c + 0x20) + 0x2e);
            u32 w = *(u32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
            *(u32 *)(*(u8 **)&data_0214f464) = w;
            func_020362ec(param_1, (s16)((u16)(((u32)x * (u16)w) >> 16) + 13));
        }
        if (func_02036484(param_1) != 0) {
            v = *(u32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
            sv = (u16)((v << 16) >> 30);
            *(u32 *)(*(u8 **)&data_0214f464) = v;
            switch (sv) {
            case 0:
                return func_0203e908(param_1, 0x4d5);
            case 1:
                return func_0203e908(param_1, 0x4d6);
            case 2:
                return func_0203e908(param_1, 0x4d7);
            case 3:
                return func_0203e908(param_1, 0x4d8);
            }
        }
        r = func_ov006_02161344(param_1);
    }
    return r;
}
