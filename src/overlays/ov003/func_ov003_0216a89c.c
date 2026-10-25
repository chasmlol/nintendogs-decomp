#include "ctx.h"

extern void func_020264f4(void *p);
extern void func_020255a4(void *p);
extern void func_02023654(void *p, u32 a, u32 b);
extern void func_0202db24(void *p, u32 n);

void func_ov003_0216a89c(u8 *p)
{
  *(u16 *)(p + 0x152) = 0x1d2;
  func_020264f4(p);
  func_020255a4(p);
  func_02023654(p, 16, 3);
  func_0202db24(p, 8);
}
