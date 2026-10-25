#include "ctx.h"

typedef struct {
  u32 flag;
  u32 a;
  u32 b;
  u32 pad;
  u32 c;
  u32 d;
} G;

extern G data_0214e6c0;
extern u32 func_02080b08(void);
extern void func_02080b1c(u32 a);
extern int func_02001c98(u32 a, u32 b, u32 c, u32 d);

u32 func_0200200c(u32 *param_1, u32 param_2, u32 param_3)
{
  u32 t;
  u8 v;
  int r;
  u32 irq;

  if ((param_1[1] & 0x1f) != 0) {
    return 2;
  }
  if ((param_1[2] & 0x1f) != 0) {
    return 2;
  }
  if (param_1[2] == 0) {
    return 2;
  }
  if (param_1[3] < 0x400) {
    return 2;
  }
  switch (param_1[0]) {
  case 0:
    t = 0;
    break;
  case 1:
    t = 1;
    break;
  case 2:
    t = 2;
    break;
  case 3:
    t = 3;
    break;
  case 4:
    t = 5;
    break;
  case 5:
    t = 7;
    break;
  default:
    return 2;
  }
  {
    u32 vt;
    if (param_1[4] != 0) {
      vt = (t | 16) & 255;
    } else {
      vt = t & 255;
    }
    v = (u8)vt;
  }
  irq = func_02080b08();
  if (data_0214e6c0.flag != 0) {
    func_02080b1c(irq);
    return 1;
  }
  data_0214e6c0.flag = 1;
  func_02080b1c(irq);
  data_0214e6c0.a = param_2;
  data_0214e6c0.b = param_3;
  data_0214e6c0.c = param_1[5];
  data_0214e6c0.d = param_1[6];
  r = func_02001c98(param_1[1], param_1[2], param_1[3], v);
  return (r != 0) ? 0 : 3;
}
