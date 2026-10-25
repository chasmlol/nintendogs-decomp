#include "ctx.h"

extern u32 *func_0210f100(s32 a, s32 b);
extern s32 func_0211c294(u32 *a, s32 b);
extern s32 func_0209561c(void);
extern void func_02097b94(u32 a, u32 b, u32 c, u32 d, u32 e);

u32 func_0211e8f0(u8 *param_1)
{
  s32 iVar2;
  s32 iVar3;
  s32 iVar4;
  s32 uVar5;
  u32 *psVar1;
  u8 *q;
  uVar5 = 0;
  q = param_1 + 0x1cc0;
  psVar1 = func_0210f100(*(s16 *)(q + 8), *(s16 *)(q + 10));
  iVar3 = func_0211c294(psVar1, *(s32 *)q);
  iVar4 = *(s32 *)(param_1 + 4);
  if (iVar4 != 0) {
    iVar2 = *(s32 *)q;
    switch (iVar2) {
    case 2:
      iVar3 = iVar4 * iVar3 + *(s32 *)(param_1 + 8);
      if (iVar3 <= 0x5f5e0ff) {
        uVar5 = 1;
      } else {
        func_02097b94(8, 0x2455, 1, 0, 0);
      }
      break;
    case 4:
      iVar4 = func_0209561c();
      if (iVar4 >= 3) {
        func_02097b94(8, 0x2390, 0, 0, 0);
      } else {
        if (*(s32 *)(param_1 + 8) - iVar3 >= 0) {
          uVar5 = 1;
        } else {
          func_02097b94(8, 0x2329, 0, 0, 0);
        }
      }
      break;
    case 3:
      if (*(s32 *)(param_1 + 8) - iVar4 * iVar3 >= 0) {
        uVar5 = 1;
      } else {
        func_02097b94(8, 0x2329, 0, 0, 0);
      }
      break;
    default:
      if (*(s32 *)(param_1 + 8) - iVar4 * iVar3 >= 0) {
        uVar5 = 1;
      } else {
        func_02097b94(8, 0x2329, 0, 0, 0);
      }
      break;
    }
  }
  return uVar5;
}
