#pragma avoid_byte strb
#include "ctx.h"

extern int *data_0214f464;
extern void func_0203eb80(int a);
extern void func_0203e9d8(int a);
extern void func_02095578(int a, int b);
extern void func_02094a48(int a, int b, int c);
extern void func_020948e0(int a, int b, int c);

static inline u8 SwapByte(u32 v, vu8 *p)
{
    u8 old;
    *(u8 *)(p) = (u8)(v);
    return old;
}

void func_020421b8(int param_1)
{
    u32 uVar6;
    int iVar5;
    int iVar4;
    int iVar3;
    int iVar2;
    int iVar7;
    u8 *p;
    u32 vz;

    if (param_1 < 0 || param_1 >= 3) {
        iVar5 = 0;
    } else {
        iVar5 = *(s32 *)((u8 *)data_0214f464 + param_1 * 4 + 0x54);
    }
    if (*(s8 *)((u8 *)data_0214f464 + param_1 + 0x1c) != 0) {
        return;
    }
    if (iVar5 == 0) {
        return;
    }
    func_0203eb80(iVar5);
    func_0203e9d8(iVar5);
    if (*(u8 *)(iVar5 + 0xd2) != 0) {
        func_02095578(param_1 * 0x85c + (int)((u8 *)data_0214f464 + 420), param_1);
        SwapByte(0, (vu8 *)(iVar5 + 210));
    }
    iVar2 = param_1 * 0x18b0;
    iVar7 = param_1 * 0x500;
    uVar6 = 0;
    iVar4 = 0;
    iVar3 = 0;
    vz = 0;
    do {
        p = (u8 *)iVar5 + uVar6;
        if (*(u8 *)(p + 0xd3) != 0) {
            {
                s32 t1 = (int)((u8 *)data_0214f464 + 0x1ab8) + iVar2;
                func_02094a48(t1 + iVar4, param_1, uVar6);
            }
            {
                s32 t2 = (int)((u8 *)data_0214f464 + 0x64c8) + iVar7;
                func_020948e0(t2 + iVar3, param_1, uVar6);
            }
            SwapByte(vz, (vu8 *)(p + 211));
        }
        uVar6 = (u32)(s16)(uVar6 + 1);
        iVar4 = iVar4 + 0x13c;
        iVar3 = iVar3 + 0x40;
    } while ((s32)uVar6 < 20);
}
