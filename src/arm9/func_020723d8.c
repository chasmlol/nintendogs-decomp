#include "ctx.h"

extern void func_02072448(void *p, u32 a, u32 b);
extern void func_020896f4(void *p, void *q);
extern void func_0208ade4(void *p);

void func_020723d8(u8 *p1, u32 p2, u32 p3, u32 p4)
{
  func_02072448(p1, p3, p4);
  func_020896f4(p1, p1 + p2);
  func_0208ade4(p1);
}
