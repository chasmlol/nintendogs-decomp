#include "ctx.h"

extern u8 data_0213b424[];

extern void func_02022b7c(u8 *p);
extern s32 func_02022dec(u8 *p, s32 a, s32 b);
extern s32 func_0203541c(u8 *p);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern s32 func_ov003_02198298(u8 *p);
extern s32 func_020289d0(u8 *p, s32 a, s32 b);
extern s32 func_0202cd10(u8 *p, s32 a);
extern s32 func_0203567c(u8 *p);
extern void func_0203e908(u8 *p, s32 a);

void func_02013f60(u8 *param_1)
{
  s32 bVar1;
  s32 iVar2;
  s32 x;

  func_02022b7c(param_1);
  bVar1 = *(u8 *)(param_1 + 0xa4) != 0;
  if (bVar1) {
    bVar1 = func_02022dec(param_1, *(s16 *)(param_1 + 0xf2), *(u8 *)(param_1 + 0xa6)) != 0;
  }
  iVar2 = func_0203541c(param_1);
  if (iVar2 == 0) goto zero;
  func_0203e8cc(param_1, 2, 1);
  x = *(s16 *)(iVar2 + 0x90);
  if (x == 4) goto c4;
  if (x != 7) goto dflt;
  goto c7;
c4:
  if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
    *(u32 *)(param_1 + 0x948) = 1;
  }
  goto dflt;
c7:
  if (*(s8 *)(param_1 + 0x8b) != 5 && *(s8 *)(param_1 + 0x8b) != 4) {
    *(u32 *)(param_1 + 0x948) = 8;
  }
dflt:
  iVar2 = func_ov003_02198298(param_1);
  goto after;
zero:
  iVar2 = 0;
after:
  if (iVar2 != 0) {
    iVar2 = 1;
    goto fin;
  }
  iVar2 = func_020289d0(param_1, 0, 0);
  if (iVar2 != 0) {
    iVar2 = 1;
    goto fin;
  }
  if (!bVar1) {
    iVar2 = func_0202cd10(param_1, 0);
    if (iVar2 != 0) {
      iVar2 = 1;
      goto fin;
    }
  }
  iVar2 = 0;
fin:
  if (iVar2 != 0) {
    return;
  }
  if (func_0203567c(param_1) != 0) {
    func_0203e908(param_1, 0);
  }
}
