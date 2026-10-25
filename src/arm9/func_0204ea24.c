#include "ctx.h"

extern u32 func_020449bc(void);
extern u32 func_0202fd7c(u8 *p);
extern void func_020362ec(u8 *p, s16 v);
extern void func_0203e908(u8 *p, u32 v);
extern void func_0202707c(u8 *p, u32 v);

u32 func_0204ea24(u8 *param_1, u8 *param_2)
{
    u32 uVar1;
    s32 t;
    uVar1 = func_020449bc();
    if ((uVar1 & 0x100) == 0) {
        return func_0202fd7c(param_1);
    }
    t = (s8)(*(s8 *)(param_1 + 0x8b) - 4);
    if ((u8)t <= 1) {
        goto RET0;
    }
    t = (s8)(*(s8 *)(param_2 + 0x8b) - 4);
    if ((u8)t > 1) {
        goto BODY;
    }
RET0:
    return 0;
BODY:
    t = *(s8 *)(param_2 + 0x88);
    func_020362ec(param_1, (s16)t);
    func_0203e908(param_1, 0x26f);
    t = *(s8 *)(param_1 + 0x88);
    func_020362ec(param_2, (s16)t);
    func_0202707c(param_2, 0x18);
    return 1;
}
