#include "ctx.h"
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020e8868(void);
extern void func_020e8834(void);
extern void func_020e8818(void);
extern void func_020e880c(void);
void func_020e84a4(u8 *param_1)
{
    u32 iVar1;
    iVar1 = func_020c8164((u32)*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108,
                  iVar1, (u32)func_020e8868, 0, (u32)func_020e8834, (u32)func_020e8818, (u32)func_020e880c);
}
