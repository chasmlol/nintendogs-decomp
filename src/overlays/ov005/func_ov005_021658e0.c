#include "ctx.h"

extern void func_ov005_02165c94(void *p);
extern void func_ov005_02165938(void *p);

void func_ov005_021658e0(u8 *p)
{
  s16 s;
  s = *(s16 *)(p + 0x90);
  if (s == 0) {
    return;
  }
  switch (s) {
  case 2:
    func_ov005_02165c94(p);
    return;
  case 3:
    func_ov005_02165938(p);
    return;
  default:
    return;
  }
}
