#include "ctx.h"

#define FXM(a, b) ((s32)((((s64)(a)) * ((s64)(b)) + 0x800) >> 12))

extern void func_02067e68(u8 *a, u8 *b, u8 *c);
extern s32 *func_02044468(void);

void func_0200c104(u8 *param_1)
{
  s32 *piVar3;
  s32 iVar5;
  s32 uVar1;

  if (*(s16 *)(param_1 + 0x1c) != 1) {
    return;
  }
  func_02067e68(param_1 + 0x20, param_1 + 0x2c, param_1 + 0x20);
  if (*(s32 *)(param_1 + 0x24) > 0x6000) {
    *(s32 *)(param_1 + 0x24) = 0x6000;
  }
  if (*(s32 *)(param_1 + 0x24) < 0) {
    *(s32 *)(param_1 + 0x24) = 0;
  }
  piVar3 = func_02044468();
  iVar5 = *piVar3 * 0x10dcd + 1;
  *piVar3 = iVar5;
  *(s32 *)(param_1 + 0x2c) = FXM(*(s32 *)(param_1 + 0x20), -4) +
                             ((FXM(*(s32 *)(param_1 + 0x2c), 0xe6a) - 0x80) +
                              FXM((s16)(u16)(iVar5 & 0xfff), 256));
  piVar3 = func_02044468();
  iVar5 = *piVar3 * 0x10dcd + 1;
  *piVar3 = iVar5;
  *(s32 *)(param_1 + 0x30) = (FXM(*(s32 *)(param_1 + 0x30), 0xe6a) - 0x80) +
                             FXM((s16)(u16)(iVar5 & 0xfff), 256);
  piVar3 = func_02044468();
  iVar5 = *piVar3 * 0x10dcd + 1;
  *piVar3 = iVar5;
  *(s32 *)(param_1 + 0x34) = FXM(*(s32 *)(param_1 + 0x28), -4) +
                             ((FXM(*(s32 *)(param_1 + 0x34), 0xe6a) - 0x80) +
                              FXM((s16)(u16)(iVar5 & 0xfff), 256));
}
