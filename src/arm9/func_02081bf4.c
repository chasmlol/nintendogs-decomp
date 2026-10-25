#include "ctx.h"

extern void func_02081c70(u8 *p);
extern void func_02081d34(u8 *p);

typedef struct { u32 lo:21; u32 a:1; u32 b:1; u32 hi:9; } BF;

void func_02081bf4(u8 *param_1)
{
  u8 *x;
  BF **y;
  BF *z;
  x = *(u8 **)(param_1 + 0x34);
  y = *(BF ***)(x + 0x18);
  z = *y;
  if (z->a != 0) {
    func_02081c70(param_1);
    if (z->b == 0) {
      func_02081d34(param_1);
    }
    return;
  }
  if (z->b == 0) {
    func_02081d34(param_1);
  }
  func_02081c70(param_1);
}
