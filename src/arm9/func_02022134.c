#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern s32 *data_0214f464;
extern s32 *data_0215be34;
extern u32 data_02139e98[];
extern u32 data_02139e74[];
extern u32 data_02139e8c[];
extern u32 data_02139e68[];
extern u32 data_02139e80[];
extern u32 data_02139e5c[];
extern u8 data_0213b444[];
extern u16 data_0213b454[];

extern void func_02022a90(void);
extern void func_02081198(s32 a, u32 b, u32 c);
extern void func_020a1a40(u32 a);
extern void func_0202286c(u8 *a, s32 *b, s32 *c);
extern s32 *func_0208122c(s32 a, s32 b, s32 *c);
extern s32 *func_020bc3c4(void);
extern s32 func_02067898(s32 a, s32 b);

void func_02022134(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
    s32 *piVar2;
    s32 iVar3, iVar5, iVar6;
    s32 i;
    u8 *pbVar4;
    u8 *pG;
    u8 t0, t1, t2;
    u16 h0, h1, h2;
    s16 asStack_48[3];
    u8 abStack_42[6];
    s32 aiStack_3c[6];

    if (*(s8 *)((u8 *)data_0214f464 + 12) == 2) {
        return;
    }
    func_02022a90();
    switch (param_3) {
    case 0:
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 108, data_02139e98[*(s8 *)(param_1 + 136)]);
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 109, data_02139e74[*(s8 *)(param_1 + 136)]);
        break;
    case 1:
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 108, data_02139e8c[*(s8 *)(param_1 + 136)]);
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 109, data_02139e68[*(s8 *)(param_1 + 136)]);
        break;
    case 2:
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 108, data_02139e80[*(s8 *)(param_1 + 136)]);
        iVar5 = data_0215be34 != 0 ? *data_0215be34 : 0;
        func_02081198(iVar5, 109, data_02139e5c[*(s8 *)(param_1 + 136)]);
        break;
    }
    func_020a1a40(0x42);
    if (param_5 == 0) {
        return;
    }
    t0 = data_0213b444[0];
    h0 = *(u16 *)data_0213b454;
    t1 = data_0213b444[1];
    t2 = data_0213b444[2];
    abStack_42[0] = t0;
    h1 = *(u16 *)(data_0213b454 + 1);
    h2 = *(u16 *)(data_0213b454 + 2);
    abStack_42[1] = t1;
    abStack_42[2] = t2;
    asStack_48[0] = h0;
    asStack_48[1] = h1;
    asStack_48[2] = h2;
    func_0202286c(param_1, aiStack_3c, aiStack_3c + 3);
    pbVar4 = abStack_42;
    i = 0;
    do {
        pG = (u8 *)data_0214f464;
        iVar3 = data_0215be34 != 0 ? *data_0215be34 : 0;
        piVar2 = func_0208122c(iVar3, asStack_48[i], (s32 *)((u8 *)aiStack_3c + (u32)*pbVar4 * 12));
        *(s32 **)(pG + i * 4 + 0x73e0) = piVar2;
        if (*(s32 *)((u8 *)data_0214f464 + i * 4 + 0x73e0) != 0) {
            iVar3 = (s32)func_020bc3c4();
            iVar6 = (s32)func_020bc3c4();
            iVar3 = func_02067898(*(s16 *)(iVar3 + 0x6c), *(s16 *)(iVar6 + 0x6e));
            *(s32 *)(*(s32 *)((u8 *)data_0214f464 + i * 4 + 0x73e0) + 0x54) = (s16)(s32)(((s64)iVar3 * 0x1c00 + 0x800) >> 12);
        }
        i = (s16)(i + 1);
        pbVar4 = pbVar4 + 1;
    } while (i < 3);
    *((u8 *)data_0214f464 + 12) = 2;
    *(u16 *)((u8 *)data_0214f464 + 0x2a) = 200;
    *((u8 *)data_0214f464 + 10) = (u8)param_2;
    *(u16 *)((u8 *)data_0214f464 + 0x20) = param_4;
}
