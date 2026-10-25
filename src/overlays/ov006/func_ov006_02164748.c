#include "ctx.h"
#pragma opt_propagation off

typedef struct { s16 a; s16 cnt; } Ent;
typedef struct { s32 w[5]; } T5;

extern u8 *data_ov006_021661c0;
extern s32 data_ov006_02165f50;
extern u32 data_ov006_02165f6c[];
extern s32 data_ov006_02165f58[];
extern u8 *data_0214f45c;
extern u8 *func_020038b8(u8 *a, s32 b);
extern void func_0208efac(u8 *a);
extern u8 *func_0208c720(u8 *a, s32 b, u32 c);
extern s32 func_0200c498(s32 a, s32 b);
extern void func_ov006_021626d4(u8 *a, u8 *b, s32 c);
extern void func_ov006_02163008(u8 *a, u8 *b, s32 c);
extern void func_ov006_02164530(u8 *a, u8 *b, s32 c);
extern void func_ov006_021637b8(u8 *a, u8 *b, s32 c, s32 d);
extern void func_ov006_0216424c(u8 *a, u8 *b, s32 c);

u8 *func_ov006_02164748(u8 *param_1)
{
    s32 k48;
    s32 iVar9;
    s32 iVar8;
    s32 iVar7;
    s32 iVar6;
    u32 *pg;
    s32 iVar5;
    u8 *puVar2;
    u8 *puVar3;
    s32 local_3c[5];

    puVar2 = func_020038b8(param_1, 0x158);
    data_ov006_021661c0 = puVar2;
    *(u8 **)puVar2 = param_1;
    func_0208efac(data_ov006_021661c0 + 4);
    puVar3 = func_0208c720(param_1, data_ov006_02165f50, (u32)data_ov006_02165f6c);
    pg = (u32 *)&data_ov006_021661c0;
    iVar9 = 0;
    iVar8 = 0;
    *(u8 **)(*pg + 0x28) = puVar3;
    do {
        *(T5 *)local_3c = *(T5 *)data_ov006_02165f58;
        iVar5 = 0;
        do {
            *(u32 *)(iVar8 + *pg + iVar5 * 4 + 0x2c) = 0;
            iVar5 = (s16)(iVar5 + 1);
        } while (iVar5 < 15);
        iVar6 = 0;
        iVar7 = local_3c[iVar9];
        if (0 < ((Ent *)*(u8 **)(data_0214f45c + 0x20))[iVar7].cnt) {
            do {
                k48 = 0x30;
                *(u32 *)(iVar8 + *pg + (u32)iVar6 * 4 + 0x2c) = (u32)func_020038b8(param_1, k48);
                switch (iVar9) {
                case 0:
                    func_ov006_021626d4(*(u8 **)(iVar8 + *pg + iVar6 * 4 + 0x2c), param_1, func_0200c498(iVar7, iVar6));
                    break;
                case 1:
                    func_ov006_02163008(*(u8 **)(iVar8 + *pg + iVar6 * 4 + 0x2c), param_1, func_0200c498(iVar7, iVar6));
                    break;
                case 2:
                    func_ov006_02164530(*(u8 **)(iVar8 + *pg + iVar6 * 4 + 0x2c), param_1, func_0200c498(iVar7, iVar6));
                    break;
                case 3:
                    func_ov006_021637b8(*(u8 **)(iVar8 + *pg + iVar6 * 4 + 0x2c), param_1, func_0200c498(iVar7, iVar6), iVar6);
                    break;
                case 4:
                    func_ov006_0216424c(*(u8 **)(iVar8 + *pg + iVar6 * 4 + 0x2c), param_1, func_0200c498(iVar7, iVar6));
                    break;
                }
                iVar6 = (s16)(iVar6 + 1);
            } while (iVar6 < ((Ent *)*(u8 **)(data_0214f45c + 0x20))[iVar7].cnt);
        }
        iVar9 = (s16)(iVar9 + 1);
        iVar8 += 60;
    } while (iVar9 < 5);
    return data_ov006_021661c0;
}
