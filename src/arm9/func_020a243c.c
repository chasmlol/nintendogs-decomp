#include "ctx.h"

extern u32 data_02159074;
extern u32 data_0214f130;
extern u8 data_021592ac[];
extern void func_0209adc8(s32 a);
extern void func_02072d28(s32 a, void *b);
extern void func_02072fe4(void *a, s32 b, s32 c);
extern void func_02070800(void *a, s32 b, s32 c);

void func_020a243c(void)
{
  s32 iVar1;
  s32 iVar2;
  s32 iVar3;
  u32 uVar4;
  u32 uVar5;
  u32 *piVar5;
  u8 *q5;
  u8 *q;

  piVar5 = *(u32 **)&data_02159074;
  q = *(u8 **)&data_0214f130;
  q5 = q + 44;
  func_0209adc8(0);
  func_02072d28(0x1c, piVar5);
  iVar2 = *(s32 *)(q + 0x2c);
  iVar1 = *(s32 *)(q5 + 0x4);
  iVar3 = *(s32 *)(q5 + 0x8);
  uVar4 = (u32)(iVar3 + (iVar2 + iVar1));
  func_02072fe4(data_021592ac, 0x12, 0);
  uVar4 = uVar4 * 0x10dcd + 1;
  func_02070800(data_021592ac, 0, (s16)(u16)(((u32)(u16)uVar4 * 6) >> 16));
  uVar5 = uVar4 * 0x10dcd + 1;
  func_02070800(data_021592ac, 1, (s16)(u16)(((u32)(u16)uVar5 * 10) >> 16));
  uVar4 = uVar5;
  iVar1 = 1;

  iVar2 = 0x10dcd;
  do {
    uVar4 = uVar4 * iVar2 + 1;
    func_02070800(data_021592ac, iVar1 + 1, (s16)(u16)(((u32)(u16)uVar4 * 9) >> 16));
    iVar1 = (s16)(iVar1 + 1);
  } while (iVar1 < 5);
}
