#include "ctx.h"

void *func_020038b8(void *p, u32 size);
void func_020aaaf8(void *p);
void func_020b7e68(void);
void func_020b803c(void);

u16 *func_020b7e20(void *param_1)
{
    u16 *p = (u16 *)func_020038b8(param_1, 28);

    func_020aaaf8(p);
    *p = 14;
    *(void **)((u8 *)p + 0x10) = (void *)func_020b7e68;
    *(void **)((u8 *)p + 0x14) = (void *)func_020b803c;
    p[1] = 0;
    return p;
}
