#include "ctx.h"

extern u8 data_02159424[];

extern void func_021045fc(u8 *p, u32 n);

void func_0210a2f0(u8 *param_1)
{
  u8 *iVar1;
  iVar1 = param_1 + 0x1c48;
  if (*(u32 *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(u32 *)(param_1 + 0x230) == 0 && *(s16 *)(*(u8 **)(*(u32 *)data_02159424 + 4) + 2) <= 0) {
    if (*(u32 *)(iVar1 + 0xc) == 14) {
      return;
    }
    if (*(u32 *)(iVar1 + 0xc) == 15) {
      return;
    }
    func_021045fc(param_1, 14);
    return;
  }
  switch (*(u32 *)(iVar1 + 0xc)) {
  case 9:
    if (*(u16 *)(*(u8 **)(*(u32 *)data_02159424 + 4) + 2) != 0) {
      *(u32 *)(iVar1 + 0xc) = 13;
      return;
    }
    if (*(u32 *)(param_1 + 0x23c) != 0) {
      return;
    }
    *(u32 *)(param_1 + 0x23c) = 1;
    func_021045fc(param_1, 12);
    return;
  case 13:
    if (*(u16 *)(*(u8 **)(*(u32 *)data_02159424 + 4) + 2) != 0) {
      return;
    }
    func_021045fc(param_1, 14);
    return;
  case 12:
    func_021045fc(param_1, 14);
    return;
  case 10:
    func_021045fc(param_1, 11);
    return;
  case 11:
    *(u32 *)(iVar1 + 0xc) = 0;
    *(u32 *)(param_1 + 0x230) = 0;
    return;
  case 14:
    break;
  default:
    *(u32 *)(iVar1 + 0xc) = 0;
    return;
  }
}
