#include "ctx.h"

extern void func_020bd858(int p);
extern void func_020bd868(int p);
extern void func_0209ceb4(int p);
extern void func_020bf1ec(int p);
extern void func_02067d04(void *a, void *b, void *c);
extern void func_02006a30(void *a, void *b);

void func_020dadd0(int param_1)
{
  s32 iVar1;
  s32 iVar2;
  u32 local_30[3];
  u32 local_24[3];
  u32 local_18[3];

  switch (*(s16 *)(param_1 + 0x90)) {
  case 0:
    func_020bd858(param_1);
    return;
  case 2:
    func_020bd868(param_1);
    iVar1 = *(s32 *)(param_1 + 0x7c);
    *(u32 *)(*(s32 *)(param_1 + 0x74) + 0x20) = 0;
    *(u32 *)(iVar1 + 0xc) = 0;
    return;
  case 3:
    iVar2 = *(s32 *)(param_1 + 0x214);
    *(u32 *)(param_1 + 0xa8) = 0;
    iVar1 = *(s32 *)(param_1 + 0x7c);
    *(u32 *)(*(s32 *)(param_1 + 0x74) + 0x20) = 0x1000;
    *(u32 *)(iVar1 + 0xc) = 0x1000;
    *(u32 *)(iVar2 + 4) = 0;
    func_0209ceb4(param_1 + 400);
    return;
  case 1:
    {
      u32 a3 = *(u32 *)(param_1 + 0xd0);
      u32 a2 = *(u32 *)(param_1 + 0xcc);
      u32 a1 = *(u32 *)(param_1 + 0xc8);
      local_30[0] = a1;
      local_30[1] = a2;
      local_30[2] = a3;
      a3 = *(u32 *)(param_1 + 0xdc);
      a2 = *(u32 *)(param_1 + 0xd8);
      a1 = *(u32 *)(param_1 + 0xd4);
      local_24[0] = a1;
      local_24[1] = a2;
      local_24[2] = a3;
    }
    func_02067d04(local_30, local_24, local_18);
    func_02006a30(local_30, local_30);
    func_02006a30(local_18, local_18);
    func_02067d04(local_18, local_30, local_24);
    *(u32 *)(param_1 + 0xc8) = local_30[0];
    *(u32 *)(param_1 + 0xcc) = local_30[1];
    *(u32 *)(param_1 + 0xd0) = local_30[2];
    *(u32 *)(param_1 + 0xd4) = local_24[0];
    *(u32 *)(param_1 + 0xd8) = local_24[1];
    *(u32 *)(param_1 + 0xdc) = local_24[2];
    *(u32 *)(param_1 + 0xe0) = local_18[0];
    *(u32 *)(param_1 + 0xe4) = local_18[1];
    *(u32 *)(param_1 + 0xe8) = local_18[2];
    return;
  case 4:
    func_020bf1ec(param_1);
    return;
  case 5:
  case 6:
  case 7:
  case 8:
  default:
    return;
  }
}
