#include "ctx.h"

extern u32 data_0213331c;
extern void func_020fbc04(void);
extern void func_020fbba0(void);
extern void func_020fbcfc(void);
extern void func_020bdd1c(u8 *p, s32 a);
extern u32 func_020038b8(s32 *p, s32 n);

void func_020fbd90(u8 *param_1, s32 *param_2)
{
    u32 v;

    func_020bdd1c(param_1, 0x73);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020fbc04;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020fbba0;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020fbcfc;
    *(u32 *)(param_1 + 0x214) = func_020038b8(param_2, 4);
    if (*(u32 **)(param_1 + 0x214) != 0) {
        **(u32 **)(param_1 + 0x214) = 0;
    }
    *(u32 *)(param_1 + 0xac) = 1200;
    v = *(u32 *)((u8 *)&data_0213331c + 4);
    *(u32 *)(param_1 + 0xf8) = v;
    *(u32 *)(param_1 + 0x120) = v;
    *(u32 *)(param_1 + 0x128) = v;
    *(u32 *)(param_1 + 0x12c) = 1;
}
