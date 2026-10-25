#include "ctx.h"

extern void func_020a0d04(u32 a, u32 b);
extern void func_020a0e04(u32 a);
extern void func_020a0cb0(u32 a, u32 b, u32 c);
extern void func_0209fb38(u32 a, u32 b, u32 c);

void func_0209fe4c(u32 param_1)
{
  switch (param_1) {
  case 0x2d:
    func_020a0d04(7, 0);
    func_020a0d04(6, 0);
    func_020a0e04(13);
    func_020a0cb0(0, 110, 120);
    break;
  case 0x36:
    func_020a0e04(11);
    break;
  }
  func_0209fb38(param_1, 127, 0);
}
