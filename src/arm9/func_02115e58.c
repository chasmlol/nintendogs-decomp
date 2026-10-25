#include "ctx.h"

extern u32 data_0215be48;
extern void func_02115f4c(s32 a);
extern void func_02117ac8(u8 *p, s32 a);
extern void func_02116c4c(u8 *p);
extern void func_02112798(s32 a, s32 b, s32 c);

void func_02115e58(u8 *param_1)
{
  u8 *g;

  func_02115f4c(12);
  func_02117ac8(param_1 + 564, 0);
  func_02117ac8(param_1 + 596, 0);
  func_02117ac8(param_1 + 628, 0);
  func_02117ac8(param_1 + 660, 0);
  func_02117ac8(param_1 + 692, 0);
  func_02117ac8(param_1 + 724, 0);
  g = *(u8 **)&data_0215be48;
  switch (*(s32 *)(g + 0xa8)) {
  case 0:
    func_02116c4c(param_1);
    return;
  case 4:
    *(s32 *)(g + 0x5034) = 0;
    func_02112798(2, 17, 1);
    return;
  case 14:
    *(s32 *)(g + 0x5034) = 0;
    func_02112798(2, 17, 1);
    return;
  default:
    func_02112798(2, 17, 0);
    return;
  }
}
