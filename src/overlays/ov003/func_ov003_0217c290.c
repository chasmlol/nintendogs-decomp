#include "ctx.h"

typedef struct {
  u32 w[3];
} T12;

extern u32 data_02159444;

extern void func_0203e908(u8 *p, u32 n);
extern u32 func_020385e4(u8 *p);
extern u32 func_02029504(u8 *p);
extern u32 func_02022e14(u8 *p, u32 n);

u32 func_ov003_0217c290(u8 *param_1)
{
  u32 v;
  u32 f;
  *(T12 *)(param_1 + 948) = *(T12 *)(*(u8 **)(*(u8 **)&data_02159444 + 0x1c) + 48);
  v = *(u16 *)(param_1 + 252);
  if (v <= 80) {
    return v;
  }
  switch (func_020385e4(param_1)) {
  case 0:
    func_0203e908(param_1, 0x30f);
    break;
  case 1:
    func_0203e908(param_1, 0x311);
    break;
  case 2:
    func_0203e908(param_1, 0x312);
    break;
  case 3:
    func_0203e908(param_1, 0x313);
  }
  if (*(s16 *)(param_1 + 240) == 1) {
    return func_02029504(param_1);
  }
  f = func_02022e14(param_1, 1);
  if (f == 0) {
    return f;
  }
  return func_02029504(param_1);
}
