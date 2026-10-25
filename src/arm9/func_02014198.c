#include "ctx.h"

extern u32 *data_0214f464;
extern void func_0203e8cc(u8 *p, u32 a, u32 b);

void func_02014198(u8 *param_1, s32 param_2)
{
    u32 *q;
    u32 uVar1;

    if (param_2 != 0) {
        q = data_0214f464;
        uVar1 = *q * 0x10dcd + 1;
        *q = uVar1;
        switch ((u16)(((u32)(u16)uVar1 * 30) >> 16)) {
        case 0:
        case 1:
        case 2:
            func_0203e8cc(param_1, 1, 0x15);
            return;
        case 3:
        case 4:
        case 5:
            func_0203e8cc(param_1, 1, 0x16);
            return;
        case 6:
            func_0203e8cc(param_1, 1, 0x17);
            return;
        case 7:
            *(u16 *)(param_1 + 0x12e) = 0;
            return;
        case 8:
            *(u16 *)(param_1 + 0x12e) = 0x800;
            return;
        case 9:
            *(u16 *)(param_1 + 0x12e) = 0xf800;
            return;
        default:
            goto end;
        }
    }
    func_0203e8cc(param_1, 1, 0);
    *(u16 *)(param_1 + 0x12e) = 0;
end:
    return;
}
