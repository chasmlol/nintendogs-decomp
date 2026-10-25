#include "ctx.h"

extern u32 data_0215942c;
extern u32 data_0214f464;

s32 func_020385e4(u8 *p);
void func_0203e908(u8 *p, s32 v);

u32 func_ov003_0218e360(u8 *param_1, u32 param_2)
{
    s32 iVar1;
    s32 iVar2;
    u32 sel;

    switch (param_2) {
    case 0:
        if (*(u16 *)(*(u8 **)&data_0215942c) == 1 || *(u16 *)(*(u8 **)&data_0215942c) == 4) {
            func_0203e908(param_1, 0x3ab);
            return 1;
        }
        iVar1 = func_020385e4(param_1);
        switch (iVar1) {
        case 0:
            func_0203e908(param_1, 0x3ab);
            return 1;
        case 1:
            func_0203e908(param_1, 0x3ad);
            return 1;
        case 2:
            func_0203e908(param_1, 0x3ae);
            return 1;
        case 3:
            func_0203e908(param_1, 0x3af);
            return 1;
        default:
            return 0;
        }
    case 1:
        func_0203e908(param_1, 0x249);
        return 1;
    case 2:
        func_0203e908(param_1, 0x24c);
        return 1;
    case 3:
        func_0203e908(param_1, 0x24d);
        return 1;
    case 4:
        func_0203e908(param_1, 0x24e);
        return 1;
    case 5:
        func_0203e908(param_1, 0x24f);
        return 1;
    case 6:
        func_0203e908(param_1, 0x250);
        return 1;
    case 7:
        iVar2 = *(s32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
        *(s32 *)(*(u8 **)&data_0214f464) = iVar2;
        sel = (u16)(((u32)iVar2 << 16) >> 31);
        if (sel == 0) goto c7a;
        if (sel != 1) goto ret0;
        goto c7b;
c7a:
        func_0203e908(param_1, 0x251);
        return 1;
c7b:
        func_0203e908(param_1, 0x253);
        return 1;
    case 8:
        iVar2 = *(s32 *)(*(u8 **)&data_0214f464) * 0x10dcd + 1;
        *(s32 *)(*(u8 **)&data_0214f464) = iVar2;
        sel = (u16)(((u32)iVar2 << 16) >> 31);
        if (sel == 0) goto c8a;
        if (sel != 1) goto ret0;
        goto c8b;
c8a:
        func_0203e908(param_1, 0x252);
        return 1;
c8b:
        func_0203e908(param_1, 0x254);
        return 1;
    }
ret0:
    return 0;
}
