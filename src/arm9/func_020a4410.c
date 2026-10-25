#include "ctx.h"

extern u32 data_02159198;
extern u32 data_0214f130;
extern u32 func_01ffdb08(s32 i);
extern u32 func_02027540(u32 u);
extern void func_020292c4(u32 a, u32 b, u32 c);

void func_020a4410(void)
{
    u32 bVar7;
    s16 i;
    u32 uVar3;
    s32 iVar6;
    u32 iVar4;
    u8 *iVar5;
    u8 *q;
    s16 sVar1;
    sVar1 = *(s16 *)((u8 *)&data_02159198 + 0x32);
    iVar5 = (u8 *)data_0214f130;
    q = iVar5 + 44;
    bVar7 = 7;
    if (sVar1 < -0x28) {
        bVar7 = 1;
    } else if (sVar1 < 0x28) {
        bVar7 = 3;
    } else if (sVar1 < 0x55) {
        bVar7 = 5;
    }
    iVar6 = *(s32 *)(q + 8) + (*(s32 *)q + *(s32 *)(q + 4));
    i = 0;
    do {
        uVar3 = func_01ffdb08(i);
        if (uVar3 != 0) {
            iVar4 = func_02027540(uVar3);
            if (*(u16 *)((u8 *)iVar4 + 0x26) < 5) {
                iVar6 = iVar6 * 0x10dcd + 1;
                if ((u16)(((u32)iVar6 << 16) >> 31) != 0) {
                    bVar7 = bVar7 + 1;
                }
                func_020292c4(uVar3, 0x2f, (u8)bVar7);
            }
        }
        i = (s16)(i + 1);
    } while (i < 3);
}
