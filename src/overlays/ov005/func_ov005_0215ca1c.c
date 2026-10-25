#include "ctx.h"

extern u32 data_02152cd8;

extern s32 func_02009dfc(u32 *a, void *b, void *c);
extern void func_0203e908(void *p, s16 n);
extern void func_ov005_0215caf8(void *p, void *q, u32 n);

void func_ov005_0215ca1c(u8 *p)
{
  u32 loc[4];
  s32 r;
  if (*(u16 *)(p + 252) > 100) {
    loc[0] = *(u32 *)((u8 *)&data_02152cd8 + 0x54);
    loc[1] = *(u32 *)((u8 *)&data_02152cd8 + 0x60);
    loc[2] = *(u32 *)((u8 *)&data_02152cd8 + 0x6c);
    r = func_02009dfc(loc, p + 420, p + 396);
    switch (r) {
    case 1:
      func_0203e908(p, 0x44b);
      break;
    case 2:
      func_0203e908(p, 0x44c);
      break;
    }
  }
  func_ov005_0215caf8(p, p + 840, 0x14d2);
}
