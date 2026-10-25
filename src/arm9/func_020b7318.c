#include "ctx.h"

extern u8 *data_0215be48;
extern u8 *data_02159060;
extern u8 *data_02159444;
extern s32 func_020ad77c(u8 *p);
extern void func_020ad7c8(u8 *p, s32 a);
extern void func_020ad6fc(u8 *p, s32 a);
extern void func_02109238(void);
extern void func_02097b68(void);
extern void func_02097b94(s32 a, s32 b, s32 c, s32 d, s32 e);
extern void func_020ff718(void);
extern s32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);
extern void func_020b7674(void);

void func_020b7318(u8 *param_1)
{
    s32 bVar3;
    s32 sVar1;
    s32 s;
    u8 *obj;
    u8 *iVar4;
    u8 *q;

    switch (*(s16 *)(param_1 + 0x2e)) {
    case 0:
        bVar3 = func_020ad77c(param_1);
        if (bVar3 != 0) {
            *(u16 *)(param_1 + 0x2a) = 0;
        }
        return;
    case 1:
        goto C1;
    case 2:
    case 3:
        goto END;
    case 4:
        goto C4;
    default:
        goto END;
    }
C1:
    s = *(s16 *)(param_1 + 0x2a);
    if (s == 0) {
        goto Z1;
    }
    if (s == 1) {
        goto O1;
    }
    return;
Z1:
    sVar1 = (s16)*(s32 *)(data_0215be48 + 0x486c);
    switch (sVar1) {
    case 0:
        return;
    case 1:
        func_020ad7c8(param_1, 0x23);
        func_020ad6fc(param_1, 2);
        func_02109238();
        func_02097b68();
        return;
    case 2:
        func_02097b94(9, 0x2713, 0, (s32)func_020b7674, 0);
        *(u16 *)(param_1 + 0x2a) = 1;
        return;
    }
    return;
O1:
    obj = data_02159060;
    if (*(s32 *)(obj + 0xa4) == 0) {
        return;
    }
    sVar1 = *(s16 *)(obj + 0x9a);
    switch (sVar1) {
    case 0:
        iVar4 = data_02159444;
        q = iVar4 + 0x104;
        *(s16 *)(iVar4 + 0x104) = *(s16 *)(data_0215be48 + 0x48b4);
        *(s16 *)(q + 2) = *(s16 *)(data_0215be48 + 0x48b6);
        *(u16 *)(param_1 + 0x2e) = 2;
        *(u16 *)(param_1 + 0x30) = 0;
        *(u16 *)(param_1 + 0x100) = 2;
        return;
    case 1:
        break;
    default:
        return;
    }
    func_02097b94(9, 0x2712, 0, 0, 1);
    *(u16 *)(param_1 + 0x2a) = 0;
    *(s32 *)(data_0215be48 + 0x486c) = 0;
    func_020ff718();
    return;
C4:
    bVar3 = func_020ad690(param_1);
    if (bVar3 == 0) {
        return;
    }
    *(u16 *)(param_1 + 0x2a) = 0;
    func_020ad8f0(param_1);
END:
    return;
}
