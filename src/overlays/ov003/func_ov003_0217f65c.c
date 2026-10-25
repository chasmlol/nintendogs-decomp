#include "ctx.h"

extern u32 data_0214f464;

extern s32 func_ov003_0217fe80(u8 *p, s32 a, s32 b);
extern s32 func_0203579c(u8 *p, s32 a);
extern void func_0203e908(u8 *p, s32 a);

static inline u32 Step(void)
{
  u32 *pp;
  s32 v;

  pp = *(u32 **)&data_0214f464;
  v = *(s32 *)pp * 0x10dcd + 1;
  *(s32 *)pp = v;
  return (u16)((u32)(v << 16) >> 31);
}

void func_ov003_0217f65c(u8 *param_1, s32 param_2)
{
  s32 bit;

  if (func_ov003_0217fe80(param_1, param_2, 0) != 0) {
    return;
  }
  if (*(s32 *)(param_1 + 0x484) == 1 && func_0203579c(param_1, 0x10) != 0) {
    bit = Step();
    if (bit != 0 || *(s16 *)(param_1 + 0xf0) == 4) {
      func_0203e908(param_1, 0x212);
      return;
    }
  }
  if (*(s32 *)(param_1 + 0x484) == 1 && func_0203579c(param_1, 0x2e) != 0) {
    if (Step() != 0) {
      func_0203e908(param_1, 0x20e);
      return;
    }
  }
  if (*(s32 *)(param_1 + 0x484) == 0 && func_0203579c(param_1, 0x41) != 0) {
    bit = Step();
    if (bit != 0 || *(s16 *)(param_1 + 0xf0) == 4) {
      func_0203e908(param_1, 0x211);
      return;
    }
  }
  if (*(s32 *)(param_1 + 0x484) != 0) {
    return;
  }
  if (func_0203579c(param_1, 0x5e) != 0) {
    if (Step() != 0) {
      func_0203e908(param_1, 0x20d);
    }
  }
}
