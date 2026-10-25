#include "ctx.h"

extern u32 *data_0214f464;
extern u32 data_0215be34_dummy;
extern u32 *data_0215be34;
extern u32 data_02139ef8[];
extern u32 data_02139f04[];

extern void func_02022b7c(u8 *a);
extern s32 func_02027f78(u8 *a, u32 b);
extern s32 func_0203579c(u8 *a, u32 b);
extern void func_02081198(u32 a, u32 b, u32 c);
extern s32 func_02022dec(u8 *a, s32 b, u32 c);
extern u8 *func_0203541c(u8 *a);
extern void func_0203e8cc(u8 *a, u32 b, u32 c);
extern s32 func_ov003_02198298(u8 *a);
extern s32 func_020289d0(u8 *a, u32 b, u32 c);
extern s32 func_0202cd10(u8 *a, u32 b);
extern void func_0203e908(u8 *a, u32 b);

void func_02011d70(u8 *param_1)
{
    s32 iVar3, iVar4;
    s32 bVar2;
    s32 flag;
    s32 *piVar5;
    u32 uVar6;
    s32 r4;
    s16 s;
    u8 *r6;

    func_02022b7c(param_1);
    iVar3 = func_02027f78(param_1, 7);
    r4 = iVar3 >> 9;
    if (r4 >= 5) goto L1c8;
    s = *(s16 *)(param_1 + 0x162);
    switch (s) {
    case 12:
    case 60:
    case 95:
        goto B12c;
    case 13:
    case 61:
    case 94:
        goto B8c;
    default:
        goto L1c8;
    }
B8c:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 != 0) goto B8body;
    iVar4 = func_0203579c(param_1, 13);
    if (iVar4 == 0) goto L1c8;
B8body:
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((s32)(u16)(((u16)uVar6 * 100u) >> 16) < 100 - r4 * 15) {
        piVar5 = (s32 *)data_0215be34;
        iVar3 = piVar5 != 0 ? *piVar5 : 0;
        func_02081198(iVar3, 50, data_02139ef8[*(s8 *)(param_1 + 0x88)]);
    }
    goto L1c8;
B12c:
    iVar4 = func_0203579c(param_1, 1);
    if (iVar4 != 0) goto B12body;
    iVar4 = func_0203579c(param_1, 13);
    if (iVar4 == 0) goto L1c8;
B12body:
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((s32)(u16)(((u16)uVar6 * 100u) >> 16) < 100 - r4 * 15) {
        piVar5 = (s32 *)data_0215be34;
        iVar3 = piVar5 != 0 ? *piVar5 : 0;
        func_02081198(iVar3, 50, data_02139f04[*(s8 *)(param_1 + 0x88)]);
    }
L1c8:
    bVar2 = (*(u8 *)(param_1 + 0xa4) != 0);
    if (bVar2) {
        bVar2 = (func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6)) != 0);
    }
    r6 = func_0203541c(param_1);
    if (r6 != 0) {
        func_0203e8cc(param_1, 2, 1);
        switch (*(s16 *)(r6 + 0x90)) {
        case 4:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
                *(u32 *)(param_1 + 0x948) = 8;
            }
            break;
        }
        iVar3 = func_ov003_02198298(param_1);
    } else {
        iVar3 = 0;
    }
    if (iVar3 != 0) {
        flag = 1;
        goto done;
    }
    iVar4 = func_020289d0(param_1, 5, 0);
    if (iVar4 != 0) {
        flag = 1;
        goto done;
    }
    if (!bVar2) {
        iVar4 = func_0202cd10(param_1, 5);
        if (iVar4 != 0) {
            flag = 1;
            goto done;
        }
    }
    flag = 0;
done:
    if (flag != 0) return;
    if (*(u16 *)(param_1 + 0xfc) <= 100) return;
    uVar6 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar6;
    if ((u16)((((u32)(u16)uVar6) * 100u) >> 16) == 0) {
        func_0203e908(param_1, 0x71);
    }
}
