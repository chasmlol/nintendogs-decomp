#include "ctx.h"

extern void func_020776d4(u32 id, void *p, u32 n);

void func_0207a870(u32 *p)
{
  u32 v;
  v = p[0];
  if ((v & 4) == 0) {
    if ((v & 2) == 0) {
      func_020776d4(25, p + 10, 12);
    } else {
      func_020776d4(28, p + 0x13, 3);
    }
  } else if ((v & 2) == 0) {
    func_020776d4(26, p + 10, 9);
  }
  if ((p[0] & 1) == 0) {
    func_020776d4(27, p + 1, 3);
  }
}
