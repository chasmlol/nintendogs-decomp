#include "ctx.h"

extern void func_020c8ae8(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern void func_020e873c(u8 *p);
extern u32 func_020c8164(u32 a, u32 b);
extern void func_020c6300(u8 *p, u32 a, void *b, void *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020e8868(void);
extern void func_020e8834(void);
extern void func_020e8818(void);
extern void func_020e880c(void);

void func_020e8674(u8 *param_1)
{
  u8 *iVar1;
  s32 r;
  iVar1 = *(u8 **)(*(u8 **)(param_1 + 0x214));
  func_020c8ae8(param_1, *(u32 *)(iVar1 + 0x48), *(u32 *)(iVar1 + 0x4c), *(u32 *)(iVar1 + 0x50),
                *(u32 *)(iVar1 + 0x54), *(u32 *)(iVar1 + 0x58), 4);
  func_020e873c(param_1);
  r = func_020c8164(*(u16 *)(param_1 + 160), *(u32 *)(param_1 + 0xf8));
  func_020c6300(param_1, *(u32 *)(param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, r,
                (u32)func_020e8868, 0, (u32)func_020e8834, (u32)func_020e8818, (u32)func_020e880c);
}
