#include "ctx.h"

extern void func_020eb4d0(void);
extern void func_020ea41c(void);
extern void func_020eb610(void);
extern void func_020bdd1c(u8 *p, s32 a);
extern u32 func_020038b8(s32 *p, s32 n);
extern void func_020bd868(u8 *p);
extern void func_02066b80(u8 *p);

void func_020ea788(u8 *param_1, s32 *param_2)
{
    u32 v;

    func_020bdd1c(param_1, 1);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020eb4d0;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020ea41c;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020eb610;
    *(u32 *)(param_1 + 0x214) = func_020038b8(param_2, 2);
    *(u32 *)(param_1 + 0xac) = 0x6a4;
    func_020bd868(param_1);
    func_02066b80(param_1 + 200);
    v = 0xe6a;
    *(u32 *)(param_1 + 0xf8) = v;
    *(u32 *)(param_1 + 0x120) = v;
    *(u32 *)(param_1 + 0x128) = v;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 8;
    *(u16 *)(param_1 + 0x84) = 0;
    *(u16 *)(param_1 + 0x86) = 0;
}
