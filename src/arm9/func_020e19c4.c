#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_common_subs off

extern u32 data_02144a80;
extern u32 data_0215b664;
extern u32 data_0215b674;
extern u32 data_0215b670;
extern s8 *data_0215b650;
extern s16 data_0215b64c[];
extern u8 data_0215b678[];
extern u32 data_0215b66c;
extern u8 *data_0215b648;
extern u32 data_02144a7c;

void func_020dfc38(void);
void func_020dfd0c(u32 a);
void func_020dfc94(void);
void func_020e1c2c(u32 a);
void func_020e0240(u32 a, u32 b, u32 c, u32 d, u32 e);
void func_020dfdd0(s16 *a, u32 b);
u64 func_0205e47c(u32 a, u32 b);
void func_020dffa0(s16 *a, u8 *b, u32 c, s16 *d);

typedef struct { s16 v; s8 s; u8 pad; } Ent;

void func_020e19c4(u8 *param_1, u8 *param_2, u32 param_3, u32 param_4)
{
    u32 uVar13;
    s8 *pcVar12;
    u8 *pbVar11;
    u32 uVar9;
    u32 m;
    u32 m0;
    u32 idx;
    u64 q;
    u32 x;
    u32 hi;
    s32 t;
    s16 sStack[2];

    func_020dfc38();
    t = (s32)(param_4 * 8000);
    func_020dfd0c((u32)((t + (s32)((u32)(t >> 7) >> 24)) >> 8));
    func_020dfc94();
    x = param_3 * data_02144a80;
    param_3 = x / 127u;
    if (param_2 == 0) {
        return;
    }
    pcVar12 = (s8 *)(param_1 + 0xc);
    pbVar11 = param_2 + 0xc;
    func_020e1c2c((u32)param_2);
    uVar9 = param_3 & 0xfffffffeu;
    data_0215b670 = 1;
    data_0215b674 = uVar9;
    data_0215b650 = pcVar12 + uVar9;
    data_0215b66c = 0u;
    if (data_0215b664 == 0) {
        data_0215b664 = 1;
        func_020e0240((u32)param_2, (u32)param_1, 0, data_02144a80, 0);
    }
    data_0215b64c[0] = *(s16 *)pbVar11;
    *((u8 *)data_0215b64c + 2) = (*(s8 *)(pbVar11 + 2));
    func_020dfdd0(data_0215b64c, (u32)*(s8 *)pcVar12);
    *(s16 *)pbVar11 = data_0215b64c[0];
    pbVar11[2] = *(s8 *)((u8 *)data_0215b64c + 2);
    pbVar11 = pbVar11 + 4;
    m0 = data_02144a80 / 40u;
    idx = (u32)func_0205e47c(uVar9, m0);
    uVar13 = idx * m0;
    data_0215b64c[0] = *(u16 *)(data_0215b678 + idx * 4);
    data_0215b64c[1] = *(u16 *)(data_0215b678 + idx * 4 + 2);
    pbVar11 = pbVar11 + (uVar13 >> 1);
    if (uVar13 < uVar9) {
        do {
            m = data_02144a80 / 40u;
            q = func_0205e47c(uVar13, m);
            if ((u32)(q >> 32) == 0) {
                idx = (u32)func_0205e47c(uVar13, m);
                if (!(data_0215b64c[0] == *(s16 *)(data_0215b678 + idx * 4) &&
                      *(s8 *)((u8 *)data_0215b64c + 2) == *(s8 *)(data_0215b678 + idx * 4 + 2))) {
                    ((Ent *)data_0215b678)[idx] = *(Ent *)data_0215b64c;
                }
            }
            sStack[0] = (s16)(pcVar12[uVar13] << 8);
            sStack[1] = (s16)(pcVar12[uVar13 + 1] << 8);
            uVar13 = uVar13 + 2;
            func_020dffa0(sStack, pbVar11, 2, data_0215b64c);
            pbVar11 = pbVar11 + 1;
        } while (uVar13 < uVar9);
    }
    data_0215b648 = pbVar11;
    data_02144a7c = 40;
}
