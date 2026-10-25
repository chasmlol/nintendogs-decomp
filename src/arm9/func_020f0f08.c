#include "ctx.h"

void func_020c8ae8(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_020f0fd0(u8 *p);
s32 func_020c8164(u32 a, s32 b);
void func_020c6300(u8 *p, s32 a, u8 *b, u8 *c, s32 d, void *e, s32 f, void *g, void *h, void *i);
void func_020f10f8(void);
void func_020f10c4(void);
void func_020f10a8(void);
void func_020f109c(void);

void func_020f0f08(u8 *param_1)
{
    u32 *P;
    u32 *Q;
    s32 iVar1;

    P = *(u32 **)(param_1 + 0x214);
    Q = (u32 *)*P;
    func_020c8ae8(param_1, Q[18], Q[19], Q[20], Q[21], Q[22], 4);
    func_020f0fd0(param_1);
    iVar1 = func_020c8164(*(u16 *)(param_1 + 0xa0), *(s32 *)(param_1 + 0xf8));
    func_020c6300(param_1, *(s32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1,
                  (void *)func_020f10f8, 0, (void *)func_020f10c4, (void *)func_020f10a8,
                  (void *)func_020f109c);
}
