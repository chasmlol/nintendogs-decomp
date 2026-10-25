#pragma avoid_byte strb
#include "ctx.h"

extern u8 data_0213eb4c[];

void func_02088364(s32 *a);
s32 func_02088014(s32 *a, u32 b);
u32 func_020038b8(u8 *p, s32 n);
void func_02087e90(s32 *a, u32 b, s32 c);
void func_02087fcc(s32 *a);
u64 func_02066160(void);
s32 func_020d5abc(u64 v);
s32 func_020d5aa0(void);
void func_02066120(void);
u64 func_0207e9f8(u32 a, u32 b);

#pragma opt_propagation off
u32 func_0208b820(u8 *param_1)
{
    u8 *pp;
    u32 addr;
    s32 st[18];
    u32 uVar5;
    s32 n;
    u32 bVar1;
    u64 uv;

    addr = (u32)data_0213eb4c;
    pp = param_1;
    uVar5 = 0;
    func_02088364(st);
    if (func_02088014(st, addr) != 0) {
        n = st[9] - st[8];
        uVar5 = func_020038b8(pp, n);
        func_02087e90(st, uVar5, n);
        func_02087fcc(st);
    }
    uv = func_02066160();
    if ((s32)uv != 0) {
        bVar1 = 0;
        do {
            if (!bVar1) {
                if (func_020d5abc(uv) != 0) {
                    bVar1 = 1;
                }
            }
            if (bVar1 && func_020d5aa0()) {
                func_02066120();
            }
            uv = func_0207e9f8(1, 1);
        } while (1);
    }
    return uVar5;
}
