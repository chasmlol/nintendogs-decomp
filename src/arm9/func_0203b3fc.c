#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213b5d0[];
extern s8 data_021371d4[];
extern u8 data_02136c74[];
extern u8 data_02136c76[];
extern s32 *data_0215be34;
extern u32 data_02139e44[];
extern u32 *data_0214f464;
typedef struct { u16 h[9]; } H9;
extern void func_02041d4c(u8 *p);
extern void func_02081198(s32 a, s32 b, void *c);

void func_0203b3fc(u8 *param_1)
{
    s16 asStack_20[10];
    u8 *obj;
    s32 sVar1;
    s32 iVar8;
    s32 iVar6;
    s32 bVar;
    s32 i;
    s32 sVar4;
    u32 uVar10;
    s32 iVar3;

    obj = *(u8 **)(param_1 + 0x9e8);
    sVar1 = *(s16 *)(obj + 0x26) >> 9;
    *(H9 *)asStack_20 = *(H9 *)data_0213b5d0;

    iVar6 = *(s16 *)(data_02136c74 + data_021371d4[*(s16 *)(param_1 + 0xea)] * 8);
    if (iVar6 < 0) goto L_90;
    if (*(s16 *)(obj + 0x1e) >= 10000) {
        bVar = 1;
        goto L_88;
    }
    bVar = (*(s16 *)(obj + 0x20) >= 10000);
L_88:
    if (bVar) goto L_c4;
L_90:
    iVar6 = (s16)(iVar6 + *(s16 *)(obj + 0x18));
    *(u8 *)(param_1 + 0xd2) = 1;
    if (iVar6 < 0) {
        iVar6 = 0;
    }
    if (iVar6 > 10000) {
        iVar6 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x18) = (s16)iVar6;
L_c4:
    iVar6 = *(s16 *)(data_02136c76 + data_021371d4[*(s16 *)(param_1 + 0xea)] * 8);
    iVar6 = (s16)(iVar6 + *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1a));
    *(u8 *)(param_1 + 0xd2) = 1;
    if (iVar6 < 0) {
        iVar6 = 0;
    }
    if (iVar6 > 10000) {
        iVar6 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x1a) = (s16)iVar6;
    iVar6 = asStack_20[*(s8 *)(param_1 + 0x8d)];
    iVar6 = (s16)(iVar6 + *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x22));
    *(u8 *)(param_1 + 0xd2) = 1;
    if (iVar6 < 0) {
        iVar6 = 0;
    }
    if (iVar6 > 10000) {
        iVar6 = 10000;
    }
    *(s16 *)(*(u8 **)(param_1 + 0x9e8) + 0x22) = (s16)iVar6;
    func_02041d4c(param_1);
    if (*(u16 *)(param_1 + 0x112) != 0) {
        *(u16 *)(param_1 + 0x112) = *(u16 *)(param_1 + 0x112) - 1;
    }
    i = 0;
    do {
        u8 *q1 = param_1 + i * 2;
        sVar4 = *(s16 *)(q1 + 0x144);
        if (sVar4 > 0) {
            *(s16 *)(q1 + 0x144) = sVar4 - 1;
        }
        {
            u8 *q2 = (u8 *)((u32)param_1 + (u32)i * 2);
            if (*(s16 *)(q2 + 0x144) == 0) {
                *(s16 *)(q2 + 0x140) = -1;
            }
        }
        i = (s16)(i + 1);
    } while (i < 2);
    if (sVar1 >= 5) {
        return;
    }
    if (*(u16 *)(param_1 + 0x10a) == 0) {
        goto L_230;
    }
    *(u16 *)(param_1 + 0x10a) = *(u16 *)(param_1 + 0x10a) - 1;
    if (*(u16 *)(param_1 + 0x10a) != 0) {
        return;
    }
    {
        s32 *pv = data_0215be34;
        iVar3 = pv != 0 ? *pv : 0;
    }
    func_02081198(iVar3, 0x33, (void *)data_02139e44[*(s8 *)(param_1 + 0x88)]);
    return;
L_230:
    uVar10 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = uVar10;
    *(u16 *)(param_1 + 0x10a) = (u16)((sVar1 + 1) * 40 + (u16)((((u16)uVar10) * 13u) >> 16));
}
