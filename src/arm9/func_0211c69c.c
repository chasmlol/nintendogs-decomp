#include "ctx.h"

extern u8 data_02159060[];
extern u8 data_0215be48[];
extern u8 data_0214f004[];
extern u8 data_02159424[];
extern u32 func_02112320(u32 a, u32 b, u32 c);
extern void func_02112798(u32 a, u32 b, u32 c);
extern void func_02108e24(u32 a);
extern void func_020a1a40(u32 a);
extern void func_02107d9c(u32 a);
extern void func_02097b68(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);

void func_0211c69c(u8 *param_1)
{
  s32 x;
  u16 bv;
  s16 bVar1;
  s16 bVar2;
  s32 iVar4;
  switch (*(s32 *)(0xc + param_1)) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    bv = 1;
    x = *(s16 *)(*(u8 **)data_02159060 + 0x6c);
    if (x != 1) {
      if (x != 8) {
        bv = 0;
      }
    }
    if (bv != 0) {
      return;
    }
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x48b8) == 1) {
      *(s32 *)(param_1 + 0xc) = 5;
      return;
    }
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x4860) == 0) {
      return;
    }
    bVar1 = data_0214f004[1];
    bVar2 = data_0214f004[0];
    iVar4 = func_02112320(2, bVar2, bVar1);
    if ((*(u16 *)(2 + data_0214f004) & 2) == 0) {
      return;
    }
    if (iVar4 == 0) {
      return;
    }
    if (1 != iVar4) {
      return;
    }
    *(u16 *)(0x1c18 + param_1) = bVar2;
    *(u16 *)(param_1 + 0x1c1a) = (u32)bVar1;
    func_02112798(2, 3, 1);
    func_02108e24(0);
    func_020a1a40(0x22);
    *(s32 *)(0xc + param_1) = 3;
    *(s32 *)(0x10 + param_1) = 1;
    return;
  case 3:
    *(s32 *)(4 + param_1) = *(s32 *)(param_1 + 4) + 1;
    if (*(s32 *)(4 + param_1) <= 10) {
      return;
    }
    func_02112798(2, 1, 0);
    func_02112798(2, 3, 0);
    *(s32 *)(param_1 + 4) = 0;
    *(s32 *)(0xc + param_1) = 4;
    return;
  case 4:
    *(s32 *)(param_1 + 4) = *(s32 *)(4 + param_1) + 1;
    if (*(s32 *)(4 + param_1) <= 10) {
      return;
    }
    *(s32 *)(param_1 + 4) = 0;
    if (*(s32 *)(param_1 + 0x10) == 0) {
      func_02107d9c(4);
      func_02097b68();
      return;
    }
    *(s16 *)(*(u8 **)(*(u8 **)data_02159424 + 4) + 10) = -3;
    return;
  case 5:
    if (*(s32 *)(*(u8 **)data_0215be48 + 0x48bc) != 1) {
      return;
    }
    *(s16 *)(*(u8 **)(*(u8 **)data_02159424 + 4) + 10) = -2;
    return;
  case 6:
    if (*(s32 *)(*(u8 **)data_02159060 + 0xa4) == 0) {
      return;
    }
    func_02097b94(8, 0x238c, 1, 0, 1);
    *(s32 *)(0xc + param_1) = 2;
    return;
  }
}
