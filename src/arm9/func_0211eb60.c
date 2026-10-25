#include "ctx.h"

extern u32 data_0215be48;
extern u32 data_02159060;
extern s32 func_02003a60(void);
extern void func_020a4d98(s32 a);
extern s32 func_020a4d2c(void);

void func_0211eb60(u8 *param_1)
{
  u8 *A;
  u8 *q;

  A = *(u8 **)&data_0215be48;
  q = param_1 + 7360;
  if (*(u16 *)(A + 0x11160) != 0) {
    return;
  }
  if (*(s32 *)(*(u8 **)&data_02159060 + 0xa4) == 0) {
    return;
  }
  if (*(s32 *)(A + 0xb4) == 25) goto c25;
  if (*(s32 *)(A + 0xb4) != 27) goto other;
  if (*(s32 *)(param_1 + 0x930) == 0) goto z27;
  if (func_020a4d2c() == 0) {
    return;
  }
  *(s32 *)(*(u8 **)&data_0215be48 + 0x4868) = 1;
  return;
z27:
  if (func_02003a60() == 0) {
    return;
  }
  func_020a4d98(*(u16 *)(q + 10));
  *(s32 *)(param_1 + 0x930) = 1;
  return;
c25:
  if (func_02003a60() == 0) {
    return;
  }
  if (1) {
    *(s32 *)(*(u8 **)&data_0215be48 + 0x4868) = 1;
  }
  return;
other:
  *(s32 *)(A + 0x4868) = 1;
}
