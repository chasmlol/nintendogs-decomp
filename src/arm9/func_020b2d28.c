#include "ctx.h"

extern u8 *data_02159060;
extern u8 *data_0215be48;

extern u32 func_020ad77c(u16 *a);
extern u32 func_020ab4c0(u16 *a);
extern u16 *func_021081c0(void);
extern void func_020ad7c8(u16 *a, u32 b);
extern void func_020ad6fc(u16 *a, u32 b);
extern u16 *func_02109238(void);
extern u32 func_02094628(void);
extern void *func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_020ad690(u16 *a);
extern u16 *func_020ad8f0(u16 *a);

u16 *func_020b2d28(u16 *param_1)
{
    u16 *puVar2;
    u32 iVar3;
    u32 bVar1;

    switch ((s16)param_1[0x17]) {
    case 0:
        bVar1 = func_020ad77c(param_1);
        return (u16 *)bVar1;
    case 1:
        bVar1 = func_020ab4c0(param_1);
        if (bVar1 != 0) {
            return (u16 *)bVar1;
        }
        if ((s16)param_1[0x15] == 1) {
            u32 v = *(s32 *)(data_02159060 + 0xa4);
            if (0 == v) {
                return (u16 *)(u32)v;
            }
            param_1[0x15] = 0;
            return func_021081c0();
        }
        if (*(s32 *)(data_0215be48 + 0x48bc) == 1) {
            func_020ad7c8(param_1, 4);
            func_020ad6fc(param_1, 0);
            return func_02109238();
        }
        puVar2 = *(u16 **)(data_0215be48 + 0x1d70);
        if (puVar2 == 0) goto L0;
        if (puVar2 == (u16 *)1) goto L1;
        if (puVar2 == (u16 *)2) goto L2;
        return puVar2;
L1:
        param_1[0x17] = 2;
        param_1[0x18] = 0;
        param_1[0x80] = 4;
        return 0x80 + param_1;
L0:
        iVar3 = func_02094628();
        if (iVar3 != 0) {
            param_1[0x17] = 2;
            param_1[0x18] = 0;
            param_1[0x80] = 3;
            return param_1 + 0x80;
        }
        param_1[0x15] = 1;
        return func_02097b94(0, 0x452, 0, 0, 0);
L2:
        param_1[0x17] = 2;
        param_1[0x18] = 0;
        param_1[0x80] = 5;
        return param_1 + 0x80;
    case 2:
        break;
    case 3:
        break;
    case 4:
        bVar1 = func_020ad690(param_1);
        if (bVar1 == 0) {
            return (u16 *)bVar1;
        }
        return func_020ad8f0(param_1);
    }
    return;
}
