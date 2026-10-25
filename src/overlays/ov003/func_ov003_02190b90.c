#include "ctx.h"

extern s32 func_02035770(void *p, s32 a);
extern s32 func_02035744(void *p, s32 a);
extern s32 func_0203579c(void *p, s32 a);
extern s32 func_0203567c(void *p);
extern void func_ov003_02190c64(void *p, s32 a, s32 b, s32 c, s32 d);

void func_ov003_02190b90(void *param_1)
{
    s32 iVar1;
    s32 iVar2;
    s32 iVar3;

    iVar1 = 0;
    if (func_02035770(param_1, 7) != 0) {
        if (func_02035744(param_1, 0x19) != 0) {
            iVar1 = 1;
        }
    }
    iVar2 = func_0203579c(param_1, 7);
    iVar3 = func_0203567c(param_1);
    func_ov003_02190c64(param_1, 0, iVar2, iVar1, iVar3);
}
