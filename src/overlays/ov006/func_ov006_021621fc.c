#include "ctx.h"
extern void func_ov006_02162314(u8 *p);
extern void func_02067e68(u32 *a, u32 *b, u32 *c);
extern u64 func_020449e4(void);
void func_ov006_021621fc(u8 *param_1)
{
    u32 *piVar3;
    u32 *puVar2;
    s64 lVar1;
    s64 fv;
    u32 z;
    u32 *q4;
    u32 zz;

    piVar3 = *(u32 **)(param_1 + 0x2c);
    func_ov006_02162314(param_1);
    if (piVar3[0] == 1) {
        piVar3[5] = piVar3[5] - 82;
        if ((s32)(piVar3[2] + piVar3[5]) <= 0) {
            piVar3[5] = 0;
        } else {
            func_02067e68(piVar3 + 1, piVar3 + 4, piVar3 + 1);
        }
        if ((s32)piVar3[9] > 0 && (piVar3[9] = piVar3[9] - 1, piVar3[9] == 0)) {
            puVar2 = *(u32 **)(param_1 + 0x2c);
            fv = (s64)(s32)func_020449e4();
            z = 0;
            lVar1 = fv * (((s64)z << 32) | 6144) + 0x800;
            puVar2[1] = z;
            {
                u32 *q = puVar2 + 1;
                q[1] = (u32)(lVar1 >> 12);
                q[2] = z;
            }
            func_02067e68((u32 *)(puVar2[10] + 0x30), puVar2 + 1, (u32 *)(puVar2[11] + 0x30));
            q4 = puVar2 + 4;
            zz = 0;
            puVar2[4] = zz;
            q4[1] = zz;
            q4[2] = zz;
            puVar2[0] = zz;
            puVar2[7] = zz;
            puVar2[8] = zz;
            puVar2[9] = zz;
        }
    }
    func_02067e68((u32 *)(piVar3[10] + 0x30), piVar3 + 1, (u32 *)(piVar3[11] + 0x30));
}
