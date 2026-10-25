#include "ctx.h"
#pragma opt_common_subs off
#pragma opt_loop_invariants off

extern u8 data_021560e4[];
extern u8 data_021560d4[];
extern u16 data_021560d0;
extern u16 data_021560e6;
extern u32 data_02156124;
extern u16 data_021560e6;
extern u8 func_020893a8(void);
extern void func_0206c9b8(u16 *a, u16 *b, u32 c);
extern void func_0206552c(u32 a);
extern void func_0207ef68(u32 a);
extern void func_020892ac(int a);
extern void func_0207ee54(u32 a);
extern void func_0206551c(u32 a);
extern void func_020892f8(void);

u32 func_02089464(u16 *param_1, u32 param_2)
{
    u32 uVar7;
    u32 z;

    if ((func_020893a8() & 1) != 0) {
        return 0;
    }
    z = 0;
    {
        u8 *pb;
        u32 pq;
        pb = data_021560e4;
        pq = (u32)&data_02156124;
        *(u8 **)(data_021560d4 + 4) = pb;
        *(u32 *)(data_021560d4 + 8) = pq;
        pb[0] = 2;
        pb[1] = z;
    }
    func_0206c9b8(param_1, (u16 *)&data_021560e6, param_2);
    func_0206552c(data_021560d0);
    func_0207ef68(data_021560d0);
    *(vu16 *)0x040001a0 = 0xa040;
    func_020892ac((int)data_021560d4);
    func_020892ac((int)data_021560d4);
    uVar7 = z;
    if (uVar7 < param_2) {
        do {
            if (uVar7 == param_2 - 1) {
                *(vu16 *)0x040001a0 = 0xa000;
            }
            func_020892ac((int)data_021560d4);
            uVar7 = uVar7 + 1;
        } while (uVar7 < param_2);
    }
    func_0207ee54(data_021560d0);
    func_0206551c(data_021560d0);
    func_020892f8();
    return 1;
}
