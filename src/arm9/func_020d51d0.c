#include "ctx.h"

extern u32 data_021594d0;

extern u8 *func_020d6ccc(void);
extern void func_020d3cb0(void);
extern s32 func_0206519c(void *fn, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);

void func_020d51d0(u32 param_1, u32 param_2)
{
  u8 *o;
  s32 ret;
  o = func_020d6ccc();
  if (param_2 > *(u16 *)(o + 0x34)) {
    return;
  }
  if (*(u32 *)(*(u8 **)&data_021594d0 + 0x34) != 0) {
    *(u32 *)(*(u8 **)&data_021594d0 + 0x34) = 0;
    ret = func_0206519c((void *)func_020d3cb0, 0, param_1, param_2, 0xffff, 5, 2);
    if (ret != 2) {
      *(u32 *)(*(u8 **)&data_021594d0 + 0x34) = 1;
    }
    return;
  }
  return;
}
