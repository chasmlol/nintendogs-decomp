#include "ctx.h"

typedef struct {
    u8 pad0[0x40];
    u32 arr[16];
    u8 pad1[0x8a];
    u16 h10a;
} Obj;

#define OBJP (*(Obj **)&data_0215ad40)

extern u32 data_0215ad40;
extern u32 func_0206fbc8(u32 a);
extern s32 func_0206fb04(u32 a, u32 b, s32 *c, s32 *d);

u8 func_020d740c(u8 param_1)
{
    s32 s0;
    s32 s1;
    u32 u;
    s32 i;
    s32 j;

    u = func_0206fbc8(OBJP->h10a);
    if (func_0206fb04(0x438, u, &s0, &s1) != 0) {
        param_1 = param_1 + 1;
    }
    param_1 = param_1 + 1;
    i = 0;
    do {
        if (OBJP->arr[i] != 0) {
            j = 0;
            do {
                func_0206fbc8(OBJP->h10a);
                j = j + 1;
            } while (j < 10);
            param_1 = param_1 + 1;
        }
        i = i + 1;
    } while (i < 16);
    return param_1;
}
