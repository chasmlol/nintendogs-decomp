#include "ctx.h"
#pragma opt_strength_reduction off
#pragma opt_propagation off
#pragma opt_loop_invariants off
#pragma opt_common_subs off

extern u8 data_02133258[];
extern u8 data_02133250[];
extern void func_02112798(int a, int b, int c);
extern void func_02112a50(int a, int b, int c, int d);
extern void func_020fc084(u8 *p, int a, int b, int c, int d, int e, int f, int g);

void func_020f85d0(u8 *param_1)
{
    int iVar3;
    int iVar2;
    int local_40;
    u8 *pbVar1;
    int jj;
    int kk;
    u8 *pp;

    pbVar1 = data_02133258;
    iVar2 = 0;
    do {
        func_02112798(2, pbVar1[0], 1);
        func_02112a50(2, pbVar1[0], 0, ((*(s32 *)(param_1 + 0xc)) << 4) >> 16);
        iVar2 = iVar2 + 1;
        pbVar1 = pbVar1 + 1;
    } while (iVar2 < 12);
    local_40 = 0;
    do {
        jj = 0;
        do {
            pp = data_02133250 + (u32)local_40 * 4 + (u32)jj * 2;
            kk = 0;
            do {
                if (kk == 0 && *(s32 *)(param_1 + (u32)local_40 * 8 + (u32)jj * 4 + 0x18) != 0) {
                    func_02112798(2, pp[0], 0);
                } else {
                    func_02112798(2, pp[0], 1);
                }
                if (jj == 0) {
                    func_02112a50(2, pp[0], 0,
                                  (((*(s32 *)(param_1 + 0xc)) + (*(s32 *)(param_1 + 0x14))) * 0x10) >> 16);
                } else {
                    func_02112a50(2, pp[0], 0,
                                  (((*(s32 *)(param_1 + 0xc)) - (*(s32 *)(param_1 + 0x14))) * 0x10) >> 16);
                }
                pp = pp + 1;
                kk = kk + 1;
            } while (kk < 2);
            jj = jj + 1;
        } while (jj < 2);
        local_40 = local_40 + 1;
    } while (local_40 < 2);
    func_020fc084(param_1 + 0x68, 2, 10, 0x16, 2, param_1[0x112], 1, 0);
    func_020fc084(param_1 + 0x90, 2, 10, 0x18, 2, param_1[0x113], 1, 0);
}
