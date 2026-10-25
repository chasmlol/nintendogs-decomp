#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 v);
extern void *func_020038b8(s32 *p, u32 n);
extern void func_020fbc04(void);
extern void func_020fbba0(void);
extern void func_020fbcfc(void);
extern u8 data_0213331c;

void func_020fbd00(u8 *param_1, s32 *param_2)
{
    u32 *p;
    u32 uVar2;

    func_020bdd1c(param_1, 0x74);
    *(void **)(param_1 + 0x1f4) = (void *)func_020fbc04;
    *(void **)(param_1 + 0x1f8) = (void *)func_020fbba0;
    *(void **)(param_1 + 0x1f0) = (void *)func_020fbcfc;
    *(void **)(param_1 + 0x214) = func_020038b8(param_2, 4);
    p = *(u32 **)(param_1 + 0x214);
    if (p != NULL) {
        *p = 0;
    }
    *(u32 *)(param_1 + 0xac) = 1200;
    uVar2 = *(u32 *)(&data_0213331c + 8);
    *(u32 *)(param_1 + 0xf8) = uVar2;
    *(u32 *)(param_1 + 0x120) = uVar2;
    *(u32 *)(param_1 + 0x128) = uVar2;
    *(u32 *)(param_1 + 0x12c) = 1;
}
