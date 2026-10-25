#include "ctx.h"

extern u32 *func_020719dc(u32 a);
extern u32 func_02071778(u32 a);
extern u8 *func_0207357c(u32 a, u32 b);
extern u32 func_02072d4c(void *p, u32 a, u32 b, u32 c, void *d, u32 e, u32 f, u32 g);

u32 func_02072fe4(void *param_1, u32 param_2, u32 param_3)
{
  u32 *puVar1;
  u32 iVar2;
  u8 *piVar3;
  puVar1 = func_020719dc(param_2);
  if (puVar1 == 0) {
    return 0;
  }
  iVar2 = func_02071778(*puVar1);
  if (iVar2 == 0) {
    return 0;
  }
  piVar3 = func_0207357c(iVar2, param_3);
  if (piVar3 == 0) {
    return 0;
  }
  return func_02072d4c(param_1, piVar3[9], *(u16 *)(piVar3 + 4), piVar3[8], piVar3, iVar2, param_2, param_3);
}
