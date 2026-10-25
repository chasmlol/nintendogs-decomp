#include "ctx.h"

extern s32 func_020df0d4(void);
extern s32 func_020a18d0(void);
extern u32 func_0209b878(u32 *p);
extern s32 func_0209aa18(void);

u32 func_0209d4b0(u32 *param_1, s32 param_2)
{
  s16 iVar2;
  s32 cnt;
  u32 uVar3;
  u16 uVar1;
  s32 iVar4;
  iVar4 = func_020df0d4();
  if (iVar4 == -11) {
    goto fail;
  }
  if (func_020a18d0() != 0) {
    goto fail;
  }
  cnt = param_1[0];
  iVar2 = 0;
  if (cnt > 0) {
    do {
      if (*(u32 *)((u8 *)param_1 + 0x18 + (s32)iVar2 * 4) != 0 && param_2 == *(s16 *)((u8 *)param_1 + iVar2 * 2 + 0x12)) {
        return 0xffffffff;
      }
      iVar2 = (s16)(iVar2 + 1);
    } while (iVar2 < cnt);
  }
  uVar3 = func_0209b878(param_1);
  if (uVar3 != 0xffffffff) {
    *(s16 *)((u8 *)param_1 + uVar3 * 2 + 0x12) = (s16)param_2;
    uVar1 = (u16)(1 << uVar3);
    *(u16 *)((u8 *)param_1 + 8) = *(u16 *)((u8 *)param_1 + 8) | uVar1;
    *(u32 *)((u8 *)(param_1 + uVar3) + 0x28) = 0;
    *(u16 *)((u8 *)param_1 + 0x26) = *(u16 *)((u8 *)param_1 + 0x26) & ~uVar1;
  }
  if (*(u16 *)((u8 *)param_1 + 36) == 100 && param_2 == 0xe && func_0209aa18() != 0) {
    func_0209d4b0(param_1, 0xf);
  }
  return uVar3;
fail:
  return 0xffffffff;
}
