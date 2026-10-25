#include "ctx.h"

extern u32 data_0214f464;
extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, u32 b);
extern u8 *func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, u32 a, u32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, u32 a, u32 b);
extern s32 func_0202cd10(u8 *p, u32 a);
extern void func_0203e908(u8 *p, u32 v);

void func_02010aa8(u8 *param_1)
{
    u32 r4;
    u8 *iVar2;
    u32 uVar3;
    u8 *V;
    s32 t;
    s32 ret;

    func_02022b7c(param_1);
    r4 = param_1[0xa4] != 0;
    if (r4 == 0) {
        goto E40;
    }
    r4 = func_02022dec(param_1, *(s16 *)(param_1 + 242), param_1[0xa6]) != 0;
E40:
    iVar2 = func_0203541c(param_1);
    if (iVar2 == 0) {
        goto Z;
    }
    func_0203e8cc(param_1, 2, 1);
    switch (*(s16 *)(iVar2 + 144)) {
    case 4:
        if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
            *(u32 *)(param_1 + 0x948) = 1;
        }
        break;
    case 7:
        if ((s8)param_1[139] != 5 && (s8)param_1[139] != 4) {
            *(u32 *)(param_1 + 0x948) = 8;
        }
        break;
    }
    t = func_ov003_02198298(param_1);
    goto C;
Z:
    t = 0;
C:
    ret = 0;
    if (t != 0) {
        ret = 1;
        goto L108;
    }
    if (func_020289d0(param_1, 5, 0) != 0) {
        ret = 1;
        goto L108;
    }
    if (r4 != 0) {
        goto L104;
    }
    if (func_0202cd10(param_1, 5) != 0) {
        ret = 1;
        goto L108;
    }
L104:
    ret = 0;
L108:
    if (ret != 0) {
        return;
    }
    if (*(u16 *)(param_1 + 252) <= 100) {
        return;
    }
    V = *(u8 **)&data_0214f464;
    uVar3 = *(u32 *)V * 0x10dcd + 1;
    *(u32 *)V = uVar3;
    if ((u16)(((u32)(u16)uVar3 * 100) >> 16) == 0) {
        func_0203e908(param_1, 141);
    }
}
