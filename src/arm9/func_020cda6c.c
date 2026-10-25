#include "ctx.h"

extern u32 data_02126728;

extern void func_02067e34(s32 *a, s32 *b, s32 *c);
extern void func_02067d04(s32 *a, s32 *b, s32 *c);
extern void func_02006a30(s32 *a, s32 *b);

#define LEN2(v) ((s64)(v)[0] * (v)[0] + (s64)(v)[1] * (v)[1] + (s64)(v)[2] * (v)[2])

void func_020cda6c(s32 *param_1, s32 *param_2, s32 *param_3, s32 *param_4, s32 *param_5)
{
  s32 local_28[3];
  s64 thr;
  local_28[0] = 0;
  local_28[1] = 0x1000;
  local_28[2] = 0;
  func_02067e34(param_5, param_4, param_3);
  thr = *(s64 *)&data_02126728;
  if (!(LEN2(param_3) < thr)) {
    func_02006a30(param_3, param_3);
  }
  func_02067d04(local_28, param_3, param_1);
  if (!(LEN2(param_1) < thr)) {
    func_02006a30(param_1, param_1);
  }
  func_02067d04(param_3, param_1, param_2);
  if (!(LEN2(param_2) < thr)) {
    func_02006a30(param_2, param_2);
  }
}
