#include "ctx.h"

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 x);
extern void func_0207f554(u8 *p);
extern u64 func_0205e270(u32 a, u32 b);
extern void func_0207f4e0(u8 *p);

u32 func_0207fbfc(u8 *param_1, u32 param_2, u32 param_3, s32 param_4)
{
  u32 r4;
  u32 uVar1;
  s32 iVar2;
  u32 r7;
  u64 v;
  r4 = func_02080b08();
  uVar1 = *(u32 *)(param_1 + 8);
  iVar2 = *(s32 *)(param_1 + 16);
  r7 = param_3;
  if ((s32)uVar1 <= iVar2) {
    r7 = r7 & 1;
    do {
      if (r7 == 0) {
        func_02080b1c(r4);
        return 0;
      }
      func_0207f554(param_1);
      uVar1 = *(u32 *)(param_1 + 8);
    } while ((s32)uVar1 <= *(s32 *)(param_1 + 16));
  }
  v = func_0205e270(*(u32 *)(param_1 + 12) + uVar1 - 1, uVar1);
  *(u32 *)(param_1 + 12) = (u32)(v >> 32);
  (*(u32 **)(param_1 + 4))[*(u32 *)(param_1 + 12)] = param_2;
  *(s32 *)(param_1 + 16) = *(s32 *)(param_1 + 16) + 1;
  func_0207f4e0(param_1 + 2);
  func_02080b1c(r4);
  return 1;
}
