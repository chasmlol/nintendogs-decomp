#pragma avoid_byte strb
#include "ctx.h"
#pragma opt_propagation off

extern u32 data_0213eb60[];
extern void func_02088364(u32 *st);
extern s32 func_02088014(u32 *st, u32 *a);
extern u32 func_020038b8(u8 *p, u32 n);
extern void func_02087e90(u32 *st, u32 a, u32 b);
extern void func_02087fcc(u32 *st);
extern u32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(u32 a, u32 b);

u32 func_0208b8e8(u8 *p)
{
    u32 st[18];
    u8 *pp;
    u32 r5;
    u32 r4;
    u32 *lit;

    lit = (__typeof__(lit))(&data_0213eb60);
    pp = (__typeof__(pp))(p);
    r5 = 0;
    func_02088364(st);
    if (func_02088014(st, lit) != 0) {
        r4 = st[9] - st[8];
        r5 = func_020038b8(pp, r4);
        func_02087e90(st, r5, r4);
        func_02087fcc(st);
    }
    if (func_02066160() != 0) {
        r5 = 0;
        r4 = 1;
        for (;;) {
            if (r5 == 0) {
                if (func_020d5abc() != 0) {
                    r5 = r4;
                }
            }
            if (r5 != 0) {
                if (func_020d5aa0() != 0) {
                    func_02066120();
                }
            }
            func_0207e9f8(r4, r4);
        }
    }
    return r5;
}
