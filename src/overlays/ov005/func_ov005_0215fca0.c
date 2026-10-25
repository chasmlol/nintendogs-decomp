#include "ctx.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Vec3;

extern u32 data_0214f460;
extern u8 *data_02159444;
extern u32 *data_0214f464;
extern void func_020ab064(u32 a, u8 *b);
extern s32 func_02028130(u8 *p);
extern void func_01ff832c(u32 a, u8 *b, u8 *c, u8 *d);
extern void func_ov005_0216047c(u8 *p, u32 a);

void func_ov005_0215fca0(u8 *param_1)
{
    u32 *puVar1;
    s32 iVar2;
    u32 uVar4;

    func_020ab064(data_0214f460, param_1 + 0x3b4);
    if ((*(u16 *)(*(u8 **)&data_02159444 + 0x84) & 1) == 0) {
        *(u16 *)(param_1 + 0x11a) = *(u16 *)(param_1 + 0x11a) + 1;
    } else {
        *(u16 *)(param_1 + 0x11a) = 0;
    }
    *(u16 *)(param_1 + 0x11c) = 1;
    *(u16 *)(param_1 + 0x11e) = 0;
    *(s32 *)(param_1 + 0x488) = *(s32 *)(param_1 + 0x488) + 1;
    puVar1 = data_0214f464;
    uVar4 = *puVar1 * 0x10dcd + 1;
    *puVar1 = uVar4;
    if ((u16)(((u32)(u16)uVar4 * 300) >> 16) == 0) {
        *(s32 *)(param_1 + 0x464) = 1 - *(s32 *)(param_1 + 0x464);
    }
    if (*(s32 *)(param_1 + 0x464) == 0) {
        iVar2 = func_02028130(param_1);
        func_01ff832c(iVar2 << 2, param_1 + 0x1a4, param_1 + 0x2a0, param_1 + 0x3b4);
    } else {
        *(Vec3 *)(param_1 + 0x3b4) = *(Vec3 *)(*(u8 **)((*(u8 **)&data_02159444) + 0x1c) + 0x30);
    }
    func_ov005_0216047c(param_1, 3);
}
