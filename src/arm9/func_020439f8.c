#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off
extern u8 data_0214f464[];
extern void func_0208d038(u32 a, u32 b);
extern void func_0208cf88(u16 *a, u32 b, u32 c);
void func_020439f8(u32 param_1)
{
    s32 iVar7;
    s32 iVar3;
    u8 *iVar5;
    u16 *puVar6;
    u16 *psVar4;
    u32 zz;
    u8 **pa;
    s32 st;
    s32 jj;

    iVar7 = 0;
    do {
        iVar3 = *(s32 *)(*(u8 **)data_0214f464 + iVar7 * 4 + 0x48);
        if (iVar3 != 0) {
            func_0208d038(iVar3, param_1);
        }
        iVar7 = (s16)(iVar7 + 1);
    } while (iVar7 < 3);
    jj = 0;
    pa = (__typeof__(pa))(&data_0214f464);
    st = (__typeof__(st))(0x85c);
    zz = jj;
    do {
        iVar5 = *pa;
        if (*(s8 *)(iVar5 + jj + 0x19) != 0) {
            puVar6 = (u16 *)(iVar5 + 0x1a4 + jj * st);
        } else {
            puVar6 = (u16 *)zz;
        }
        if ((u32)puVar6 != 0 && (psVar4 = *(u16 **)(iVar5 + jj * 4 + 0x48), (u32)psVar4 != 0)) {
            func_0208cf88(psVar4, (u32)puVar6[0], (u32)*(u8 *)((u8 *)puVar6 + 2));
        }
        jj = (s16)(jj + 1);
    } while (jj < 3);
}
