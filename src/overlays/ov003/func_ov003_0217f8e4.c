#include "ctx.h"

extern u32 data_0214f464;
extern int func_ov003_0217fe80(int a, s16 b, int c);
extern int func_02029648(int a);
extern void func_0203e908(int a, s16 b);

void func_ov003_0217f8e4(int param_1)
{
  u32 v;
  u16 k;

  if (func_ov003_0217fe80(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 5), 1) != 0) {
    return;
  }
  if (func_02029648(param_1) != 0) {
    return;
  }
  v = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  *(u32 *)*(u32 *)&data_0214f464 = v;
  k = (u16)(((u32)(u16)v * 50) >> 16);
  switch (k) {
  case 0:
    func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x213));
    return;
  case 1:
    func_0203e908(param_1, (s16)(*(s32 *)(param_1 + 0x484) + 0x21e));
    return;
  }
}
