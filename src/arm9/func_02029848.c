#include "ctx.h"

extern u16 data_02029b10;
extern u8 *data_0214f464;
extern s32 data_0214f460;

#define FXM(x, k) ((u32)((((s64)(s32)(x)) * ((s64)(s32)(k)) + 0x800) >> 12))

u32 func_020bc14c(void);
s32 func_020aaec4(s32 a, u8 *b, u32 c);
s32 func_020aaf38(s32 a, u8 *b, u32 c);

u32 func_02029848(u8 *param_1)
{
    s8 cVar1;
    s32 iVar3;
    s32 sq;
    s32 r = 0;

    if ((s32)(u32)(*(u16 *)0x04000304 & 0x8000) >> 15) goto LAB_0;
    cVar1 = *(s8 *)(param_1 + 0x88);
    iVar3 = (s32)func_020bc14c();
    if (cVar1 != iVar3) goto LAB_0;
    if (cVar1 != *(s8 *)(data_0214f464 + 7)) goto LAB_0;
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaec4(data_0214f460, param_1 + 0x378, FXM(sq, 0x1004));
    if (iVar3 != 0) {
        r = 1;
        goto LAB_1;
    }
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaec4(data_0214f460, param_1 + 900, FXM(sq, 0x14d2));
    if (iVar3 == 0) {
        goto s3;
    }
LAB_1:
    *(s16 *)(param_1 + 0xea) = (s16)(*(s32 *)(param_1 + 0x484) + 0x220);
    return 1;
s3:
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaf38(data_0214f460, param_1 + 0x348, FXM(sq, 0x14d2));
    if (iVar3 != 0) {
        r = 2;
        goto LAB_2;
    }
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaec4(data_0214f460, param_1 + 0x324, FXM(sq, 0x19a));
    if (iVar3 != 0) {
        r = 2;
        goto LAB_2;
    }
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaec4(data_0214f460, param_1 + 0x330, FXM(sq, 0x19a));
    if (iVar3 != 0) {
        goto LAB_2;
    }
    sq = FXM(*(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8), *(s32 *)(*(u8 **)(param_1 + 0x9e8) + 8));
    iVar3 = func_020aaec4(data_0214f460, param_1 + 0x360, FXM(sq, 0x802));
    if (iVar3 == 0) {
        goto LAB_0;
    }
LAB_2:
    *(s16 *)(param_1 + 0xea) = (s16)0x217;
    return 1;
LAB_0:
    return 0;
}
