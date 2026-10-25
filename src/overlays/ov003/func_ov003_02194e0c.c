#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern int func_02026358(int p);
extern int func_02035770(int p, int a);
extern void func_0202615c(int p);
extern int func_0203579c(int p, int a);
extern u32 func_02028124(int p);
extern int func_020364cc(int p);
extern int func_020c1f34(int p);
extern void func_02037450(int p, int a);
extern int func_0203567c(int p);
extern void func_ov003_02197f94(int p, int a);

#define FX(a, b) ((u32)((s32)(((s64)(s32)(a) * (s64)(s32)(b) + 0x800) >> 12)))

void func_ov003_02194e0c(int param_1)
{
  int iVar2;
  int bVar1;
  u32 uVar3;
  int iVar4;

  if (*(s8 *)(param_1 + 0xa0) == 0) {
    func_02026358(param_1);
  } else {
    iVar2 = func_02035770(param_1, 0x15);
    if (iVar2 != 0) {
      func_0202615c(param_1);
    }
  }
  iVar2 = func_0203579c(param_1, 0x18);
  if (iVar2 != 0) {
    uVar3 = func_02028124(param_1);
    *(u32 *)(param_1 + 0x25c) = FX(uVar3, -80);
    *(u32 *)(param_1 + 0x264) = 0 - (*(u32 *)(param_1 + 0x25c) << 4);
  }
  iVar2 = func_020364cc(param_1);
  if (iVar2 != 0) {
    if (*(s16 *)(iVar2 + 0x90) == 0 || *(s16 *)(iVar2 + 0x90) == 2) {
      bVar1 = 1;
    } else if (*(s16 *)(iVar2 + 0x94) == 0x35 && func_020c1f34(iVar2) == 0) {
      bVar1 = 1;
    } else {
      bVar1 = 0;
    }
    if (!bVar1) {
      *(T3 *)(param_1 + 0x26c) = *(T3 *)(iVar2 + 0xbc);
      *(T3 *)(param_1 + 0x278) = *(T3 *)(param_1 + 0x26c);
      *(T3 *)(param_1 + 0x3b4) = *(T3 *)(param_1 + 0x26c);
      func_02037450(param_1, 0x100);
    }
  }
  iVar4 = func_0203567c(param_1);
  func_ov003_02197f94(param_1, iVar4);
}
