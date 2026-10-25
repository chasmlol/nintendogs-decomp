#include "ctx.h"

extern void func_02088364(u32 *st);
extern s32 func_02088014(u32 *st, u32 *a);
extern u32 func_020038b8(u8 *p, u32 n);
extern void func_02087e90(u32 *st, u32 a, u32 b);
extern void func_02087fcc(u32 *st);
extern u32 func_020785bc(u32 a, u32 b);
extern u32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(u32 a, u32 b);

s32 func_0208ba5c(u8 *p, u32 *a2)
{
    u32 st[18];
    u32 r4;
    u32 r5;
    u32 r;

    r4 = 0;
    func_02088364(st);
    if (func_02088014(st, a2) != 0) {
        r5 = st[9] - st[8];
        r4 = func_020038b8(p, r5);
        func_02087e90(st, r4, r5);
        func_02087fcc(st);
        r4 = func_020785bc(r4, 0);
    }
    r = func_02066160();
    if (r != 0) {
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
    return r4;
}
