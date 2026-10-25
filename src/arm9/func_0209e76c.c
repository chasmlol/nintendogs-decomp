#include "ctx.h"
extern u8 data_02159198[];
extern s16 data_02159148;
extern u8 data_02159074[];
extern s32 func_0209e5a0(s32 a, s32 b, s32 c);
extern void func_02070ac8(u8 *p, s32 a, s32 b);

s32 func_0209e76c(void)
{
    s32 iVar5;
    s32 iVar7;
    s32 iVar8;

    *(u16 *)(data_02159198 + 0x36) = 1;
    iVar5 = func_0209e5a0(data_02159148, 0, *(s16 *)(data_02159198 + 12));
    if (*(s32 *)(data_02159074 + 0x1c) == 0) {
        goto ifpart;
    }
    {
        u8 *S = data_02159198;
        iVar7 = 0;
        *(u16 *)(S + 0x0e) = 0;
        if (*(s32 *)S == 0) {
            goto done;
        }
        if (*(s32 *)(S + 0x1c) != 0) {
            iVar7 = *(u16 *)(S + 0x1a) - *(u16 *)(S + 0x18);
            *(u16 *)(S + 0x18) = 0;
            *(s32 *)(S + 0x1c) = 0;
        }
        func_02070ac8(S, 0, iVar7);
    }
    goto done;
ifpart:
    if (iVar5 != 0) {
        BOOL bVar4;
        if (*(s32 *)(data_02159198 + 4) != 0 || *(s32 *)(data_02159198 + 0x2c) != 0) {
            bVar4 = TRUE;
        } else {
            bVar4 = FALSE;
        }
        if (bVar4) {
            u8 *S = data_02159198;
            iVar8 = 0;
            *(u16 *)(S + 0x0e) = 40;
            if (*(s32 *)S == 0) {
                goto done;
            }
            if (*(s32 *)(S + 0x1c) != 0) {
                iVar8 = *(u16 *)(S + 0x1a) - *(u16 *)(S + 0x18);
                *(u16 *)(S + 0x18) = 0;
                *(s32 *)(S + 0x1c) = 0;
            }
            iVar7 = *(s16 *)(S + 12) * 40;
            func_02070ac8(S, iVar7 / 100, iVar8);
        }
    }
done:
    return iVar5;
}
