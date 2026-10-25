#include "ctx.h"

typedef struct { u32 w[3]; } T12;

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

extern s32 func_0203579c(u8 *p, s32 a);
extern s32 func_02036578(u8 *p);
extern u32 func_02028130(u8 *p);
extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02027668(s32 a, s32 *b);
extern void func_0202707c(s32 a, u32 b);
extern s32 func_020469d0(u8 *p, s32 a, s32 b);
extern void func_0203e908(u8 *p, u32 n);

void func_020460c4(u8 *param_1, s32 param_2, s32 param_3, s32 *param_4, s32 param_5, s16 param_6)
{
  s32 L[6];
  s32 iVar5;
  u32 uVar6;
  s32 fx;
  s32 sum;
  iVar5 = func_0203579c(param_1, param_3);
  if (iVar5 != 0) {
    iVar5 = func_02036578(param_1);
    if (iVar5 != 0) {
      uVar6 = func_02028130((u8 *)iVar5);
      fx = FX_Mul((s32)uVar6, 0x233c);
      func_02067e34((s32 *)(iVar5 + 0x928), param_4, L);
      sum = FX_Mul(L[2], L[2]) + (FX_Mul(L[0], L[0]) + FX_Mul(L[1], L[1]));
      if (sum < FX_Mul(fx, fx)) {
        func_02027668(iVar5, L + 3);
        func_02067e34(L + 3, (s32 *)(param_1 + 0x2a0), L + 3);
        L[3] = FX_Mul(L[3], 0x400);
        L[4] = FX_Mul(L[4], 0x400);
        L[5] = FX_Mul(L[5], 0x400);
        *(T12 *)(iVar5 + 0x260) = *(T12 *)(L + 3);
        func_0202707c(iVar5, 2);
      }
    }
  }
  iVar5 = func_020469d0(param_1, param_2, 0);
  if (iVar5 == 0) {
    if (param_5 != 0) {
      func_0203e908(param_1, param_6);
      return;
    }
    return;
  }
  return;
}
