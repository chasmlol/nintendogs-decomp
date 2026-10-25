#include "ctx.h"

extern void func_020d2b80(void *p);
extern void func_020d29e0(void *p);

void func_020d2978(u8 *p)
{
  switch (*(s16 *)(p + 20)) {
  case 0:
    func_020d2b80(p);
    return;
  case 1:
    func_020d29e0(p);
    return;
  case 2:
    func_020d2b80(p);
    func_020d29e0(p);
    return;
  case 3:
    func_020d29e0(p);
    func_020d2b80(p);
    return;
  }
  return;
}
