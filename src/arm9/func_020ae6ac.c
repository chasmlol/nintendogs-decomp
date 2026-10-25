#include "ctx.h"

extern u32 data_02159060;

extern u32 func_020ad77c(u8 *p);
extern u32 func_020ab4c0(u8 *p);
extern u32 func_020ae760(u8 *p);
extern u32 func_02108228(void);
extern u32 func_020ad690(u8 *p);
extern u32 func_020ad8f0(u8 *p);

u32 func_020ae6ac(u8 *param_1)
{
  u32 bVar1;
  u32 v;
  switch (*(s16 *)(param_1 + 0x2e)) {
  case 0:
    bVar1 = func_020ad77c(param_1);
    return bVar1;
  case 1:
    bVar1 = func_020ab4c0(param_1);
    if (bVar1 != 0) {
      return bVar1;
    }
    if (*(s16 *)(param_1 + 0x2a) == 1) {
      v = *(u32 *)(*(u8 **)&data_02159060 + 0xa4);
      if (v == 0) {
        return v;
      }
      *(u16 *)(param_1 + 0x2a) = 0;
      return func_02108228();
    }
    return func_020ae760(param_1);
  case 2:
    break;
  case 3:
    break;
  case 4:
    bVar1 = func_020ad690(param_1);
    if (bVar1 == 0) {
      return bVar1;
    }
    return func_020ad8f0(param_1);
  }
}
