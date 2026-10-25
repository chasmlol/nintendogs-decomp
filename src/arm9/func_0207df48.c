#include "ctx.h"
extern void func_02088364(u32 *p);
extern s32 func_02088014(u32 *p, u8 *q);
extern void func_02087fcc(u32 *p, u32 a, u32 b);
s32 func_0207df48(u8 *param_1)
{
    u32 frame[17];
    s32 iVar1;
    s32 iVar2;
    u32 fld;
    iVar2 = 0;
    func_02088364(frame);
    iVar1 = func_02088014(frame, param_1);
    if (iVar1 != 0) {
        fld = *(u32 *)(frame[2] + 0x58);
        iVar2 = fld + frame[8];
        func_02087fcc(frame, frame[8], fld);
    }
    return iVar2;
}
