#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_loop_invariants off

extern u8 *data_ov016_0215d1c0;
extern void func_ov016_0215c000(void);

void func_ov016_0215c388(void)
{
    s32 iVar3;
    s32 c;
    s32 j;
    s32 z;
    s32 iVar7;
    s32 iVar6;
    s32 iVar5;
    s32 zc;
    s32 i;

    c = 0xc04;
    i = 0;
    zc = i;
    z = i;
    do {
        j = zc;
        do {
            *(u8 *)((u8 *)((u32)i * 16) + (u32)data_ov016_0215d1c0 + j + c) = z;
            j++;
        } while (j < 16);
        i++;
    } while (i < 16);
    iVar7 = (s32)data_ov016_0215d1c0;
    iVar3 = 0;
    if (0 < *(s32 *)(iVar7 + 0xd08)) {
        do {
            iVar5 = 0;
            if (0 < *(s32 *)(iVar7 + 0xd04)) {
                iVar6 = (iVar3 + 8) * 0x20;
                do {
                    *(u16 *)(iVar7 + (iVar6 + 8) * 2 + 4) = 1;
                    iVar7 = (s32)data_ov016_0215d1c0;
                    iVar5++;
                    iVar6++;
                } while (iVar5 < *(s32 *)(iVar7 + 0xd04));
            }
            iVar3++;
        } while (iVar3 < *(s32 *)(iVar7 + 0xd08));
    }
    func_ov016_0215c000();
}
