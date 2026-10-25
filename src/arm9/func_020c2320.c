#include "ctx.h"
extern s32 func_020d9024(s32 a);
extern u8 *func_01ffdb08(s32 a);
extern s32 func_02034208(u8 *p);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c607c(u8 *p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020c6300(u8 *p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020c2d64(void);
extern void func_020c2cb4(void);
extern void func_020c2c24(void);
extern void func_020c2b4c(void);
void func_020c2320(u8 *param_1)
{
    s32 iVar1;
    u8 *q;
    iVar1 = func_020d9024(-1);
    q = func_01ffdb08(iVar1);
    if (q != NULL && (iVar1 = func_02034208(q), iVar1 != 0)) {
        iVar1 = (s32)func_020c8164((u32)*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
        func_020c607c(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32)func_020c2d64, 0, (u32)func_020c2cb4, (u32)func_020c2c24, (u32)func_020c2b4c);
        return;
    }
    iVar1 = (s32)func_020c8164((u32)*(u16 *)(param_1 + 0xa0), *(u32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32)func_020c2d64, 0, (u32)func_020c2cb4, (u32)func_020c2c24, (u32)func_020c2b4c);
}
