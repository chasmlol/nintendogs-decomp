#pragma avoid_byte strb
#include "ctx.h"

extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_0203567c(u8 *p);
extern s32 func_02022e14(u8 *p, u32 a);
extern s32 func_02029504(u8 *p);
extern void func_0200ccd4(u8 *p);
extern s32 func_0202cd10(u8 *p, u32 a);
extern s32 *data_0214f464;

static inline u32 SwapByte(u32 v, u8 *p)
{
    u32 r;
    *(u8 *)(p) = (u8)(v);
    return r;
}

s32 func_0200c968(u8 *param_1)
{
    s32 iVar3;
    u32 uVar4;
    u32 t;
    s32 r;
    u32 cnt;

    if (func_0203541c(param_1) == 0) {
        iVar3 = *(s32 *)(param_1 + 0x464);
        if (iVar3 < 60) {
            *(s32 *)(param_1 + 0x464) = iVar3 + 1;
            if (*(s32 *)(param_1 + 0x464) == 60) {
                func_0203e8cc(param_1, 2, 0);
                cnt = *data_0214f464;
                uVar4 = cnt * 0x10dcd + 1;
                *data_0214f464 = uVar4;
                func_0203e8cc(param_1, 0, (s16)((u16)(((u32)(u16)uVar4 * 3u) >> 16) + 156));
                SwapByte(0, param_1 + 0x93);
                iVar3 = *(s32 *)(param_1 + 0x464);
                *(s32 *)(param_1 + 0x464) = iVar3 + 1;
            }
        } else if (iVar3 == 61) {
            if (func_0203567c(param_1) != 0) {
                func_0203e8cc(param_1, 0, 154);
                iVar3 = *(s32 *)(param_1 + 0x464);
                *(s32 *)(param_1 + 0x464) = iVar3 + 1;
            }
        } else if (iVar3 == 62) {
            uVar4 = *data_0214f464 * 0x10dcd + 1;
            *data_0214f464 = uVar4;
            t = (u16)(((u32)(u16)uVar4 * 300u) >> 16);
            switch (t) {
            case 0:
                func_0203e8cc(param_1, 0, 149);
                break;
            case 1:
                func_0203e8cc(param_1, 0, 154);
                break;
            }
        }
    }
    if (*(s16 *)(param_1 + 0xf0) != 0x6f && func_02022e14(param_1, 0x46) == 0 &&
        func_02022e14(param_1, 0x4d) == 0) {
        func_02029504(param_1);
    }
    func_0200ccd4(param_1);
    r = func_0202cd10(param_1, 0);
    if (r == 0) {
        return r;
    }
    return func_02029504(param_1);
}
