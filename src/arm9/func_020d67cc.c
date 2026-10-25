#include "ctx.h"

extern u32 data_021594ec;
extern u16 data_021594dc;
extern u32 data_02159620;

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 x);
extern s32 func_02064ff0(u32 a, u32 b, u32 c);

u32 func_020d67cc(u32 param_1, u32 param_2, u16 *param_3)
{
  u32 r4;
  s32 iVar1;
  r4 = func_02080b08();
  if (data_021594ec == 1 || data_021594dc == 1) {
    *param_3 = 23;
    return 0;
  }
  iVar1 = func_02064ff0((u32)&data_02159620, param_1, param_2);
  *param_3 = (u16)iVar1;
  if (*param_3 == 2) {
    data_021594ec = 1;
    func_02080b1c(r4);
    return 1;
  }
  func_02080b1c(r4);
  return 0;
}
