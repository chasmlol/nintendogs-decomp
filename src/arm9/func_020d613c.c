#include "ctx.h"

extern u32 data_021594ec;
extern u16 data_021594dc;

extern u32 func_02080b08(void);
extern void func_02080b1c(u32 x);
extern s32 func_02065324(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i, u32 j, u32 k);

u32 func_020d613c(u32 param_1, u32 param_2, u32 param_3, u32 param_4, u16 param_5, u16 param_6, u16 *param_7)
{
  u32 r4;
  s32 iVar1;
  r4 = func_02080b08();
  if (data_021594ec == 1 || data_021594dc == 1) {
    *param_7 = 23;
    return 0;
  }
  iVar1 = func_02065324(param_1, param_2, param_3, param_4, param_5, param_6, 0, 0, 0, 0, 0);
  *param_7 = (u16)iVar1;
  if (*param_7 == 2) {
    data_021594ec = 1;
    func_02080b1c(r4);
    return 1;
  }
  func_02080b1c(r4);
  return 0;
}
