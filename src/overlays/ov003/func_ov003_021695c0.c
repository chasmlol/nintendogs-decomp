#include "ctx.h"

extern void func_020264f4(void *p);
extern void func_020255a4(void *p);
extern void func_0202db24(void *p, u32 n);
extern void func_0203e2c0(void *p, u32 n);

void func_ov003_021695c0(u8 *p)
{
  *(u16 *)(p + 0x152) = 0x1ed;
  func_020264f4(p);
  func_020255a4(p);
  func_0202db24(p, 8);
  func_0203e2c0(p, 1);
}
