#include "ctx.h"

extern u8 *func_020641b8(void);
extern s32 func_02064098(s32 a, s32 b);
extern void func_0206431c(u32 a, u32 b);
extern s32 func_020641c8(u32 a, u32 b, u32 c, void *d);

s32 func_020654a4(u32 param_1, u16 param_2, u32 param_3, u32 param_4, u16 param_5)
{
  u8 *iVar1;
  s32 iVar2;
  u16 *puVar5;
  s32 r;

  iVar1 = func_020641b8();
  iVar2 = func_02064098(1, 2);
  if (iVar2 != 0) {
    return iVar2;
  }
  func_0206431c(30, param_1);
  puVar5 = *(u16 **)(iVar1 + 0xc);
  puVar5[0] = 30;
  puVar5[1] = param_2;
  puVar5[2] = (u16)param_3;
  puVar5[3] = (u16)param_4;
  puVar5[4] = param_5;
  r = func_020641c8(30, 0, param_5, puVar5);
  if (r == 0) {
    r = 2;
  }
  return r;
}
