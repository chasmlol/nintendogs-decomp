#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_ov003_0217fe80(u8 *p, u32 a, u32 b);
extern s32 func_02029848(u8 *p);
extern void func_0203e908(u8 *p, u32 v);

void func_ov003_0217fb64(u8 *param_1)
{
    u8 *V;
    u32 uVar4;
    s32 iVar2;
    s32 iVar3;
    iVar2 = func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 7), 1);
    if (iVar2 != 0) {
        return;
    }
    iVar3 = func_02029848(param_1);
    if (iVar3 != 0) {
        return;
    }
    V = *(u8 **)&data_0214f464;
    uVar4 = *(u32 *)V * 0x10dcd + 1;
    *(u32 *)V = uVar4;
    if ((u16)(((u32)(u16)uVar4 * 100) >> 16) == 0) {
        V = *(u8 **)&data_0214f464;
        uVar4 = *(u32 *)V * 0x10dcd + 1;
        *(u32 *)V = uVar4;
        switch ((u16)(((u32)(u16)uVar4 * 10) >> 16)) {
        case 0:
            func_0203e908(param_1, 0x215);
            return;
        case 1:
            func_0203e908(param_1, 0x216);
            return;
        case 2:
            func_0203e908(param_1, 0x217);
            return;
        case 3:
            func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x218));
            return;
        case 4:
            func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x21a));
            return;
        default:
            func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x20f));
            return;
        }
    }
}
