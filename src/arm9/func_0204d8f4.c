#include "ctx.h"

extern u32 data_0214f464;
extern void func_02027654(s32 a, void *b);
extern void func_01ff832c(s32 a, void *b, void *c, void *d);

void func_0204d8f4(u8 *param_1, s32 param_2)
{
  s32 iVar2;
  u32 uVar3;
  u32 *puVar1;

  if (param_2 == 0) {
    return;
  }
  switch (*(s32 *)(param_1 + 0x464)) {
  case 0:
    func_02027654(param_2, param_1 + 948);
    func_01ff832c(0x6000, param_1 + 396, param_1 + 948, param_1 + 948);
    break;
  case 1:
    func_02027654(param_2, param_1 + 948);
    func_01ff832c(-0x6000, param_1 + 396, param_1 + 948, param_1 + 948);
    break;
  case 2:
    func_02027654(param_2, param_1 + 948);
    func_01ff832c(-0x3000, param_1 + 408, param_1 + 948, param_1 + 948);
    func_01ff832c(0x6000, param_1 + 396, param_1 + 948, param_1 + 948);
    break;
  case 3:
    func_02027654(param_2, param_1 + 948);
    func_01ff832c(-0x3000, param_1 + 408, param_1 + 948, param_1 + 948);
    func_01ff832c(-0x6000, param_1 + 396, param_1 + 948, param_1 + 948);
    break;
  }
  iVar2 = 0x10dcd;
  puVar1 = *(u32 **)&data_0214f464;
  uVar3 = *puVar1 * iVar2 + 1;
  *puVar1 = uVar3;
  if ((u16)(((u32)(u16)uVar3 * 60) >> 16) != 0) {
    return;
  }
  iVar2 = *(s32 *)*(u32 **)&data_0214f464 * iVar2 + 1;
  *(s32 *)*(u32 **)&data_0214f464 = iVar2;
  *(u32 *)(param_1 + 0x464) = (u16)(((u32)(iVar2 << 16)) >> 30);
}
