#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0214efc0[];
extern void func_020062b4(s32 a, s32 b);

void func_02006204(u32 param_1)
{
    u32 uVar2;
    u32 uVar3;
    u32 uVar5;
    u32 uVar4;
    u32 uVar7;
    u32 mask;
    u16 *puVar8;
    s32 cnt;

    cnt = *(s32 *)(data_0214efc0 + 0x14);
    puVar8 = *(u16 **)(data_0214efc0 + 8);
    uVar3 = (u32)puVar8 + cnt;
    uVar2 = *(u32 *)(data_0214efc0 + 4);
    if (uVar3 > uVar2) {
        return;
    }
    if (cnt == 1) {
        mask = *(u16 *)(data_0214efc0 + 0x18);
        uVar5 = 1;
        uVar4 = 1;
        uVar7 = 0;
        do {
            uVar2 = (u16)uVar5;
            if ((uVar2 & mask) != 0) {
                if ((uVar2 & param_1) != 0) {
                    uVar7 = uVar7 | uVar4;
                }
                uVar4 = (uVar4 << 1) & 0xff;
                if (uVar4 == 0) {
                    break;
                }
            }
            uVar5 = uVar5 << 1;
        } while (uVar5 < 0x10000);
        *(u8 *)puVar8 = (u8)uVar7;
    } else {
        *puVar8 = (u16)param_1;
    }
    func_020062b4(1, 1);
    if (*(u32 *)(data_0214efc0 + 8) > *(u32 *)(data_0214efc0 + 0xc)) {
        *(u32 *)(data_0214efc0 + 0xc) = *(u32 *)(data_0214efc0 + 8);
    }
}
