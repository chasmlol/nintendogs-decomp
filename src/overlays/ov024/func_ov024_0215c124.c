#include "ctx.h"

extern u32 *data_ov024_0215c364;
extern u32 data_0214efdc;
extern u32 data_ov024_0215c360;
extern void func_0208f6ac(u32 a);
extern void func_020d6f84(void);
extern void func_020d6f98(void);
extern void func_020d6d30(void);
extern s32 func_020d72a0(void);
extern void func_020d6d34(u8 *p, s32 v);

void func_ov024_0215c124(u32 param_1, u32 param_2, s32 *param_3, u32 param_4)
{
    u16 f;
    s32 v;
    u8 *pp;

    func_0208f6ac(*data_ov024_0215c364);
    f = *(u16 *)&data_0214efdc;
    if ((u16)(f & 1) != 0) {
        func_020d6f98();
    } else {
        if ((u16)(f & 2) != 0) {
            func_020d6f84();
        }
    }
    func_020d6d30();
    if (func_020d72a0() != 0) {
        *(u16 *)&data_ov024_0215c360 = 300;
    }
    pp = (u8 *)&data_ov024_0215c360;
    v = *(s16 *)pp;
    if (v > 0) {
        v = v - 1;
        *(s16 *)pp = v;
    }
    func_020d6d34(pp, v);
}
