#include "ctx.h"

extern u32 data_0215216c;
extern u32 data_02152158;
extern void func_020898f4(u32 a, u32 b, u32 c, u32 d);
extern u32 func_02089ecc(void);
extern void func_02089f9c(int a);
extern void func_02089f0c(u32 a);
extern s32 func_0207fcb0(void *a, u32 b, u32 c);
extern void func_0206ffb4(u32 a);
extern void func_0206fff4(u32 a);
extern void func_0206ff50(u32 a);
extern void func_02089694(u32 a, u32 b, u32 c, u32 d);

void func_020710e8(u32 param_1, u32 param_2, u32 param_3)
{
  s32 iVar4;
  s32 iVar5;
  u32 uVar3;
  s32 bVar6;
  u32 *piVar1;

  piVar1 = &data_0215216c;
  if (*piVar1 == 0) {
    return;
  }
  iVar5 = 0;
  bVar6 = (s32)piVar1[11] >= 0;
  if (bVar6) {
    param_3 = 1 << piVar1[11];
  } else {
    param_3 = 0;
  }
  func_020898f4(piVar1[9], piVar1[10], param_3, 0);
  if (bVar6) {
    uVar3 = func_02089ecc();
    func_02089f9c(1);
    func_02089f0c(uVar3);
    do {
      iVar4 = func_0207fcb0((void *)&data_02152158, 0, 0);
    } while (iVar4 != 0);
  }
  if (piVar1[10] != 0) {
    func_0206ffb4(piVar1[10]);
  }
  if (piVar1[8] != 0) {
    func_0206fff4(piVar1[8]);
  }
  if (bVar6) {
    func_0206ff50(piVar1[11]);
  }
  if (piVar1[1] == 1) {
    func_02089694(0, 0, 0, 0);
  }
  *piVar1 = 0;
}
