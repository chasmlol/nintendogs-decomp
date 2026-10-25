#include "ctx.h"

extern u32 data_0215942c;

extern s32 func_0202c3e0(u8 *p, u32 n);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, u32 n);
extern s32 func_020385e4(u8 *p);

void func_ov003_02185948(u8 *param_1)
{
  if (func_0202c3e0(param_1, 1) != 0) {
    return;
  }
  if (func_0203567c(param_1) == 0) {
    return;
  }
  if (**(u16 **)&data_0215942c == 1 || **(u16 **)&data_0215942c == 4) {
    func_0203e908(param_1, 0x3ab);
    return;
  }
  switch (func_020385e4(param_1)) {
  case 0:
    func_0203e908(param_1, 0x3ab);
    return;
  case 1:
    func_0203e908(param_1, 0x3ad);
    return;
  case 2:
    func_0203e908(param_1, 0x3ae);
    return;
  case 3:
    func_0203e908(param_1, 0x3af);
  }
  return;
}
