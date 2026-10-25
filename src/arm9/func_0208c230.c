#include "ctx.h"

extern u8 data_0212f720[];

extern void func_02088364(u32 *st);
extern void func_0208c320(u8 *buf, u32 n, u32 v, u32 idx);
extern s32 func_02088014(u32 *st, u8 *buf);
extern u32 func_020038b8(u8 *p, u32 n);
extern void func_02087e90(u32 *st, u32 a, u32 b);
extern void func_02087fcc(u32 *st);
extern u32 func_02066160(void);
extern s32 func_020d5abc(void);
extern s32 func_020d5aa0(void);
extern void func_02066120(void);
extern void func_0207e9f8(u32 a, u32 b);

u32 func_0208c230(u8 *p, u32 p2)
{
    u8 buf[64];
    u32 st[18];
    u32 r4;
    u32 r5;
    u32 r;
    u32 uVar4;

    r5 = 0;
    func_02088364(st);
    uVar4 = *(u32 *)(data_0212f720 + p2 * 28 + 4);
    if (uVar4 != 0) {
        func_0208c320(buf, 64, uVar4, p2);
        if (func_02088014(st, buf) != 0) {
            r4 = st[9] - st[8];
            r5 = func_020038b8(p, r4);
            func_02087e90(st, r5, r4);
            func_02087fcc(st);
        }
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
    return r5;
}
