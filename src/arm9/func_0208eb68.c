#include "ctx.h"

extern s16 data_02126868[];
extern void func_02067e34(void *a, void *b, void *c);
extern void func_02006a30(void *a, void *b);
extern void func_02067d04(void *a, void *b, void *c);
extern void func_0208ece0(int p);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_0208eb68(int param_1)
{
  u32 uVar5;
  s32 a1;
  s32 a2;
  s32 v;

  a1 = (*(u16 *)(param_1 + 0x80) >> 4) * 2;
  a2 = (*(u16 *)(param_1 + 0x82) >> 4) * 2;
  v = *(s32 *)(param_1 + 0x7c);
  uVar5 = FX(v, data_02126868[a1 + 1]);
  *(u32 *)(param_1 + 0x30) = *(u32 *)(param_1 + 0x3c) + FX(uVar5, data_02126868[a2]);
  *(u32 *)(param_1 + 0x34) = *(u32 *)(param_1 + 0x40) + FX(v, data_02126868[a1]);
  *(u32 *)(param_1 + 0x38) = *(u32 *)(param_1 + 0x44) + FX(uVar5, data_02126868[a2 + 1]);
  func_02067e34((void *)(param_1 + 0x3c), (void *)(param_1 + 0x30), (void *)(param_1 + 0x48));
  func_02006a30((void *)(param_1 + 0x48), (void *)(param_1 + 0x48));
  func_02067d04((void *)(param_1 + 0x54), (void *)(param_1 + 0x48), (void *)(param_1 + 0x60));
  func_02006a30((void *)(param_1 + 0x60), (void *)(param_1 + 0x60));
  func_0208ece0(param_1);
}
