#include "ctx.h"

extern u32 data_02151c44;

extern void func_02070b30(u32 *p);
extern u32 *func_0207ceb0(u8 *p, u32 n);
extern void func_0207024c(u32 *p);
extern u32 *func_020701d0(u32 n);
extern void func_020702e8(u8 *p, u32 *q);

u32 *func_020704fc(u32 *param_1, s32 param_2, s32 param_3)
{
  u32 *puVar1;
  u8 *piVar2;
  piVar2 = (u8 *)((u8 *)&data_02151c44 + param_2 * 0x24);
  if (*param_1 != 0) {
    func_02070b30(param_1);
  }
  if (*(u16 *)(piVar2 + 8) >= *(u32 *)(piVar2 + 0x18)) {
    puVar1 = func_0207ceb0(piVar2, 0);
    if (puVar1 == 0) {
      return 0;
    }
    if (param_3 < *(u8 *)((u8 *)puVar1 + 0x3d)) {
      return 0;
    }
    func_0207024c(puVar1);
  }
  puVar1 = func_020701d0(param_3);
  if (puVar1 != 0) {
    func_020702e8(piVar2, puVar1);
    *puVar1 = (u32)param_1;
    *param_1 = (u32)puVar1;
    return puVar1;
  }
  return 0;
}
