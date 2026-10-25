#include "ctx.h"

extern u32 data_0214f464;
extern s32 func_02022dec(int p, s16 a, u8 b);
extern int func_0203541c(int p);
extern void func_0203e8cc(int p, int a, int b);
extern int func_ov003_02198298(int p);
extern int func_020289d0(int p, int a, int b);
extern int func_0202cd10(int p, int a);
extern void func_0203e908(int p, int a);
extern void func_02022b7c(int p);

void func_02010c28(int param_1)
{
  s32 r4;
  s32 r6;
  s32 iVar2;
  s32 bVar1;
  u32 uVar3;

  func_02022b7c(param_1);
  r4 = (*(u8 *)(param_1 + 0xa4) != 0);
  if (r4 != 0) {
    r4 = (func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6)) != 0);
  }
  r6 = func_0203541c(param_1);
  if (r6 == 0) {
    goto zero;
  }
  func_0203e8cc(param_1, 2, 1);
  if (*(s16 *)(r6 + 0x90) == 4) {
    goto c4;
  }
  if (*(s16 *)(r6 + 0x90) != 7) {
    goto call;
  }
  goto c7;
c4:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 1;
    }
  }
  goto call;
c7:
  if (*(s8 *)(param_1 + 0x8b) != 5) {
    if (*(s8 *)(param_1 + 0x8b) != 4) {
      *(u32 *)(param_1 + 0x948) = 8;
    }
  }
call:
  iVar2 = func_ov003_02198298(param_1);
  goto check;
zero:
  iVar2 = 0;
check:
  if (iVar2 != 0) {
    bVar1 = 1;
    goto done;
  }
  if (func_020289d0(param_1, 3, 0) != 0) {
    bVar1 = 1;
    goto done;
  }
  if (r4 == 0) {
    if (func_0202cd10(param_1, 3) != 0) {
      bVar1 = 1;
      goto done;
    }
  }
  bVar1 = 0;
done:
  if (bVar1 != 0) {
    return;
  }
  if (*(u16 *)(param_1 + 0xfc) <= 100) {
    return;
  }
  uVar3 = *(u32 *)*(u32 *)&data_0214f464 * 0x10dcd + 1;
  *(u32 *)*(u32 *)&data_0214f464 = uVar3;
  if ((u16)((((u32)(u16)uVar3) * 100) >> 16) == 0) {
    func_0203e908(param_1, 138);
  }
}
