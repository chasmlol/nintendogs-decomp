#include "ctx.h"

extern s32 func_02028124(void *p);
extern void func_0202508c(void *p, u32 a, u32 b, s32 c);
extern s32 func_0203567c(void *p);
extern void func_0202fd7c(void *p);

#define FX_Mul(a, b) ((s32)(((s64)(a) * (b) + 0x800) >> 12))

void func_0200e91c(u8 *p)
{
  s32 x;
  s32 r;
  x = func_02028124(p);
  func_0202508c(p, 9, 17, FX_Mul(x, -630));
  *(s16 *)(p + 0x152) = *(s16 *)(p + 0x148);
  r = func_0203567c(p);
  if (r != 0) {
    *(u16 *)(p + 0x152) = 0;
    func_0202fd7c(p);
  }
}
