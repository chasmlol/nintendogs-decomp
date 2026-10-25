#include "ctx.h"
extern u8 data_0212b14c[];
extern u8 data_0213ebc8[];
extern void func_0205f050(u8 *a, s32 b, void *c, u32 d);
extern void func_02088364(s32 *p);
extern s32 func_02088014(s32 *p, u8 *q);
extern s32 func_020038b8(u8 *p, s32 a);
extern s64 func_02087e90(s32 *p, s32 a, s32 b);
extern void func_02087fcc(s32 *p);
extern s32 func_020785bc(s32 a, s32 b);
extern u64 func_02066160(void);
extern s32 func_020d5abc(u64 v);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern u64 func_0207e9f8(u32 a, u32 b);

s32 func_0208bd84(u8 *param_1, s32 param_2)
{
    s32 blk[49];
    u32 uVar4;
    u32 *puVar6;
    s32 iVar3;
    s32 bVar1;
    u64 uVar7;
    s32 iVar5;

    uVar4 = *(u32 *)(data_0212b14c + param_2 * 24);
    puVar6 = (u32 *)data_0213ebc8;
    func_0205f050((u8 *)blk, 128, puVar6, uVar4);
    iVar5 = 0;
    func_02088364(&blk[32]);
    iVar3 = func_02088014(&blk[32], (u8 *)blk);
    if (iVar3 != 0) {
        puVar6 = (u32 *)(blk[41] - blk[40]);
        iVar3 = func_020038b8(param_1, (s32)puVar6);
        func_02087e90(&blk[32], iVar3, (s32)puVar6);
        func_02087fcc(&blk[32]);
        iVar5 = func_020785bc(iVar3, 0);
    }
    uVar7 = func_02066160();
    if ((s32)uVar7 != 0) {
        bVar1 = 0;
        for (;;) {
            if (bVar1 == 0) {
                if (func_020d5abc(uVar7) != 0) {
                    bVar1 = 1;
                }
            }
            if (bVar1 != 0) {
                if (func_020d5aa0() != 0) {
                    func_02066120();
                }
            }
            uVar7 = func_0207e9f8(1, 1);
        }
    }
    return iVar5;
}
