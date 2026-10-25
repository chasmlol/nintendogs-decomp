#include "ctx.h"

extern u32 data_0215216c;

extern void func_0207161c(u32 a, u32 b);
extern void func_0206c7f0(u32 a, u8 *p, u32 b);
extern void func_0208010c(u8 *p, u32 n);
extern u32 func_020711e4(u32 a, u8 *p, u8 *q, u32 h, u32 p3, u32 z1, u32 z2, u32 one, u32 p4,
                         u32 p5, u32 z3, u32 c127, u32 z4, u32 z5, u32 z6);

u32 func_0207167c(u8 *param_1, u32 param_2, u32 param_3, u32 param_4, u32 param_5)
{
  vu32 zero;
  func_0207161c(0, param_2);
  if (data_0215216c != 0) {
    return 0;
  }
  zero = 0;
  func_0206c7f0(zero, param_1, param_2);
  func_0208010c(param_1, param_2);
  return func_020711e4(0, param_1, param_1 + (param_2 >> 1), param_2 >> 1, param_3, 0, 0, 1, param_4,
                       param_5, 0, 0x7f, 0, 0, 0);
}
