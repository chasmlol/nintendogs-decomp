#include "ctx.h"

extern u32 *data_0214f464;
extern u32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);

u32 func_02055688(u8 *param_1)
{
    u32 iVar1;
    u32 uVar2;
    u32 *q;
    u32 v;
    u16 f;

    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 1) == 0) {
        return func_0202fd7c(param_1);
    }
    if (iVar1 == 0) {
        return 0;
    }
    q = data_0214f464;
    v = *q * 0x10dcd + 1;
    *q = v;
    f = (u16)((v << 16) >> 31);
    switch (f) {
    case 0:
        func_0203e908(param_1, 0x278);
        return 1;
    case 1:
        func_0203e908(param_1, 0x279);
        return 1;
    }
    return 0;
}
