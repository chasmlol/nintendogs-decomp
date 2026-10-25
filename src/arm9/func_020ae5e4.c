#include "ctx.h"

extern u32 data_02142470;
extern s32 func_020bc14c(void);
extern s32 func_01ffdb08(s32 a);
extern s32 func_0202817c(s32 a);
extern u8 func_02028100(s32 a);
extern s32 func_0208fc60(u32 a, u32 b);

s32 func_020ae5e4(s32 p0, u32 p1)
{
    s32 r4;
    s32 r;

    r4 = (s32)&data_02142470;
    switch (p0) {
    case 0x30002:
        r = func_01ffdb08(func_020bc14c());
        if (r != 0) {
            r4 = func_0202817c(r) + 120;
        }
        break;
    case 0x30005:
        r = func_01ffdb08(func_020bc14c());
        if (r != 0) {
            r4 = func_0208fc60(func_02028100(r), p1);
        }
        break;
    }
    return r4;
}
