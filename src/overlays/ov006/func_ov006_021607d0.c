#pragma avoid_byte strb
#include "ctx.h"

extern u8 *data_0214f45c;
extern u8 *data_0214f464;
extern u8 *data_02159424;
extern s32 func_0200c498(int a, int b);
extern void func_020bbcdc(void);
extern void func_020362f8(u8 *p);
extern void func_020362ec(u8 *p, int v);

s32 func_ov006_021607d0(u8 *param_1, u8 *param_2, s32 param_3, s32 param_4)
{
    s32 iVar5;
    s32 raw;
    s32 sVar1;
    s32 iVar9;
    s32 iVar6;
    s32 iVar8;
    s32 cVar2;
    s32 uVar7;
    s32 sv;
    s32 t;

    iVar5 = func_0200c498(9, (s16)*(s32 *)(param_2 + 0x3c));
    raw = *(s32 *)(param_2 + 0x20);
    iVar9 = (s16)raw;
    if (*(s8 *)(param_1 + 0x89) <= iVar9) goto B4;
    t = *(s32 *)(param_2 + 0x24);
    if (t >= 0) iVar9 = (s16)t;
B4:
    sVar1 = (s16)(raw & 0xffff);
    iVar6 = func_0200c498(9, (s16)*(s32 *)(param_2 + 0x3c));
    iVar8 = -1;
    if (iVar6 == 0) goto B6;
    iVar8 = (s16)*(s32 *)(iVar6 + 0x20);
    if (*(s8 *)(param_1 + 0x89) <= iVar8) goto B6;
    t = *(s32 *)(iVar6 + 0x24);
    if (t >= 0) iVar8 = (s16)t;
B6:
    if (param_4 != 0) func_020bbcdc();
    if (param_3 != 0) goto L14c;
    iVar6 = 0;
    if (*(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x26) <= 0) goto L10c;
    do {
        *(s32 *)(data_0214f464 + iVar6 * 4 + 0xa4) = 0;
        iVar6 = (s16)(iVar6 + 1);
    } while (iVar6 < *(s16 *)(*(u8 **)(data_0214f45c + 0x20) + 0x26));
L10c:
    *(s32 *)(data_0214f464 + 0x98) = 0;
    func_020362f8(param_1);
    if (iVar5 != 0) {
        func_020362ec(param_1, (s16)(*(s32 *)(param_2 + 0x3c) + 0x2d));
        func_020362f8(param_1);
    }
L14c:
    if (param_3 == 0) goto ret0;
    if (*(s16 *)data_02159424 == 0) return 1;
    cVar2 = *(s8 *)(param_1 + 0x89);
    if (iVar9 == cVar2) {
        sv = cVar2 + 1;
        param_1[137] = sv;
        return 1;
    }
    if (iVar8 == cVar2) {
        sv = cVar2 + 1;
        param_1[137] = sv;
        return 2;
    }
    cVar2 = cVar2 - 1;
    if (iVar9 == cVar2) return 3;
    if (sVar1 == cVar2) return 3;
    if (iVar8 == cVar2) {
        uVar7 = 3;
    } else {
        uVar7 = 4;
    }
    return uVar7;
ret0:
    return 0;
}
