#include "ctx.h"

extern s32 func_01ffdb08(u32 a);
extern s32 func_020c81d4(s32 a, void *b, u32 c, u32 *d);

s32 func_020d2d30(s32 *param_1, u32 param_2, u32 param_3)
{
  int iVar2;
  s32 iVar3;
  s32 iVar1;
  u32 aiStack_30[3];
  s32 iVar4;
  u32 iVar5;

  iVar5 = 0;
  iVar1 = func_01ffdb08(param_2);
  if (0 == iVar1) {
    return (u16)iVar5;
  }
  iVar3 = iVar5;
  if (param_1[0] > 0) {
    iVar4 = iVar3;
    do {
      aiStack_30[0] = 0;
      aiStack_30[1] = 0;
      aiStack_30[2] = 0;
      iVar2 = func_020c81d4(iVar1, (void *)(param_1[1] + iVar4), param_3, aiStack_30);
      if (0 != iVar2) {
        iVar5 = 1;
      }
      iVar4 += 12;
      iVar3 += 1;
    } while (param_1[0] > iVar3);
  }
  return iVar5;
}
