#include "ctx.h"

extern void func_020bdd1c(u8 *p, u32 n);
extern void *func_020038b8(void *a, u32 n);
extern u32 func_020f1300(u32 a);
extern void func_020f125c(u32 a, u8 *p);
extern void func_020e8d3c(void);
extern void func_020e8a34(void);
extern void func_020e8e90(void);

void func_020e8e94(u8 *param_1, void *param_2)
{
    u32 *piVar4;

    func_020bdd1c(param_1, 59);
    *(u32 *)(param_1 + 0x1f4) = (u32)func_020e8d3c;
    *(u32 *)(param_1 + 0x1f8) = (u32)func_020e8a34;
    *(u32 *)(param_1 + 0x1f0) = (u32)func_020e8e90;
    *(u32 *)(param_1 + 0x214) = (u32)func_020038b8(param_2, 4);
    piVar4 = *(u32 **)(param_1 + 0x214);
    *piVar4 = func_020f1300(26);
    func_020f125c(26, param_1);
    *(u16 *)(param_1 + 166) = 2;
}
