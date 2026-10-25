#include "ctx.h"

typedef struct {
    u32 f0;
    u16 f4;
    u16 f6;
    u32 f8;
} GlobalObj;

extern GlobalObj data_0215602c;
extern u32 data_02156028;
extern u32 func_02080b08(u32 a);
extern void func_02080b1c(u32 a);

void func_02087644(u32 *param_1)
{
    u32 r;
    u32 *prev;
    if (param_1[0] != 0) {
        r = func_02080b08(param_1[0]);
        prev = (u32 *)param_1[1];
        if (prev != 0) {
            prev[2] = param_1[2];
        }
        if (param_1[2] != 0) {
            ((u32 *)param_1[2])[1] = param_1[1];
        }
        param_1[0] = 0;
        param_1[2] = 0;
        param_1[1] = param_1[2];
        param_1[4] = param_1[4] & 0xfffffffe;
        if (data_0215602c.f0 == (u32)param_1) {
            data_0215602c.f8 = 0;
            data_0215602c.f6 = 0;
            data_0215602c.f0 = data_02156028;
            data_0215602c.f4 = 0;
        }
        func_02080b1c(r);
    }
}
