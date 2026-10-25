#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern u8 *func_020038b8(u8 *p, u32 v);
extern void func_ov005_02165dd0(void);
extern void func_ov005_021658e0(void);
extern void func_ov005_02165f24(void);

void func_ov005_02165f84(u8 *param_1, u8 *param_2)
{
    u8 *obj;

    func_020bdd1c(param_1, 110);
    *(void **)(param_1 + 0x1f4) = (void *)func_ov005_02165dd0;
    *(void **)(param_1 + 0x1f8) = (void *)func_ov005_021658e0;
    *(void **)(param_1 + 0x1f0) = (void *)func_ov005_02165f24;
    obj = func_020038b8(param_2, 12);
    *(u8 **)(param_1 + 0x214) = obj;
    obj = *(u8 **)(param_1 + 0x214);
    *(s16 *)obj = -1;
    *(u32 *)(obj + 4) = 0;
}
