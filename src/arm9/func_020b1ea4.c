#include "ctx.h"

extern void *func_020038b8(s32 *p, u32 n);
extern void func_020aaaf8(u16 *p);
extern void func_020b2320(void);
extern void func_020b2844(void);
extern void func_020b1f14(u32 a, u32 b);

u16 *func_020b1ea4(s32 *param_1, u32 param_2, u32 param_3)
{
    u16 *puVar3;

    puVar3 = (u16 *)func_020038b8(param_1, 0x20);
    func_020aaaf8(puVar3);
    *puVar3 = 5;
    *(void **)(puVar3 + 8) = (void *)func_020b2320;
    *(void **)(puVar3 + 10) = (void *)func_020b2844;
    puVar3[1] = 0;
    puVar3[4] = 0xb4;
    *(u32 *)(puVar3 + 0xe) = param_3;
    if (*(u32 *)(puVar3 + 0xe) != 0) {
        func_020b1f14(*(u32 *)(puVar3 + 0xe), param_2);
    }
    return puVar3;
}
