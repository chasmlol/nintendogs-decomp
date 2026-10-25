#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_0213eb94;
extern void func_02088364(u32 *a);
extern s32 func_02088014(u32 *a, u32 b);
extern u32 func_020038b8(u8 *p, u32 n);
extern void func_02087e90(u32 *a, u32 b, u32 c);
extern void func_02087fcc(u32 *a);
extern s32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(u32 a, u32 b);

u32 func_0208bbf4(u8 *param_1)
{
    u8 *pp;
    u32 uVar5;
    s32 iVar4;
    s32 bVar1;
    u32 addr;
    s32 n;
    u32 blk[18];
    { addr = (__typeof__(addr))(&data_0213eb94); pp = (__typeof__(pp))(param_1); }
    uVar5 = 0;
    func_02088364(blk);
    iVar4 = func_02088014(blk, addr);
    if (iVar4 != 0) {
        n = blk[9] - blk[8];
        uVar5 = func_020038b8(pp, n);
        func_02087e90(blk, uVar5, n);
        func_02087fcc(blk);
    }
    iVar4 = func_02066160();
    if (iVar4 != 0) {
        bVar1 = 0;
        do {
            if (bVar1 == 0) {
                if (func_020d5abc() != 0) {
                    bVar1 = 1;
                }
            }
            if (bVar1 != 0) {
                if (func_020d5aa0() != 0) {
                    func_02066120();
                }
            }
            func_0207e9f8(1, 1);
        } while (1);
    }
    return uVar5;
}
