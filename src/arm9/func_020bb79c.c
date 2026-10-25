#include "ctx.h"

void *func_020038b8(void *p, u32 size);
void func_020aaaf8(void *p);
void func_020bb7e8(void);
void func_020bb8b4(void);

u16 *func_020bb79c(void *param_1)
{
    u16 *p = (u16 *)func_020038b8(param_1, 32);

    func_020aaaf8(p);
    *p = 17;
    *(void **)((u8 *)p + 0x10) = (void *)func_020bb7e8;
    *(void **)((u8 *)p + 0x14) = (void *)func_020bb8b4;
    p[1] = 0;
    p[14] = 0;
    return p;
}
