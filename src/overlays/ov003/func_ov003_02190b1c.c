#include "ctx.h"

extern s32 func_02035770(u8 *p, s32 n);
extern s32 func_02035744(u8 *p, s32 n);
extern s32 func_0203579c(u8 *p, s32 n);
extern s32 func_0203567c(u8 *p);
extern void func_ov003_02190c64(u8 *p, s32 a, s32 b, s32 c, s32 d);

void func_ov003_02190b1c(u8 *p)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;
    s32 flag;

    iVar1 = func_02035770(p, 7);
    if (iVar1 != 0 && (iVar1 = func_02035744(p, 25)) != 0) {
        flag = 1;
    } else {
        flag = 0;
    }
    iVar2 = func_0203579c(p, 7);
    iVar3 = func_0203567c(p);
    func_ov003_02190c64(p, 0, iVar2, flag, iVar3);
}
