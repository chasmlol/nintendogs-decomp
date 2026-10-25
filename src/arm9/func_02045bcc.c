#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 n);
extern s32 func_02036578(u8 *p);
extern u32 func_020449bc(void);
extern s32 func_0202fd7c(u8 *p);
extern void func_0203e908(u8 *p, s32 v);
extern s32 *data_0214f464;

void func_02045bcc(u8 *param_1)
{
    s32 iVar1;
    u32 uVar2;
    s32 iVar4;
    u16 s;

    if (func_02035770(param_1, 50) == 0) {
        return;
    }
    iVar1 = func_02036578(param_1);
    uVar2 = func_020449bc();
    if ((uVar2 & 0x20) == 0) {
        func_0202fd7c(param_1);
        return;
    }
    if (iVar1 == 0) {
        return;
    }
    iVar4 = *data_0214f464 * 0x10dcd + 1;
    *data_0214f464 = iVar4;
    s = (u16)(((u32)iVar4 << 16) >> 31);
    switch (s) {
    case 0:
        goto A;
    case 1:
        goto B;
    }
    return;
A:
    func_0203e908(param_1, 0x2cd);
    return;
B:
    func_0203e908(param_1, 0x2ce);
    return;
}
