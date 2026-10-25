#include "ctx.h"

extern u32 func_020bb2d0;
extern s32 func_020ad77c(int p);
extern void func_020ab630(int p);
extern void func_02097b94(int a, u32 b, int c, u32 d, int e);
extern void func_020b9d98(int p);
extern s32 func_020ad690(int p);
extern void func_020ad8f0(int p);

void func_020b9c30(s16 *param_1)
{
  s32 bVar1;

  switch (param_1[0x17]) {
  case 0:
    bVar1 = func_020ad77c((int)param_1);
    if (bVar1 == 0) {
      return;
    }
    func_020ab630((int)param_1);
    switch (param_1[0x8c]) {
    case 0x13:
      func_02097b94(2, 0xc4f, 0, (u32)&func_020bb2d0, 0);
      return;
    case 0x14:
      break;
    case 0x15:
      break;
    case 0x16:
      break;
    case 0x17:
      break;
    case 0x18:
      break;
    case 0x19:
      func_02097b94(2, 0xc55, 0, (u32)&func_020bb2d0, 0);
      return;
    case 0x1a:
      break;
    case 0x1b:
      func_02097b94(2, 0xc56, 0, (u32)&func_020bb2d0, 0);
      return;
    case 0x1c:
      func_02097b94(2, 0xc59, 0, (u32)&func_020bb2d0, 0);
      return;
    }
    break;
  case 1:
    func_020b9d98((int)param_1);
    return;
  case 2:
    break;
  case 3:
    break;
  case 4:
    bVar1 = func_020ad690((int)param_1);
    if (bVar1 == 0) {
      return;
    }
    func_020ad8f0((int)param_1);
  }
}
