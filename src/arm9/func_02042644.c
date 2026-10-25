#pragma avoid_byte strb
#include "ctx.h"


typedef struct { u16 w[3]; } T3h;

extern void func_02043738(void);
extern void func_02042d60(void);
extern void func_02020904(void);
extern BOOL func_0208cac8(s32 a, s32 b);
extern void func_0208ca9c(s32 a, s32 b);
extern void func_0208ca50(s32 a, s32 b);
extern void func_ov006_02161738(void);
extern s32 func_ov004_0216e568(void);
extern void func_0208cc2c(u16 *a);

extern u16 data_0213b464[];
extern u8 *data_0214f464;
extern u16 *data_0215942c;
extern u8 *data_02159444;
extern u8 *data_02159468;

void func_02042644(void)
{
    s32 iVar10;
    u16 *lp;
    u16 zz;
    u16 local_18[6];
    s32 bVar4;
    s32 v;
    u8 *pbVar6;
    u32 *puVar5;
    s32 i;

    func_02043738();
    i = 0;
    *(T3h *)local_18 = *(T3h *)data_0213b464;
    lp = local_18;
    zz = i;
    do {
        u8 *q = data_0214f464 + i * 2;
        *(u16 *)(q + 0x38) = *(u16 *)(q + 0x38) + 1;
        q = data_0214f464 + i * 2;
        if (*(u16 *)(q + 0x38) >= lp[i]) {
            *(u16 *)(q + 0x38) = zz;
        }
        i = (s16)(i + 1);
    } while (i < 3);

    func_02042d60();
    func_02020904();

    {
        s32 iVar12 = *(s32 *)(data_0214f464 + 0x40);
        if (iVar12 > 1) {
            *(s32 *)(data_0214f464 + 0x40) = iVar12 - 1;
        }
    }
    data_0214f464[0x14] = 0;

    {
        s32 iVar13 = (s8)data_0214f464[9];
        if (iVar13 != -1) {
            if (iVar13 < 0 || iVar13 >= 3) {
                iVar13 = 0;
            } else {
                iVar13 = *(s32 *)(data_0214f464 + iVar13 * 4 + 0x54);
            }
            if (iVar13 != 0 && (*(u8 *)(iVar13 + 0xb5) & 4) != 0) {
                data_0214f464[0x14] = 1;
            }
        }
    }

    if ((s8)data_0214f464[0x11] != -1) {
        s32 iVar11 = *(s32 *)(data_0214f464 + (s8)data_0214f464[0x11] * 4 + 0x48);
        bVar4 = func_0208cac8(iVar11, (s16)(s8)data_0214f464[0x12]);
        if (bVar4) {
            func_0208ca9c(iVar11, (s16)(s8)data_0214f464[0x12]);
            func_0208ca50(iVar11, (s16)(s8)data_0214f464[0x12]);
            data_0214f464[0x10] = 0;
            *(s8 *)(data_0214f464 + 0x11) = -1;
            *(s8 *)(data_0214f464 + 0x12) = -1;
        }
    }

    if (*data_0215942c == 3) {
        func_ov006_02161738();
    }
    if (*data_0215942c == 12) {
        s32 iVar14 = func_ov004_0216e568();
        if (iVar14 != 0) {
            iVar14 = (s8)data_0214f464[6];
            if (iVar14 < 0 || iVar14 >= 3) {
                iVar14 = 0;
            } else {
                iVar14 = *(s32 *)(data_0214f464 + iVar14 * 4 + 0x54);
            }
            if (iVar14 != 0) {
                *(u8 *)(iVar14 + 0xb0) = *(u8 *)(iVar14 + 0xb0) & ~2;
            }
        }
    }

    if (*data_0215942c == 0x8003) {
        s32 iVar15;
        v = *(s16 *)(data_02159444 + 0x7a);
        if (v < 0 || *(s16 *)(data_02159468 + 0x20) <= v) {
            iVar15 = 0;
        } else {
            iVar15 = *(s32 *)(data_02159468 + v * 4 + 4);
        }
        if (iVar15 != 0) {
            iVar15 = (s8)data_0214f464[6];
            if (iVar15 < 0 || iVar15 >= 3) {
                pbVar6 = 0;
            } else {
                pbVar6 = *(u8 **)(data_0214f464 + iVar15 * 4 + 0x54);
            }
            if (pbVar6 != 0) {
                *(pbVar6 + 0xb0) = *(pbVar6 + 0xb0) & ~2;
            }
        }
    }

    iVar10 = 0;
    do {
        puVar5 = *(u32 **)(data_0214f464 + iVar10 * 4 + 0x48);
        if (puVar5 != 0) {
            func_0208cc2c((u16 *)puVar5);
        }
        iVar10 = (s16)(iVar10 + 1);
    } while (iVar10 < 3);
}
