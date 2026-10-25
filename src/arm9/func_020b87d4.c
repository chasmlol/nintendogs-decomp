#include "ctx.h"

extern u8 data_02159060[];
extern u8 data_0215942c[];
extern u32 func_020ad77c(u8 *p);
extern void func_020ab630(u8 *p);
extern u32 func_02024140(void);
extern u32 func_020bb04c(u8 *p);
extern u32 func_020b8cd4(u8 *p);
extern void func_020ad7c8(u8 *p, u32 n);
extern void func_020ad6fc(u8 *p, u32 n);
extern u32 func_01ffdb08(s32 a);
extern void func_020293d8(u32 a, u32 b, u32 c);
extern u32 func_020b8b8c(u8 *p);
extern u32 func_020af848(u8 *p);
extern void func_020ab4fc(u8 *p);
extern void func_020b8a04(u8 *p);
extern u32 func_020ad690(u8 *p);
extern void func_020ad8f0(u8 *p);

void func_020b87d4(u8 *param_1)
{
  u32 flag;

  switch (*(s16 *)(param_1 + 0x2e)) {
  case 0:
    if (func_020ad77c(param_1) != 0) {
      func_020ab630(param_1);
    }
    return;
  case 1:
    if (*(s16 *)(*(u8 **)data_02159060 + 0x6c) != 0) {
      return;
    }
    flag = 0;
    if (func_02024140() != 0) {
      goto L164;
    }
    if (func_020bb04c(param_1) != 0) {
      flag = 1;
      goto L164;
    }
    if (func_020b8cd4(param_1) != 0) {
      flag = 1;
      goto L164;
    }
    {
      u32 bVar1 = 0;
      switch (*(s16 *)(param_1 + 0x138)) {
      case 1:
        func_020ad7c8(param_1, 0x11);
        func_020ad6fc(param_1, flag);
        bVar1 = 1;
        break;
      case 2:
        {
          s32 iVar3;
          func_020ad7c8(param_1, 10);
          func_020ad6fc(param_1, flag);
          iVar3 = func_01ffdb08(*(s16 *)(*(u8 **)data_0215942c + 0x1c));
          func_020293d8(iVar3, 89, 1);
        }
        bVar1 = 1;
        break;
      default:
        break;
      }
      if (bVar1 != 0) {
        *(s16 *)(param_1 + 0x138) = 0;
      }
      if (bVar1 != 0) {
        flag = 1;
        goto L164;
      }
      if (func_020b8b8c(param_1) != 0) {
        flag = 1;
        goto L164;
      }
      if (func_020af848(param_1) != 0) {
        flag = 1;
      }
    }
  L164:
    if (flag != 0) {
      return;
    }
    if (*(s32 *)(param_1 + 0x130) == -2) {
      *(s32 *)(param_1 + 0x130) = 0x8ca0;
    }
    if (*(s32 *)(param_1 + 0x134) == -2) {
      *(s32 *)(param_1 + 0x134) = 0x4650;
    }
    func_020ab4fc(param_1);
    func_020b8a04(param_1);
    return;
  case 2:
    break;
  case 3:
    *(s16 *)(param_1 + 0x30) = *(s16 *)(param_1 + 0x30) + 1;
    if (*(s16 *)(param_1 + 0x30) >= 60) {
      func_020ad7c8(param_1, 6);
      func_020ad6fc(param_1, 1);
    }
    return;
  case 4:
    if (func_020ad690(param_1) == 0) {
      return;
    }
    func_020ad8f0(param_1);
    break;
  }
}
