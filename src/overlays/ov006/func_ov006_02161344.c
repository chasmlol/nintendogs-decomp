#include "ctx.h"

extern u32 data_02159424;
extern u32 data_0214f464;

extern void func_0203e908(u8 *p, u32 n);
extern u32 func_02027e4c(u8 *p, u32 n);
extern u32 func_020387c0(u8 *p, u32 n);

u32 func_ov006_02161344(u8 *param_1)
{
  s32 iVar1;
  u32 uVar2;
  if (*(s16 *)(*(u8 **)&data_02159424) != 0 &&
      *(s8 *)(param_1 + 0x89) >= *(s16 *)(*(u8 **)&data_0214f464 + 0x32)) {
    func_0203e908(param_1, 0x4d4);
    return 1;
  }
  iVar1 = func_02027e4c(param_1, 0);
  uVar2 = func_020387c0(param_1, iVar1);
  switch (uVar2) {
  case 0:
    func_0203e908(param_1, 0x4dd);
    return 1;
  case 1:
    func_0203e908(param_1, 0x4de);
    return 1;
  case 2:
    func_0203e908(param_1, 0x4df);
    return 1;
  case 3:
    func_0203e908(param_1, 0x4e0);
    return 1;
  case 4:
    func_0203e908(param_1, 0x4e1);
    return 1;
  case 5:
    func_0203e908(param_1, 0x4e2);
    return 1;
  default:
    return 0;
  }
}
