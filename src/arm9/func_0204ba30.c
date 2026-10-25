#pragma avoid_byte strb
#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern s32 func_02036578(u8 *p);
extern s32 func_02035770(u8 *p, s32 a);
extern void func_0203e8cc(u8 *p, s32 a, s32 b);
extern void func_02026820(u8 *p);
extern void func_02025bb0(u8 *p);
extern void func_0203942c(u8 *p);
extern void func_02037450(u8 *p, s32 a);
extern void func_020381f0(u8 *p);
extern s32 func_0204be88(u8 *p, s32 a, s32 b);
extern void func_020362f8(u8 *p);
extern void func_0202fcc0(u8 *p);

void func_0204ba30(u8 *param_1)
{
  s32 iVar1;

  iVar1 = func_02036578(param_1);
  if (*(s16 *)(param_1 + 0x152) == 0x17) {
    goto blockA;
  }
  if (*(s16 *)(param_1 + 0x152) != 0x1e3) {
    goto after;
  }
  if (func_02035770(param_1, 0x1e) == 0) {
    goto after;
  }
  func_0203e8cc(param_1, 0, 0x17);
  param_1[147] = 5;
  param_1[152] = 7;
  func_02026820(param_1);
  func_02025bb0(param_1);
  goto after;
blockA:
  *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x360);
  if (*(s8 *)(param_1 + 0x98) == 7) {
    *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x2a0) +
                                (*(s32 *)(param_1 + 0x18c) - (*(s32 *)(param_1 + 0x1a4) << 1));
    *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
    *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) +
                                (*(s32 *)(param_1 + 0x194) - (*(s32 *)(param_1 + 0x1ac) << 1));
  } else {
    *(s32 *)(param_1 + 0x26c) = *(s32 *)(param_1 + 0x2a0) -
                                (*(s32 *)(param_1 + 0x18c) + (*(s32 *)(param_1 + 0x1a4) << 1));
    *(s32 *)(param_1 + 0x270) = *(s32 *)(param_1 + 0x2a4);
    *(s32 *)(param_1 + 0x274) = *(s32 *)(param_1 + 0x2a8) -
                                (*(s32 *)(param_1 + 0x194) + (*(s32 *)(param_1 + 0x1ac) << 1));
  }
  func_0203942c(param_1);
  func_02037450(param_1, 0x300);
  func_020381f0(param_1);
after:
  iVar1 = func_0204be88(param_1, iVar1, 0);
  if (iVar1 == 0) {
    if (*(u16 *)(param_1 + 0xfc) > 150) {
      func_020362f8(param_1);
      func_0202fcc0(param_1);
    }
  }
}
