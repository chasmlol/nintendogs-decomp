#include "ctx.h"

typedef struct { u32 w[3]; } T3;

extern void func_02026358(int p);
extern int func_02035744(int p, int a);
extern void func_020266f8(int p);
extern void func_0202615c(int p);
extern int func_020364cc(int p);
extern int func_020c1f34(int p);
extern void func_02037450(int p, u32 a);
extern int func_0203567c(int p);
extern void func_ov003_02197f94(int p, int a);

void func_ov003_021952fc(int param_1)
{
  int iVar2;
  int bVar1;
  u32 uVar6;

  if (*(s8 *)(param_1 + 160) == 0) {
    func_02026358(param_1);
    uVar6 = 0x100;
  }
  else {
    iVar2 = func_02035744(param_1, 19);
    if (iVar2 != 0) {
      func_0202615c(param_1);
      uVar6 = 0x112;
    }
    else {
      func_020266f8(param_1);
      uVar6 = 0x100;
    }
  }
  iVar2 = func_020364cc(param_1);
  if (iVar2 != 0) {
    if (*(s16 *)(iVar2 + 144) == 0 || *(s16 *)(iVar2 + 144) == 2) {
      bVar1 = 1;
    }
    else if (*(s16 *)(iVar2 + 148) == 53 && func_020c1f34(iVar2) == 0) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    if (!bVar1) {
      *(T3 *)(param_1 + 620) = *(T3 *)(iVar2 + 188);
      *(T3 *)(param_1 + 632) = *(T3 *)(param_1 + 620);
      *(T3 *)(param_1 + 948) = *(T3 *)(param_1 + 620);
      func_02037450(param_1, uVar6);
    }
  }
  iVar2 = func_0203567c(param_1);
  func_ov003_02197f94(param_1, iVar2);
}
