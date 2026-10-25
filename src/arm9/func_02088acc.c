#include "ctx.h"

typedef struct { u32 a; u32 b; } Pair;

extern void func_02088364(u32 *buf);
extern void func_02088d90(Pair *out, u32 *p);
extern BOOL func_02088064(u32 *buf, Pair pr);
extern u32 func_02088dfc(u32 *p);
extern void func_02088db8(u32 *p);
extern u32 func_02087e90(u32 *buf, u32 a, u32 b);
extern void func_02087fcc(u32 *buf);

BOOL func_02088acc(u32 *param_1)
{
    Pair local;
    u32 buf[17];
    u32 r;

    func_02088364(buf);
    func_02088d90(&local, param_1);
    if (func_02088064(buf, local) == 0) {
        return 0;
    }
    r = func_02088dfc(param_1);
    func_02088db8(param_1);
    if (r != func_02087e90(buf, param_1[1], r)) {
        func_02087fcc(buf);
        return 0;
    }
    func_02087fcc(buf);
    return 1;
}
