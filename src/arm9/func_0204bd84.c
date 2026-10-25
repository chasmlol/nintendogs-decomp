#include "ctx.h"

extern u32 data_0214f464;

s32 func_02036578(u8 *p);
void func_0203e8cc(u8 *p, s32 a, s32 b);
void func_0204d8f4(u8 *p, s32 a);
void func_0204be88(u8 *p, s32 a, s32 b);

void func_0204bd84(u8 *param_1)
{
    s32 iVar2;
    s32 bVar1;
    u32 uVar3;
    u32 *pt;

    iVar2 = func_02036578(param_1);
    if (iVar2 != 0) {
        if (*(s16 *)(iVar2 + 0xea) != 0x279) goto no;
        if (*(u32 *)(iVar2 + 0x464) == 0) goto no;
        bVar1 = 1;
        goto test;
no:
        bVar1 = 0;
test:
        if (bVar1 != 0) {
            pt = (u32 *)data_0214f464;
            uVar3 = *pt * 0x10dcd + 1;
            *pt = uVar3;
            switch ((u16)((((u32)(u16)uVar3) * 120) >> 16)) {
            case 0:
                func_0203e8cc(param_1, 0, 0);
                break;
            case 1:
                func_0203e8cc(param_1, 0, 0x1a8);
                break;
            case 2:
                func_0203e8cc(param_1, 0, 0x1a9);
                break;
            }
        }
    }
    func_0204d8f4(param_1, iVar2);
    func_0204be88(param_1, iVar2, 1);
}
