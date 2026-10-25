#include "ctx.h"

extern u32 data_0213e730[];

extern void func_020776d4(u32 a, void *b, u32 c);

#define FX_Mul(a, b) ((s32)(((s64)(s32)(a) * (s64)(s32)(b)) >> 12))

void func_0207b67c(s32 *param_1)
{
  s32 A[20];
  void (*fn)(s32 *, s32 *);
  s32 three = 3;
  s32 two = 2;
  s32 zero = 0;
  s32 big = 4096;
  if (param_1[0] & 8) A[0] = 0x00101610; else A[0] = 0x00101810;
  A[1] = three;
  A[18] = two;
  A[16] = zero;
  A[17] = big;
  A[13] = zero;
  A[12] = zero;
  A[11] = zero;
  A[10] = zero;
  A[9] = zero;
  A[8] = zero;
  A[5] = zero;
  A[4] = zero;
  fn = (void (*)(s32 *, s32 *))data_0213e730[param_1[0] & 7];
  fn(&A[2], param_1);
  if (param_1[12] != 0x1000) {
    A[2] = FX_Mul(param_1[12], A[2]);
    A[3] = FX_Mul(param_1[12], A[3]);
    A[14] = FX_Mul(param_1[12], A[14]);
  }
  if (param_1[13] != 0x1000) {
    A[6] = FX_Mul(param_1[13], A[6]);
    A[7] = FX_Mul(param_1[13], A[7]);
    A[15] = FX_Mul(param_1[13], A[15]);
  }
  func_020776d4(A[0], (void *)((u32)A + 4), 18);
}
