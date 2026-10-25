#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 n);
extern void *func_020038b8(void *a, u32 n);
extern void func_020eb4d0(void);
extern void func_020f33d0(void);
extern void func_020eb610(void);

void func_020f38ac(u8 *param_1, u8 *param_2)
{
    func_020bdd1c(param_1, 3);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020eb4d0;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020f33d0;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020eb610;
    *(u32 *)(param_1 + 0x214) = (u32)func_020038b8(param_2, 2);
    *(u32 *)(param_1 + 0xf8) = 0x802;
    *(u32 *)(param_1 + 0x120) = 0x802;
    *(u32 *)(param_1 + 0x128) = 0x802;
    *(u32 *)(param_1 + 0x124) = 0x333;
    *(u32 *)(param_1 + 0x12c) = 1;
    *(u32 *)(param_1 + 0xac) = 700;
    *(u16 *)(param_1 + 0x20) = *(u16 *)(param_1 + 0x20) | 8;
    *(u16 *)(param_1 + 0x84) = 0;
    *(u16 *)(param_1 + 0x86) = 0;
}
