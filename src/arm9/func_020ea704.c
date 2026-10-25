#include "ctx.h"

extern void func_020c7c24(void *a, void *b, u32 c);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_020ea704(u8 *p, void *param_2)
{
  s32 a, b, u, lim;
  func_020c7c24(p, param_2, 0);
  b = *(s32 *)(p + 0xb8);
  a = *(s32 *)(p + 0xb0);
  if (b <= 0) {
    b = -b;
  }
  if (a <= 0) {
    a = -a;
  }
  lim = 0x666;
  u = lim + (a + b) * 8;
  *(s32 *)(p + 0xb4) = *(s32 *)(p + 0xb4) + FX_Mul(u, 205);
  if (lim < *(s32 *)(p + 0xb4)) {
    *(s32 *)(p + 0xb4) = lim;
  }
}
